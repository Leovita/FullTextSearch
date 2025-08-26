#ifndef org_apache_lucene_util_SmallFloat_H
#define org_apache_lucene_util_SmallFloat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SmallFloat : public ::java::lang::Object {
         public:
          enum {
            mid_byte315ToFloat_a57d59f158e09754,
            mid_byte4ToInt_a06f8b67893a843a,
            mid_byteToFloat_4f656137321f1c6e,
            mid_floatToByte_fd5a0455a16d140d,
            mid_floatToByte315_84c61ae6de481334,
            mid_int4ToLong_49af390f180d8ee7,
            mid_intToByte4_9e902c8fd52d5208,
            mid_longToInt4_7af44747c1921bd4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SmallFloat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SmallFloat(const SmallFloat& obj) : ::java::lang::Object(obj) {}

          static jfloat byte315ToFloat(jbyte);
          static jint byte4ToInt(jbyte);
          static jfloat byteToFloat(jbyte, jint, jint);
          static jbyte floatToByte(jfloat, jint, jint);
          static jbyte floatToByte315(jfloat);
          static jlong int4ToLong(jint);
          static jbyte intToByte4(jint);
          static jint longToInt4(jlong);
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
        extern PyType_Def PY_TYPE_DEF(SmallFloat);
        extern PyTypeObject *PY_TYPE(SmallFloat);

        class t_SmallFloat {
        public:
          PyObject_HEAD
          SmallFloat object;
          static PyObject *wrap_Object(const SmallFloat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
