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
            mid_add_ea987979b873ea6d,
            mid_doubleToSortableLong_67f9dea4fed56fc8,
            mid_floatToSortableInt_96b611d51a3ba940,
            mid_intToSortableBytes_ad0ff3d807879a2c,
            mid_longToSortableBytes_722532cf3f3003a2,
            mid_sortableBytesToInt_ae2551807aeb85ef,
            mid_sortableBytesToLong_6566cb2be8167573,
            mid_sortableDoubleBits_3dc1c6e3a5a0baf0,
            mid_sortableFloatBits_a3904e10f5bb9437,
            mid_sortableIntToFloat_5873a23b935a9d49,
            mid_sortableLongToDouble_1f153cac77223155,
            mid_subtract_ea987979b873ea6d,
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
