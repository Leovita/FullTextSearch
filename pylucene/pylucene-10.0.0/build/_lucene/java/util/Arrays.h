#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class IntBinaryOperator;
      class IntUnaryOperator;
      class LongBinaryOperator;
      class IntToDoubleFunction;
      class BinaryOperator;
      class IntToLongFunction;
      class IntFunction;
      class DoubleBinaryOperator;
    }
    class Spliterator$OfLong;
    class Spliterator;
    class Spliterator$OfInt;
    class Comparator;
    class Spliterator$OfDouble;
    class List;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_ebb457715b104bd1,
        mid_binarySearch_c0dd01c93de5bc3b,
        mid_binarySearch_c7007159da624769,
        mid_binarySearch_a8b50e60528261a7,
        mid_binarySearch_109d4e3edd51df88,
        mid_binarySearch_db22716ef8bbb44c,
        mid_binarySearch_79f3181ec11dab09,
        mid_binarySearch_6ff793f1eaca197e,
        mid_binarySearch_9ec52c0506da4d1f,
        mid_binarySearch_4278cbc4ac1e3285,
        mid_binarySearch_e210f9a4c6e30349,
        mid_binarySearch_37e335e72baa4823,
        mid_binarySearch_f2a8850b76ff67a1,
        mid_binarySearch_f90db91e37cdfc56,
        mid_binarySearch_e25a570802e55f2d,
        mid_binarySearch_422b3c7e97a4d11b,
        mid_binarySearch_8e70bd14307bad6b,
        mid_binarySearch_9adf820a72812daf,
        mid_binarySearch_ebf4f81f9f65a5d7,
        mid_compare_75b7f528788b10ee,
        mid_compare_d65cfb8bad59aa64,
        mid_compare_4a49b575fa532869,
        mid_compare_b5952e917014c311,
        mid_compare_514bd6b943b29f09,
        mid_compare_a9ffa97a7b3ef8ef,
        mid_compare_24d5509787a6e839,
        mid_compare_5b14f56d4441979d,
        mid_compare_f9a73f5096f935c5,
        mid_compare_8cd3b277eb247986,
        mid_compare_665b17b19ef1bcc8,
        mid_compare_480ca56a44633629,
        mid_compare_86716d880bf6073f,
        mid_compare_f069295f79dc077d,
        mid_compare_7a2e257b6e7fcdf6,
        mid_compare_9f735f3c5f7a65b9,
        mid_compare_7a883ef3e21362cd,
        mid_compare_343e08d2a0c983ec,
        mid_compare_411d273eeaaa2a21,
        mid_compare_9d86db472a67fb2c,
        mid_compareUnsigned_75b7f528788b10ee,
        mid_compareUnsigned_514bd6b943b29f09,
        mid_compareUnsigned_a9ffa97a7b3ef8ef,
        mid_compareUnsigned_5b14f56d4441979d,
        mid_compareUnsigned_665b17b19ef1bcc8,
        mid_compareUnsigned_7a2e257b6e7fcdf6,
        mid_compareUnsigned_9f735f3c5f7a65b9,
        mid_compareUnsigned_343e08d2a0c983ec,
        mid_copyOf_2679e5ee8f5c3848,
        mid_copyOf_4a48d64d7bc173c7,
        mid_copyOf_5631d273c27ec985,
        mid_copyOf_8bbb39ddbb08898f,
        mid_copyOf_682d7dbc7c47c92b,
        mid_copyOf_649e0be099709178,
        mid_copyOf_1a01141f970dc9cd,
        mid_copyOf_762c7421a7077678,
        mid_copyOf_6e3ddec5b9953fec,
        mid_copyOf_5468b5bea54c2320,
        mid_copyOfRange_1a2af1ff1d0122e5,
        mid_copyOfRange_8c3f54f248a5879c,
        mid_copyOfRange_151fae8ed377cfae,
        mid_copyOfRange_3957e57038695489,
        mid_copyOfRange_257bd3426e056311,
        mid_copyOfRange_c5e6f7189ca68501,
        mid_copyOfRange_f76cd2d2c2fff1a9,
        mid_copyOfRange_6b4031e6e3ba9828,
        mid_copyOfRange_15bc3240cc76f424,
        mid_copyOfRange_334158e0ae21927e,
        mid_deepEquals_81e7e9a1c62a74dc,
        mid_deepHashCode_429fa8523f85f553,
        mid_deepToString_29a154f79fc91e5a,
        mid_equals_070def74189bf94c,
        mid_equals_da5d99cae2b40f44,
        mid_equals_5acbebc6c7eea60c,
        mid_equals_b25c9ac7022f898f,
        mid_equals_8df25f38df84b1a9,
        mid_equals_92ffc2a9bfd460c3,
        mid_equals_81e7e9a1c62a74dc,
        mid_equals_a19f15a3bb93960f,
        mid_equals_5934d1f1f77f6650,
        mid_equals_05078856263800cb,
        mid_equals_49eacacc499d4eb7,
        mid_equals_4973c867b64831e6,
        mid_equals_af48a3805b91c758,
        mid_equals_f48e9279fa6fbb89,
        mid_equals_30a74da0245b76cd,
        mid_equals_c106eaf05fc04b31,
        mid_equals_a6f61017f1cdddf2,
        mid_equals_5634385b1c12a81e,
        mid_equals_fc455d36fea772ab,
        mid_equals_b327e2a1cb4af4cc,
        mid_fill_b7a2af8da2bc42ff,
        mid_fill_0eb6dd1b4f4ad03e,
        mid_fill_38ad9713b48a0b3f,
        mid_fill_a55f466c3aaef65d,
        mid_fill_4b69c760d4874f88,
        mid_fill_258644d56665ca86,
        mid_fill_90ae7ddfde52575c,
        mid_fill_a1b48247548a724c,
        mid_fill_f61c1fe7a5b9aca6,
        mid_fill_292f08ac8f5304b7,
        mid_fill_c4e01aae5e17b9b1,
        mid_fill_4aa715acce3424ff,
        mid_fill_773d4defd2d27ee8,
        mid_fill_6a33b243383f510e,
        mid_fill_f290406b3be1fb3a,
        mid_fill_67cfa177a9c11579,
        mid_fill_273d793e8763fd30,
        mid_fill_869e2738096ce3de,
        mid_hashCode_9878f7b1ab77aa6c,
        mid_hashCode_b5302190531968fe,
        mid_hashCode_7408247d0ea2a3c4,
        mid_hashCode_f1ccb4e9f6bfafc0,
        mid_hashCode_ce3442f6684197de,
        mid_hashCode_9ea1f92f698600c6,
        mid_hashCode_429fa8523f85f553,
        mid_hashCode_f83d4ee9ef309a15,
        mid_hashCode_8f54448d8ae97ecf,
        mid_mismatch_75b7f528788b10ee,
        mid_mismatch_d65cfb8bad59aa64,
        mid_mismatch_4a49b575fa532869,
        mid_mismatch_b5952e917014c311,
        mid_mismatch_514bd6b943b29f09,
        mid_mismatch_a9ffa97a7b3ef8ef,
        mid_mismatch_f9af3561d7321f40,
        mid_mismatch_5b14f56d4441979d,
        mid_mismatch_f9a73f5096f935c5,
        mid_mismatch_8cd3b277eb247986,
        mid_mismatch_665b17b19ef1bcc8,
        mid_mismatch_480ca56a44633629,
        mid_mismatch_86716d880bf6073f,
        mid_mismatch_f069295f79dc077d,
        mid_mismatch_7a2e257b6e7fcdf6,
        mid_mismatch_9f735f3c5f7a65b9,
        mid_mismatch_26619264bd63c066,
        mid_mismatch_343e08d2a0c983ec,
        mid_mismatch_411d273eeaaa2a21,
        mid_mismatch_9d86db472a67fb2c,
        mid_parallelPrefix_8c125409c993f010,
        mid_parallelPrefix_0a94706c5251bbd8,
        mid_parallelPrefix_8e6618aeaef5d4f9,
        mid_parallelPrefix_6e9f4840925f2356,
        mid_parallelPrefix_136eb6ab098caf0f,
        mid_parallelPrefix_9b79f02ee1458b14,
        mid_parallelPrefix_1ef5de9d42c8f91e,
        mid_parallelPrefix_9af75e46c22f19d3,
        mid_parallelSetAll_cf00e86039a7b303,
        mid_parallelSetAll_d19ea0b3f4f0d5a5,
        mid_parallelSetAll_c74fcc3c474cb98b,
        mid_parallelSetAll_9de59a362c9cc38c,
        mid_parallelSort_a4d4f283481182e8,
        mid_parallelSort_ae4452529cb9c0dd,
        mid_parallelSort_7dc1191a69fe0b60,
        mid_parallelSort_d2e2fadde4bf8d25,
        mid_parallelSort_5434f4e6ff59bff9,
        mid_parallelSort_bf6da8fca8728f3d,
        mid_parallelSort_e08b7c1295f82453,
        mid_parallelSort_a785b446165fc826,
        mid_parallelSort_4f500158d223aa21,
        mid_parallelSort_116f7fcb5bff0f39,
        mid_parallelSort_186bb5d1c1aec30c,
        mid_parallelSort_ec98980f6015e103,
        mid_parallelSort_a1c18faad4aff7a1,
        mid_parallelSort_57da58ead958e473,
        mid_parallelSort_2a4a0e3eb510f108,
        mid_parallelSort_1747701ab3de39eb,
        mid_parallelSort_c045de5c45d0340e,
        mid_parallelSort_6ffc04636c800799,
        mid_setAll_d19ea0b3f4f0d5a5,
        mid_setAll_c74fcc3c474cb98b,
        mid_setAll_9de59a362c9cc38c,
        mid_setAll_cf00e86039a7b303,
        mid_sort_a4d4f283481182e8,
        mid_sort_ae4452529cb9c0dd,
        mid_sort_7dc1191a69fe0b60,
        mid_sort_d2e2fadde4bf8d25,
        mid_sort_5434f4e6ff59bff9,
        mid_sort_bf6da8fca8728f3d,
        mid_sort_49490923322c4f7b,
        mid_sort_a785b446165fc826,
        mid_sort_4f500158d223aa21,
        mid_sort_116f7fcb5bff0f39,
        mid_sort_186bb5d1c1aec30c,
        mid_sort_ec98980f6015e103,
        mid_sort_a1c18faad4aff7a1,
        mid_sort_57da58ead958e473,
        mid_sort_2a4a0e3eb510f108,
        mid_sort_be1247b470fb0930,
        mid_sort_c045de5c45d0340e,
        mid_sort_6ffc04636c800799,
        mid_spliterator_a6220e55d9d552e6,
        mid_spliterator_b11a26b644843f90,
        mid_spliterator_db9e7b55445f5f8c,
        mid_spliterator_f93f5a801b0dd969,
        mid_spliterator_feeca5629656dd97,
        mid_spliterator_ce1c06b6e97119e0,
        mid_spliterator_8d86089ac203a65b,
        mid_spliterator_6661e14fd8014618,
        mid_toString_e16a141122e42829,
        mid_toString_73a8d57a48f9dd63,
        mid_toString_84c6bf6969f02b1b,
        mid_toString_9b51d1300d939182,
        mid_toString_2bfbdffe78f40b02,
        mid_toString_18f701146f670b02,
        mid_toString_29a154f79fc91e5a,
        mid_toString_d6bacff191fd705f,
        mid_toString_4fb99da4a941ba04,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compare(const JArray< jchar > &, const JArray< jchar > &);
      static jint compare(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint compare(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint compare(const JArray< jint > &, const JArray< jint > &);
      static jint compare(const JArray< jlong > &, const JArray< jlong > &);
      static jint compare(const JArray< ::java::lang::Comparable > &, const JArray< ::java::lang::Comparable > &);
      static jint compare(const JArray< jshort > &, const JArray< jshort > &);
      static jint compare(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint compare(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compare(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint compare(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint compare(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint compare(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compare(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Comparable > &, jint, jint, const JArray< ::java::lang::Comparable > &, jint, jint);
      static jint compare(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint compare(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static jint compareUnsigned(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compareUnsigned(const JArray< jint > &, const JArray< jint > &);
      static jint compareUnsigned(const JArray< jlong > &, const JArray< jlong > &);
      static jint compareUnsigned(const JArray< jshort > &, const JArray< jshort > &);
      static jint compareUnsigned(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compareUnsigned(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compareUnsigned(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compareUnsigned(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jboolean equals(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jboolean equals(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jboolean equals(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jboolean equals(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jboolean equals(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jboolean equals(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jboolean equals(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jboolean equals(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jboolean > &);
      static jint mismatch(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint mismatch(const JArray< jchar > &, const JArray< jchar > &);
      static jint mismatch(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint mismatch(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint mismatch(const JArray< jint > &, const JArray< jint > &);
      static jint mismatch(const JArray< jlong > &, const JArray< jlong > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint mismatch(const JArray< jshort > &, const JArray< jshort > &);
      static jint mismatch(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint mismatch(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint mismatch(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint mismatch(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint mismatch(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint mismatch(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint mismatch(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jint mismatch(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint mismatch(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, const ::java::util::function::LongBinaryOperator &);
      static void parallelPrefix(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::function::BinaryOperator &);
      static void parallelPrefix(const JArray< jdouble > &, jint, jint, const ::java::util::function::DoubleBinaryOperator &);
      static void parallelPrefix(const JArray< jint > &, jint, jint, const ::java::util::function::IntBinaryOperator &);
      static void parallelPrefix(const JArray< jlong > &, jint, jint, const ::java::util::function::LongBinaryOperator &);
      static void parallelSetAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void parallelSetAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void parallelSetAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void parallelSetAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void parallelSort(const JArray< jbyte > &);
      static void parallelSort(const JArray< jchar > &);
      static void parallelSort(const JArray< jdouble > &);
      static void parallelSort(const JArray< jfloat > &);
      static void parallelSort(const JArray< jint > &);
      static void parallelSort(const JArray< jlong > &);
      static void parallelSort(const JArray< ::java::lang::Comparable > &);
      static void parallelSort(const JArray< jshort > &);
      static void parallelSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &, jint, jint);
      static void parallelSort(const JArray< jchar > &, jint, jint);
      static void parallelSort(const JArray< jdouble > &, jint, jint);
      static void parallelSort(const JArray< jfloat > &, jint, jint);
      static void parallelSort(const JArray< jint > &, jint, jint);
      static void parallelSort(const JArray< jlong > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Comparable > &, jint, jint);
      static void parallelSort(const JArray< jshort > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void setAll(const JArray< ::java::lang::Object > &, const ::java::util::function::IntFunction &);
      static void setAll(const JArray< jdouble > &, const ::java::util::function::IntToDoubleFunction &);
      static void setAll(const JArray< jlong > &, const ::java::util::function::IntToLongFunction &);
      static void setAll(const JArray< jint > &, const ::java::util::function::IntUnaryOperator &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &, jint, jint);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &, jint, jint);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &, jint, jint);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jint > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Arrays);
    extern PyTypeObject *PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
