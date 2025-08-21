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
            mid_init$_8b3d46852b435a94,
            mid_init$_abef9d6a10f2b452,
            mid_and_589ebc9b87bdaf3b,
            mid_andNot_589ebc9b87bdaf3b,
            mid_bits2words_35c872f03f347c10,
            mid_cardinality_16939d9d0a9a9721,
            mid_clear_8b3d46852b435a94,
            mid_clear_c3501637982a28bc,
            mid_clone_5fa92c8235e3a40e,
            mid_ensureCapacity_4bb0345124a4e739,
            mid_equals_570b5248a6da3ef6,
            mid_flip_8b3d46852b435a94,
            mid_flip_c3501637982a28bc,
            mid_get_d8a0ab12857291e0,
            mid_getAndClear_d8a0ab12857291e0,
            mid_getAndSet_d8a0ab12857291e0,
            mid_getBits_a057bd1a0d2826b3,
            mid_hashCode_20fbf7565993c3d7,
            mid_intersects_e0594a4750fed2c2,
            mid_length_16939d9d0a9a9721,
            mid_nextSetBit_91d66fa3ea476cea,
            mid_or_589ebc9b87bdaf3b,
            mid_prevSetBit_91d66fa3ea476cea,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_scanIsEmpty_947277eca0748c4e,
            mid_set_8b3d46852b435a94,
            mid_set_c3501637982a28bc,
            mid_xor_589ebc9b87bdaf3b,
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
