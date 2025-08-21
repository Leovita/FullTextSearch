#ifndef org_apache_lucene_util_PagedBytes_H
#define org_apache_lucene_util_PagedBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class PagedBytes$PagedBytesDataOutput;
        class PagedBytes$Reader;
        class PagedBytes$PagedBytesDataInput;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes : public ::java::lang::Object {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_copy_3c1c8b9777cb436a,
            mid_copy_e141c9ec2d8e5d0f,
            mid_copyUsingLengthPrefix_7595cb5441b08443,
            mid_freeze_2bc8a199a4377e3b,
            mid_getDataInput_18c2b2e0cc045a79,
            mid_getDataOutput_b1f623af872b5c6b,
            mid_getPointer_16939d9d0a9a9721,
            mid_ramBytesUsed_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes(const PagedBytes& obj) : ::java::lang::Object(obj) {}

          PagedBytes(jint);

          void copy(const ::org::apache::lucene::store::IndexInput &, jlong) const;
          void copy(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong copyUsingLengthPrefix(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::PagedBytes$Reader freeze(jboolean) const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataInput getDataInput() const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataOutput getDataOutput() const;
          jlong getPointer() const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(PagedBytes);
        extern PyTypeObject *PY_TYPE(PagedBytes);

        class t_PagedBytes {
        public:
          PyObject_HEAD
          PagedBytes object;
          static PyObject *wrap_Object(const PagedBytes&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
