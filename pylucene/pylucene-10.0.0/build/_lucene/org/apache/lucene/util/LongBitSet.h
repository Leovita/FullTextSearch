#ifndef org_apache_lucene_util_LongBitSet_H
#define org_apache_lucene_util_LongBitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class LongBitSet;
      }
    }
  }
}
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

        class LongBitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1d3149fac12f2af3,
            mid_init$_a1b48247548a724c,
            mid_and_3dcc7e468864e39b,
            mid_andNot_3dcc7e468864e39b,
            mid_bits2words_7af44747c1921bd4,
            mid_cardinality_0f176418e3e16541,
            mid_clear_1d3149fac12f2af3,
            mid_clear_9ebf8c93de5f0fe1,
            mid_clone_8f4985d4414583fe,
            mid_ensureCapacity_cf6694250d0350a1,
            mid_equals_00d17418847797d4,
            mid_flip_1d3149fac12f2af3,
            mid_flip_9ebf8c93de5f0fe1,
            mid_get_eae0b285d107fcb0,
            mid_getAndClear_eae0b285d107fcb0,
            mid_getAndSet_eae0b285d107fcb0,
            mid_getBits_1aab5293a9d94cd3,
            mid_hashCode_bd89ce15dad49192,
            mid_intersects_34ab9c1cbf438630,
            mid_length_0f176418e3e16541,
            mid_nextSetBit_3dc1c6e3a5a0baf0,
            mid_or_3dcc7e468864e39b,
            mid_prevSetBit_3dc1c6e3a5a0baf0,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_scanIsEmpty_9aa4f33e82ea333f,
            mid_set_1d3149fac12f2af3,
            mid_set_9ebf8c93de5f0fe1,
            mid_xor_3dcc7e468864e39b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongBitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongBitSet(const LongBitSet& obj) : ::java::lang::Object(obj) {}

          static jlong MAX_NUM_BITS;

          LongBitSet(jlong);
          LongBitSet(const JArray< jlong > &, jlong);

          void and$(const LongBitSet &) const;
          void andNot(const LongBitSet &) const;
          static jint bits2words(jlong);
          jlong cardinality() const;
          void clear(jlong) const;
          void clear(jlong, jlong) const;
          LongBitSet clone() const;
          static LongBitSet ensureCapacity(const LongBitSet &, jlong);
          jboolean equals(const ::java::lang::Object &) const;
          void flip(jlong) const;
          void flip(jlong, jlong) const;
          jboolean get(jlong) const;
          jboolean getAndClear(jlong) const;
          jboolean getAndSet(jlong) const;
          JArray< jlong > getBits() const;
          jint hashCode() const;
          jboolean intersects(const LongBitSet &) const;
          jlong length() const;
          jlong nextSetBit(jlong) const;
          void or$(const LongBitSet &) const;
          jlong prevSetBit(jlong) const;
          jlong ramBytesUsed() const;
          jboolean scanIsEmpty() const;
          void set(jlong) const;
          void set(jlong, jlong) const;
          void xor$(const LongBitSet &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongBitSet);
        extern PyTypeObject *PY_TYPE(LongBitSet);

        class t_LongBitSet {
        public:
          PyObject_HEAD
          LongBitSet object;
          static PyObject *wrap_Object(const LongBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
