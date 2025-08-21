#ifndef org_apache_lucene_util_ArrayUtil_H
#define org_apache_lucene_util_ArrayUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class NumberFormatException;
  }
  namespace util {
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ArrayUtil$ByteArrayComparator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ArrayUtil : public ::java::lang::Object {
         public:
          enum {
            mid_compareUnsigned4_fff87cff58be6aa4,
            mid_compareUnsigned8_fff87cff58be6aa4,
            mid_copyArray_e12d7a809951cf96,
            mid_copyArray_6073ab1a366edb1a,
            mid_copyArray_150333951c5dac7a,
            mid_copyArray_2f2336a2f4b2ecf2,
            mid_copyArray_25fa0d2c5d5e9b75,
            mid_copyArray_ba1b2f67115a473f,
            mid_copyArray_1794d6b866766560,
            mid_copyArray_f9b95c045f95c525,
            mid_copyOfSubArray_abf188c35924da6e,
            mid_copyOfSubArray_d7ecf4e86469b03a,
            mid_copyOfSubArray_63fbf96415efef6b,
            mid_copyOfSubArray_e3f0d88b0f929498,
            mid_copyOfSubArray_a62673dc39dabf57,
            mid_copyOfSubArray_277370767c0a32fb,
            mid_copyOfSubArray_358ba735bde2cdf2,
            mid_copyOfSubArray_1c491e007093d992,
            mid_getUnsignedComparator_12a77d888b56fe8e,
            mid_grow_e12d7a809951cf96,
            mid_grow_6073ab1a366edb1a,
            mid_grow_150333951c5dac7a,
            mid_grow_2f2336a2f4b2ecf2,
            mid_grow_25fa0d2c5d5e9b75,
            mid_grow_ba1b2f67115a473f,
            mid_grow_1794d6b866766560,
            mid_grow_f9b95c045f95c525,
            mid_grow_c6a3d03b859b9502,
            mid_grow_d19984ba38ba07d6,
            mid_grow_c59c7cf9540aa8fe,
            mid_grow_305226a04960a832,
            mid_grow_4faa21290e4f519d,
            mid_grow_10ae0584eaa55ce1,
            mid_grow_78d2eae5e5be5d4b,
            mid_grow_ba348af6ded8d40f,
            mid_growExact_c6a3d03b859b9502,
            mid_growExact_d19984ba38ba07d6,
            mid_growExact_c59c7cf9540aa8fe,
            mid_growExact_305226a04960a832,
            mid_growExact_4faa21290e4f519d,
            mid_growExact_10ae0584eaa55ce1,
            mid_growExact_78d2eae5e5be5d4b,
            mid_growExact_ba348af6ded8d40f,
            mid_growInRange_a62673dc39dabf57,
            mid_growNoCopy_c6a3d03b859b9502,
            mid_growNoCopy_4faa21290e4f519d,
            mid_growNoCopy_10ae0584eaa55ce1,
            mid_hashCode_db543c1e894f3140,
            mid_introSort_2886a27e2b9d4836,
            mid_introSort_f9cf02214abc14bf,
            mid_introSort_51b5fa03b6bdd840,
            mid_introSort_8b18c0c9b31a9582,
            mid_oversize_7f733b5d08bb5ec4,
            mid_parseInt_db543c1e894f3140,
            mid_parseInt_c8b0c06d307db35b,
            mid_select_08c7c32f2133a509,
            mid_swap_d1fdf6f5e18b5206,
            mid_timSort_2886a27e2b9d4836,
            mid_timSort_f9cf02214abc14bf,
            mid_timSort_51b5fa03b6bdd840,
            mid_timSort_8b18c0c9b31a9582,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArrayUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ArrayUtil(const ArrayUtil& obj) : ::java::lang::Object(obj) {}

          static jint MAX_ARRAY_LENGTH;

          static jint compareUnsigned4(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint);
          static jint compareUnsigned8(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint);
          static JArray< jbyte > copyArray(const JArray< jbyte > &);
          static JArray< jchar > copyArray(const JArray< jchar > &);
          static JArray< jdouble > copyArray(const JArray< jdouble > &);
          static JArray< jfloat > copyArray(const JArray< jfloat > &);
          static JArray< jint > copyArray(const JArray< jint > &);
          static JArray< jlong > copyArray(const JArray< jlong > &);
          static JArray< ::java::lang::Object > copyArray(const JArray< ::java::lang::Object > &);
          static JArray< jshort > copyArray(const JArray< jshort > &);
          static JArray< jbyte > copyOfSubArray(const JArray< jbyte > &, jint, jint);
          static JArray< jchar > copyOfSubArray(const JArray< jchar > &, jint, jint);
          static JArray< jdouble > copyOfSubArray(const JArray< jdouble > &, jint, jint);
          static JArray< jfloat > copyOfSubArray(const JArray< jfloat > &, jint, jint);
          static JArray< jint > copyOfSubArray(const JArray< jint > &, jint, jint);
          static JArray< jlong > copyOfSubArray(const JArray< jlong > &, jint, jint);
          static JArray< ::java::lang::Object > copyOfSubArray(const JArray< ::java::lang::Object > &, jint, jint);
          static JArray< jshort > copyOfSubArray(const JArray< jshort > &, jint, jint);
          static ::org::apache::lucene::util::ArrayUtil$ByteArrayComparator getUnsignedComparator(jint);
          static JArray< jbyte > grow(const JArray< jbyte > &);
          static JArray< jchar > grow(const JArray< jchar > &);
          static JArray< jdouble > grow(const JArray< jdouble > &);
          static JArray< jfloat > grow(const JArray< jfloat > &);
          static JArray< jint > grow(const JArray< jint > &);
          static JArray< jlong > grow(const JArray< jlong > &);
          static JArray< ::java::lang::Object > grow(const JArray< ::java::lang::Object > &);
          static JArray< jshort > grow(const JArray< jshort > &);
          static JArray< jbyte > grow(const JArray< jbyte > &, jint);
          static JArray< jchar > grow(const JArray< jchar > &, jint);
          static JArray< jdouble > grow(const JArray< jdouble > &, jint);
          static JArray< jfloat > grow(const JArray< jfloat > &, jint);
          static JArray< jint > grow(const JArray< jint > &, jint);
          static JArray< jlong > grow(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > grow(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > grow(const JArray< jshort > &, jint);
          static JArray< jbyte > growExact(const JArray< jbyte > &, jint);
          static JArray< jchar > growExact(const JArray< jchar > &, jint);
          static JArray< jdouble > growExact(const JArray< jdouble > &, jint);
          static JArray< jfloat > growExact(const JArray< jfloat > &, jint);
          static JArray< jint > growExact(const JArray< jint > &, jint);
          static JArray< jlong > growExact(const JArray< jlong > &, jint);
          static JArray< ::java::lang::Object > growExact(const JArray< ::java::lang::Object > &, jint);
          static JArray< jshort > growExact(const JArray< jshort > &, jint);
          static JArray< jint > growInRange(const JArray< jint > &, jint, jint);
          static JArray< jbyte > growNoCopy(const JArray< jbyte > &, jint);
          static JArray< jint > growNoCopy(const JArray< jint > &, jint);
          static JArray< jlong > growNoCopy(const JArray< jlong > &, jint);
          static jint hashCode(const JArray< jchar > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Comparable > &);
          static void introSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void introSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void introSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
          static jint oversize(jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint);
          static jint parseInt(const JArray< jchar > &, jint, jint, jint);
          static void select(const JArray< ::java::lang::Object > &, jint, jint, jint, const ::java::util::Comparator &);
          static void swap(const JArray< ::java::lang::Object > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Comparable > &);
          static void timSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
          static void timSort(const JArray< ::java::lang::Comparable > &, jint, jint);
          static void timSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
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
        extern PyType_Def PY_TYPE_DEF(ArrayUtil);
        extern PyTypeObject *PY_TYPE(ArrayUtil);

        class t_ArrayUtil {
        public:
          PyObject_HEAD
          ArrayUtil object;
          static PyObject *wrap_Object(const ArrayUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
