#ifndef org_apache_lucene_util_FixedBitSet_H
#define org_apache_lucene_util_FixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
      namespace util {
        class Bits;
        class FixedBitSet;
      }
    }
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
            mid_init$_540b2b23d51b1efd,
            mid_init$_70e26db984971679,
            mid_and_c7b33956c11c3291,
            mid_andNot_c7b33956c11c3291,
            mid_andNot_ed30298d46fa551b,
            mid_andNotCount_7a8042d866b1f6be,
            mid_approximateCardinality_20fbf7565993c3d7,
            mid_asReadOnlyBits_959b4f7101dd7f4b,
            mid_bits2words_3c9bba330f083871,
            mid_cardinality_20fbf7565993c3d7,
            mid_clear_3720c61b0679eb3e,
            mid_clear_540b2b23d51b1efd,
            mid_clear_e13cff512ebda969,
            mid_clone_5d012320ca853371,
            mid_copyOf_66b4ecfb38007de4,
            mid_ensureCapacity_eef1aa0d87d39044,
            mid_equals_570b5248a6da3ef6,
            mid_flip_540b2b23d51b1efd,
            mid_flip_e13cff512ebda969,
            mid_get_ae22d3a856ad56f1,
            mid_getAndClear_ae22d3a856ad56f1,
            mid_getAndSet_ae22d3a856ad56f1,
            mid_getBits_a057bd1a0d2826b3,
            mid_hashCode_20fbf7565993c3d7,
            mid_intersectionCount_7a8042d866b1f6be,
            mid_intersects_293102f5c63ea018,
            mid_length_20fbf7565993c3d7,
            mid_nextSetBit_3c9bba330f083871,
            mid_nextSetBit_7f733b5d08bb5ec4,
            mid_or_c7b33956c11c3291,
            mid_or_ed30298d46fa551b,
            mid_prevSetBit_3c9bba330f083871,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_scanIsEmpty_947277eca0748c4e,
            mid_set_540b2b23d51b1efd,
            mid_set_e13cff512ebda969,
            mid_unionCount_7a8042d866b1f6be,
            mid_xor_c7b33956c11c3291,
            mid_xor_ed30298d46fa551b,
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
