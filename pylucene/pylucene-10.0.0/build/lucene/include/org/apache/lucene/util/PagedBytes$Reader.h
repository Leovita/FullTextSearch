#ifndef org_apache_lucene_util_PagedBytes$Reader_H
#define org_apache_lucene_util_PagedBytes$Reader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes$Reader : public ::java::lang::Object {
         public:
          enum {
            mid_fill_0ad076b578ea277f,
            mid_fillSlice_4c954529bc7bbe03,
            mid_getByte_cb04f80b25dc941d,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$Reader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$Reader(const PagedBytes$Reader& obj) : ::java::lang::Object(obj) {}

          void fill(const ::org::apache::lucene::util::BytesRef &, jlong) const;
          void fillSlice(const ::org::apache::lucene::util::BytesRef &, jlong, jint) const;
          jbyte getByte(jlong) const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes$Reader);
        extern PyTypeObject *PY_TYPE(PagedBytes$Reader);

        class t_PagedBytes$Reader {
        public:
          PyObject_HEAD
          PagedBytes$Reader object;
          static PyObject *wrap_Object(const PagedBytes$Reader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
