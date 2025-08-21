#ifndef org_apache_lucene_util_NumericUtils_H
#define org_apache_lucene_util_NumericUtils_H

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

        class NumericUtils : public ::java::lang::Object {
         public:
          enum {
            mid_add_04d9c6d4fd107059,
            mid_doubleToSortableLong_f3afe967d000867c,
            mid_floatToSortableInt_739cf609cad4f3fa,
            mid_intToSortableBytes_0922bf48b8e1692d,
            mid_longToSortableBytes_be470a93ee399bf5,
            mid_sortableBytesToInt_ed6f790242489170,
            mid_sortableBytesToLong_e68bac179e5a013e,
            mid_sortableDoubleBits_91d66fa3ea476cea,
            mid_sortableFloatBits_3c9bba330f083871,
            mid_sortableIntToFloat_29cfa01aaad92564,
            mid_sortableLongToDouble_212c665780cd8e77,
            mid_subtract_04d9c6d4fd107059,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericUtils(const NumericUtils& obj) : ::java::lang::Object(obj) {}

          static void add(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
          static jlong doubleToSortableLong(jdouble);
          static jint floatToSortableInt(jfloat);
          static void intToSortableBytes(jint, const JArray< jbyte > &, jint);
          static void longToSortableBytes(jlong, const JArray< jbyte > &, jint);
          static jint sortableBytesToInt(const JArray< jbyte > &, jint);
          static jlong sortableBytesToLong(const JArray< jbyte > &, jint);
          static jlong sortableDoubleBits(jlong);
          static jint sortableFloatBits(jint);
          static jfloat sortableIntToFloat(jint);
          static jdouble sortableLongToDouble(jlong);
          static void subtract(jint, jint, const JArray< jbyte > &, const JArray< jbyte > &, const JArray< jbyte > &);
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
        extern PyType_Def PY_TYPE_DEF(NumericUtils);
        extern PyTypeObject *PY_TYPE(NumericUtils);

        class t_NumericUtils {
        public:
          PyObject_HEAD
          NumericUtils object;
          static PyObject *wrap_Object(const NumericUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
