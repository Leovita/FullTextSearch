#ifndef org_apache_lucene_util_PagedBytes_H
#define org_apache_lucene_util_PagedBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$Reader;
        class Accountable;
        class BytesRef;
        class PagedBytes$PagedBytesDataOutput;
        class PagedBytes$PagedBytesDataInput;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_init$_8226bd0b0fc13dba,
            mid_copy_4d1d9ae190b172b3,
            mid_copy_a99b2b9f447793b8,
            mid_copyUsingLengthPrefix_8c6e1447894d7a38,
            mid_freeze_f21667137b5babe1,
            mid_getDataInput_516bd0eaa8217a13,
            mid_getDataOutput_14e5421f7dd9f25b,
            mid_getPointer_0f176418e3e16541,
            mid_ramBytesUsed_0f176418e3e16541,
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
