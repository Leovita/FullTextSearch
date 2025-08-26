#ifndef org_apache_lucene_util_ToStringUtils_H
#define org_apache_lucene_util_ToStringUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class StringBuilder;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefBuilder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ToStringUtils : public ::java::lang::Object {
         public:
          enum {
            mid_byteArray_f3183a32a6d34fd0,
            mid_bytesRefToString_e16a141122e42829,
            mid_bytesRefToString_0f852bf1d5588bee,
            mid_bytesRefToString_518107ea555fac21,
            mid_longHex_229c7997533c8554,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ToStringUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ToStringUtils(const ToStringUtils& obj) : ::java::lang::Object(obj) {}

          static void byteArray(const ::java::lang::StringBuilder &, const JArray< jbyte > &);
          static ::java::lang::String bytesRefToString(const JArray< jbyte > &);
          static ::java::lang::String bytesRefToString(const ::org::apache::lucene::util::BytesRef &);
          static ::java::lang::String bytesRefToString(const ::org::apache::lucene::util::BytesRefBuilder &);
          static ::java::lang::String longHex(jlong);
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
        extern PyType_Def PY_TYPE_DEF(ToStringUtils);
        extern PyTypeObject *PY_TYPE(ToStringUtils);

        class t_ToStringUtils {
        public:
          PyObject_HEAD
          ToStringUtils object;
          static PyObject *wrap_Object(const ToStringUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
