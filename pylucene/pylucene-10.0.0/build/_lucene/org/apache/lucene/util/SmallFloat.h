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
            mid_byte315ToFloat_3b41e541864adcbc,
            mid_byte4ToInt_9e29d85df323014f,
            mid_byteToFloat_829f8ac69eb32272,
            mid_floatToByte_04ecff02fdeaa931,
            mid_floatToByte315_d83b517543fc4b48,
            mid_int4ToLong_7b22650fccb5d574,
            mid_intToByte4_3b30672d0bff9ebb,
            mid_longToInt4_35c872f03f347c10,
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
