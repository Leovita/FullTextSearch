#ifndef org_apache_lucene_util_FixedBitSet_H
#define org_apache_lucene_util_FixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class FixedBitSet;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_init$_e28d84b49af388d8,
            mid_and_edc8b0cbc50f7d4d,
            mid_andNot_edc8b0cbc50f7d4d,
            mid_andNot_3bae9c6463463f0d,
            mid_andNotCount_ce95ffc3d21c183c,
            mid_approximateCardinality_bd89ce15dad49192,
            mid_asReadOnlyBits_92a4f567193c49d1,
            mid_bits2words_a3904e10f5bb9437,
            mid_cardinality_bd89ce15dad49192,
            mid_clear_e7bdbe105ce1bafb,
            mid_clear_8226bd0b0fc13dba,
            mid_clear_645c25455f5b9b1c,
            mid_clone_205700981fe48e9e,
            mid_copyOf_b4662109b33c792e,
            mid_ensureCapacity_c904bcdcc437abcc,
            mid_equals_00d17418847797d4,
            mid_flip_8226bd0b0fc13dba,
            mid_flip_645c25455f5b9b1c,
            mid_get_a8281eb3b9d9672d,
            mid_getAndClear_a8281eb3b9d9672d,
            mid_getAndSet_a8281eb3b9d9672d,
            mid_getBits_1aab5293a9d94cd3,
            mid_hashCode_bd89ce15dad49192,
            mid_intersectionCount_ce95ffc3d21c183c,
            mid_intersects_49119b9bd3369921,
            mid_length_bd89ce15dad49192,
            mid_nextSetBit_a3904e10f5bb9437,
            mid_nextSetBit_7f27cf81a85a97e9,
            mid_or_edc8b0cbc50f7d4d,
            mid_or_3bae9c6463463f0d,
            mid_prevSetBit_a3904e10f5bb9437,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_scanIsEmpty_9aa4f33e82ea333f,
            mid_set_8226bd0b0fc13dba,
            mid_set_645c25455f5b9b1c,
            mid_unionCount_ce95ffc3d21c183c,
            mid_xor_edc8b0cbc50f7d4d,
            mid_xor_3bae9c6463463f0d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FixedBitSet(const FixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          FixedBitSet(jint);
          FixedBitSet(const JArray< jlong > &, jint);

          void and$(const FixedBitSet &) const;
          void andNot(const FixedBitSet &) const;
          void andNot(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          static jlong andNotCount(const FixedBitSet &, const FixedBitSet &);
          jint approximateCardinality() const;
          ::org::apache::lucene::util::Bits asReadOnlyBits() const;
          static jint bits2words(jint);
          jint cardinality() const;
          void clear() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          FixedBitSet clone() const;
          static FixedBitSet copyOf(const ::org::apache::lucene::util::Bits &);
          static FixedBitSet ensureCapacity(const FixedBitSet &, jint);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jint) const;
          void flip(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndClear(jint) const;
          jboolean getAndSet(jint) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          static jlong intersectionCount(const FixedBitSet &, const FixedBitSet &);
          jboolean intersects(const FixedBitSet &) const;
          jint length() const;
          jint nextSetBit(jint) const;
          jint nextSetBit(jint, jint) const;
          void or$(const FixedBitSet &) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jint) const;
          void set(jint, jint) const;
          static jlong unionCount(const FixedBitSet &, const FixedBitSet &);
          void xor$(const FixedBitSet &) const;
          void xor$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FixedBitSet);
        extern PyTypeObject *PY_TYPE(FixedBitSet);

        class t_FixedBitSet {
        public:
          PyObject_HEAD
          FixedBitSet object;
          static PyObject *wrap_Object(const FixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
