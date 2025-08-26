#ifndef org_apache_lucene_geo_XYEncodingUtils_H
#define org_apache_lucene_geo_XYEncodingUtils_H

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
      namespace geo {

        class XYEncodingUtils : public ::java::lang::Object {
         public:
          enum {
            mid_decode_5873a23b935a9d49,
            mid_decode_5a5c564d6d4c0b92,
            mid_encode_96b611d51a3ba940,
            mid_floatArrayToDoubleArray_0314bbc4746ff32b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYEncodingUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYEncodingUtils(const XYEncodingUtils& obj) : ::java::lang::Object(obj) {}

          static jdouble MAX_VAL_INCL;
          static jdouble MIN_VAL_INCL;

          static jfloat decode(jint);
          static jfloat decode(const JArray< jbyte > &, jint);
          static jint encode(jfloat);
          static JArray< jdouble > floatArrayToDoubleArray(const JArray< jfloat > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(XYEncodingUtils);
        extern PyTypeObject *PY_TYPE(XYEncodingUtils);

        class t_XYEncodingUtils {
        public:
          PyObject_HEAD
          XYEncodingUtils object;
          static PyObject *wrap_Object(const XYEncodingUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
