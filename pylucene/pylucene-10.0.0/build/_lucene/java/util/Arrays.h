#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    namespace function {
      class IntToLongFunction;
      class DoubleBinaryOperator;
      class IntToDoubleFunction;
      class IntFunction;
      class LongBinaryOperator;
      class IntUnaryOperator;
      class BinaryOperator;
      class IntBinaryOperator;
    }
    class List;
    class Spliterator;
    class Comparator;
    class Spliterator$OfInt;
    class Spliterator$OfDouble;
    class Spliterator$OfLong;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_c1c05447f808d260,
        mid_binarySearch_e8961d1e6665fcaf,
        mid_binarySearch_0dd36241bc0b8f76,
        mid_binarySearch_f026061abeda5f04,
        mid_binarySearch_8eb04c27cd22e9da,
        mid_binarySearch_4710e8aeb522fa74,
        mid_binarySearch_2ab9975181ae63e6,
        mid_binarySearch_16dc05386d4c6aa1,
        mid_binarySearch_4b0a5d5379cc422e,
        mid_binarySearch_251550dde388f760,
        mid_binarySearch_2b4d6b05ae443e81,
        mid_binarySearch_04088a18f7f4a95d,
        mid_binarySearch_f784976b7428ea0f,
        mid_binarySearch_2fa0762f9e24d9bd,
        mid_binarySearch_86a2085862eb793e,
        mid_binarySearch_11d7afe80bf4f054,
        mid_binarySearch_cb62bfaef6697667,
        mid_binarySearch_7bd36e66b6565592,
        mid_binarySearch_773357a9a88a561a,
        mid_compare_15d7e5623d88e7f9,
        mid_compare_5099015e7c3082c9,
        mid_compare_1ed4d275e0043d56,
        mid_compare_aee8e325e5053b4e,
        mid_compare_8625a76210d1548f,
        mid_compare_1b9d07b3d2b23ae1,
        mid_compare_afc6faf16498c83b,
        mid_compare_a140bb75904d9bc5,
        mid_compare_f02695ae25b3a661,
        mid_compare_6b3bd44353ee2771,
        mid_compare_5664a469baa8b9a7,
        mid_compare_2834ac3aace8627a,
        mid_compare_3622ef876d4418df,
        mid_compare_fd873892d0f926d5,
        mid_compare_a41112fe2ff77fda,
        mid_compare_507654c729e931a1,
        mid_compare_1b9ff83b15804773,
        mid_compare_f5273656c7164ac4,
        mid_compare_ddd307462d835cc6,
        mid_compare_ff88929c277778c2,
        mid_compareUnsigned_15d7e5623d88e7f9,
        mid_compareUnsigned_8625a76210d1548f,
        mid_compareUnsigned_1b9d07b3d2b23ae1,
        mid_compareUnsigned_a140bb75904d9bc5,
        mid_compareUnsigned_5664a469baa8b9a7,
        mid_compareUnsigned_a41112fe2ff77fda,
        mid_compareUnsigned_507654c729e931a1,
        mid_compareUnsigned_f5273656c7164ac4,
        mid_copyOf_c6a3d03b859b9502,
        mid_copyOf_d19984ba38ba07d6,
        mid_copyOf_c59c7cf9540aa8fe,
        mid_copyOf_305226a04960a832,
        mid_copyOf_4faa21290e4f519d,
        mid_copyOf_10ae0584eaa55ce1,
        mid_copyOf_78d2eae5e5be5d4b,
        mid_copyOf_ba348af6ded8d40f,
        mid_copyOf_f31ae73106250ad8,
        mid_copyOf_5eb691fb35111629,
        mid_copyOfRange_abf188c35924da6e,
        mid_copyOfRange_d7ecf4e86469b03a,
        mid_copyOfRange_63fbf96415efef6b,
        mid_copyOfRange_e3f0d88b0f929498,
        mid_copyOfRange_a62673dc39dabf57,
        mid_copyOfRange_277370767c0a32fb,
        mid_copyOfRange_358ba735bde2cdf2,
        mid_copyOfRange_1c491e007093d992,
        mid_copyOfRange_76aaad1a480eb03c,
        mid_copyOfRange_198105c7c14e26ba,
        mid_deepEquals_5fc6a5151acf8a67,
        mid_deepHashCode_ecaa32a38d115e88,
        mid_deepToString_9552bd4e03f991d8,
        mid_equals_59b66a90a6e46351,
        mid_equals_8a57fcbfd828b829,
        mid_equals_1485df8ccd00cb63,
        mid_equals_61259450c6c3798d,
        mid_equals_bfcb86fcaca5ecb6,
        mid_equals_63e87b06ed75033e,
        mid_equals_5fc6a5151acf8a67,
        mid_equals_1e93e756adcbcb6f,
        mid_equals_88939f344337cf1a,
        mid_equals_5d2e748ba181b318,
        mid_equals_a96082cff8e8e353,
        mid_equals_c40677f21a8ea694,
        mid_equals_481cb8f619fb8f55,
        mid_equals_99ae47ffc1b6dd41,
        mid_equals_2fb8d0f905da5098,
        mid_equals_a1b5d51a99572c70,
        mid_equals_ba9ea1ca11c7a831,
        mid_equals_10323e9274788cac,
        mid_equals_adf7eaffcfc01e27,
        mid_equals_6c3e96d3a3c529de,
        mid_fill_6b2493647c69e884,
        mid_fill_0a1ba76082367337,
        mid_fill_a83cdb60c3a62c21,
        mid_fill_db493073115d6235,
        mid_fill_6dc277ebf1e905ca,
        mid_fill_abef9d6a10f2b452,
        mid_fill_45a2b981bb9b5d6c,
        mid_fill_e20374821c5e9b99,
        mid_fill_74a6473a5a488444,
        mid_fill_8c87703c6b511ef8,
        mid_fill_0461af3a470bed98,
        mid_fill_35d5274b4b03eb8e,
        mid_fill_2fa3a85005787513,
        mid_fill_6f854656cf10f7ea,
        mid_fill_532d1d154e8b6d9b,
        mid_fill_f3af13ea066bef3b,
        mid_fill_e033729ad3fd8321,
        mid_fill_92616876cba6cb5b,
        mid_hashCode_05c267a0584e092f,
        mid_hashCode_1d6980f6711df1e4,
        mid_hashCode_e2c7742173cca95f,
        mid_hashCode_aff7f7ece9b8b21b,
        mid_hashCode_99e50d7a0326d5c8,
        mid_hashCode_5844ba7d57ada19d,
        mid_hashCode_ecaa32a38d115e88,
        mid_hashCode_e3fc0d11f7a26b58,
        mid_hashCode_424fcfc305b37f31,
        mid_mismatch_15d7e5623d88e7f9,
        mid_mismatch_5099015e7c3082c9,
        mid_mismatch_1ed4d275e0043d56,
        mid_mismatch_aee8e325e5053b4e,
        mid_mismatch_8625a76210d1548f,
        mid_mismatch_1b9d07b3d2b23ae1,
        mid_mismatch_1e83876625c2cb4f,
        mid_mismatch_a140bb75904d9bc5,
        mid_mismatch_f02695ae25b3a661,
        mid_mismatch_6b3bd44353ee2771,
        mid_mismatch_5664a469baa8b9a7,
        mid_mismatch_2834ac3aace8627a,
        mid_mismatch_3622ef876d4418df,
        mid_mismatch_fd873892d0f926d5,
        mid_mismatch_a41112fe2ff77fda,
        mid_mismatch_507654c729e931a1,
        mid_mismatch_514c3f960329b0fc,
        mid_mismatch_f5273656c7164ac4,
        mid_mismatch_ddd307462d835cc6,
        mid_mismatch_ff88929c277778c2,
        mid_parallelPrefix_939886827162eb5c,
        mid_parallelPrefix_13e11529b622264e,
        mid_parallelPrefix_bb9903b707a01905,
        mid_parallelPrefix_a866d9fd00806e43,
        mid_parallelPrefix_db14158e3e9fe99a,
        mid_parallelPrefix_670d108ff2f7cf77,
        mid_parallelPrefix_4db7dbecd192bd39,
        mid_parallelPrefix_8e970497c9e77a1d,
        mid_parallelSetAll_8686c76f2074f499,
        mid_parallelSetAll_b37a6778ce9b1315,
        mid_parallelSetAll_37acc9474066deb6,
        mid_parallelSetAll_be7b8c3c94d5ee1b,
        mid_parallelSort_3ce1e597fb62ac79,
        mid_parallelSort_cc40ee25f19f0868,
        mid_parallelSort_fdfa19ef08e3e691,
        mid_parallelSort_354df523028ef700,
        mid_parallelSort_143c0cd4e297ef70,
        mid_parallelSort_140bd592f9f15dfc,
        mid_parallelSort_2886a27e2b9d4836,
        mid_parallelSort_b79f0769d197dc09,
        mid_parallelSort_f9cf02214abc14bf,
        mid_parallelSort_5fdd5da9426708e6,
        mid_parallelSort_fc9be2ded8ee801f,
        mid_parallelSort_612e2d7410afd44d,
        mid_parallelSort_e895d5e6b13d4d50,
        mid_parallelSort_ad090cb6070ea6a2,
        mid_parallelSort_f3cd87eda3d12dc6,
        mid_parallelSort_51b5fa03b6bdd840,
        mid_parallelSort_a1b09ea92b590859,
        mid_parallelSort_8b18c0c9b31a9582,
        mid_setAll_b37a6778ce9b1315,
        mid_setAll_37acc9474066deb6,
        mid_setAll_be7b8c3c94d5ee1b,
        mid_setAll_8686c76f2074f499,
        mid_sort_3ce1e597fb62ac79,
        mid_sort_cc40ee25f19f0868,
        mid_sort_fdfa19ef08e3e691,
        mid_sort_354df523028ef700,
        mid_sort_143c0cd4e297ef70,
        mid_sort_140bd592f9f15dfc,
        mid_sort_aa611d4fa688d910,
        mid_sort_b79f0769d197dc09,
        mid_sort_f9cf02214abc14bf,
        mid_sort_5fdd5da9426708e6,
        mid_sort_fc9be2ded8ee801f,
        mid_sort_612e2d7410afd44d,
        mid_sort_e895d5e6b13d4d50,
        mid_sort_ad090cb6070ea6a2,
        mid_sort_f3cd87eda3d12dc6,
        mid_sort_d1fdf6f5e18b5206,
        mid_sort_a1b09ea92b590859,
        mid_sort_8b18c0c9b31a9582,
        mid_spliterator_fafa468b1f3bad02,
        mid_spliterator_1bcbcf55be108f0a,
        mid_spliterator_620caebdddca0e73,
        mid_spliterator_b24b929e48aef101,
        mid_spliterator_1a49be01d9ccceb2,
        mid_spliterator_577014c75c850bdb,
        mid_spliterator_71ea19795a35602a,
        mid_spliterator_422ac9a20de84c8c,
        mid_toString_6629ab823d439f65,
        mid_toString_27d93aaabc4fd510,
        mid_toString_1c8d8a321f31050f,
        mid_toString_38955e65c7a8f0de,
        mid_toString_26a6ecd33e86c7ca,
        mid_toString_f7e7114bedc5cfdc,
        mid_toString_9552bd4e03f991d8,
        mid_toString_106d10025d2725c2,
        mid_toString_ccde3d18d68b417e,
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
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
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
