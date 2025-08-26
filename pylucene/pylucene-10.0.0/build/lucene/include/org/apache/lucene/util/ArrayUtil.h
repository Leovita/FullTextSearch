#ifndef org_apache_lucene_util_ArrayUtil_H
#define org_apache_lucene_util_ArrayUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Class;
    class Comparable;
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
            mid_compareUnsigned4_450e09cafec2800d,
            mid_compareUnsigned8_450e09cafec2800d,
            mid_copyArray_616e2252aea2955c,
            mid_copyArray_4c996af0c1ba4aff,
            mid_copyArray_7fe70065d9a66c6d,
            mid_copyArray_f16239f6f31bef88,
            mid_copyArray_16fe45a39b993f40,
            mid_copyArray_95b8f60c58d98593,
            mid_copyArray_0b4a993b49b6d8e8,
            mid_copyArray_4aa7d41132e2f819,
            mid_copyOfSubArray_1a2af1ff1d0122e5,
            mid_copyOfSubArray_8c3f54f248a5879c,
            mid_copyOfSubArray_151fae8ed377cfae,
            mid_copyOfSubArray_3957e57038695489,
            mid_copyOfSubArray_257bd3426e056311,
            mid_copyOfSubArray_c5e6f7189ca68501,
            mid_copyOfSubArray_f76cd2d2c2fff1a9,
            mid_copyOfSubArray_6b4031e6e3ba9828,
            mid_getUnsignedComparator_e23a0bcc5d818ee0,
            mid_grow_616e2252aea2955c,
            mid_grow_4c996af0c1ba4aff,
            mid_grow_7fe70065d9a66c6d,
            mid_grow_f16239f6f31bef88,
            mid_grow_16fe45a39b993f40,
            mid_grow_95b8f60c58d98593,
            mid_grow_0b4a993b49b6d8e8,
            mid_grow_4aa7d41132e2f819,
            mid_grow_2679e5ee8f5c3848,
            mid_grow_4a48d64d7bc173c7,
            mid_grow_5631d273c27ec985,
            mid_grow_8bbb39ddbb08898f,
            mid_grow_682d7dbc7c47c92b,
            mid_grow_649e0be099709178,
            mid_grow_1a01141f970dc9cd,
            mid_grow_762c7421a7077678,
            mid_growExact_2679e5ee8f5c3848,
            mid_growExact_4a48d64d7bc173c7,
            mid_growExact_5631d273c27ec985,
            mid_growExact_8bbb39ddbb08898f,
            mid_growExact_682d7dbc7c47c92b,
            mid_growExact_649e0be099709178,
            mid_growExact_1a01141f970dc9cd,
            mid_growExact_762c7421a7077678,
            mid_growInRange_257bd3426e056311,
            mid_growNoCopy_2679e5ee8f5c3848,
            mid_growNoCopy_682d7dbc7c47c92b,
            mid_growNoCopy_649e0be099709178,
            mid_hashCode_872baf22ed11fbaa,
            mid_introSort_e08b7c1295f82453,
            mid_introSort_4f500158d223aa21,
            mid_introSort_1747701ab3de39eb,
            mid_introSort_6ffc04636c800799,
            mid_oversize_7f27cf81a85a97e9,
            mid_parseInt_872baf22ed11fbaa,
            mid_parseInt_d1e8f79f5b105403,
            mid_select_1600c6901e678cc7,
            mid_swap_be1247b470fb0930,
            mid_timSort_e08b7c1295f82453,
            mid_timSort_4f500158d223aa21,
            mid_timSort_1747701ab3de39eb,
            mid_timSort_6ffc04636c800799,
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
