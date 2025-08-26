#ifndef org_apache_lucene_util_SparseFixedBitSet_H
#define org_apache_lucene_util_SparseFixedBitSet_H

#include "org/apache/lucene/util/BitSet.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SparseFixedBitSet : public ::org::apache::lucene::util::BitSet {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_approximateCardinality_bd89ce15dad49192,
            mid_cardinality_bd89ce15dad49192,
            mid_clear_e7bdbe105ce1bafb,
            mid_clear_8226bd0b0fc13dba,
            mid_clear_645c25455f5b9b1c,
            mid_get_a8281eb3b9d9672d,
            mid_getAndSet_a8281eb3b9d9672d,
            mid_length_bd89ce15dad49192,
            mid_nextSetBit_a3904e10f5bb9437,
            mid_nextSetBit_7f27cf81a85a97e9,
            mid_or_3bae9c6463463f0d,
            mid_prevSetBit_a3904e10f5bb9437,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_set_8226bd0b0fc13dba,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SparseFixedBitSet(jobject obj) : ::org::apache::lucene::util::BitSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SparseFixedBitSet(const SparseFixedBitSet& obj) : ::org::apache::lucene::util::BitSet(obj) {}

          SparseFixedBitSet(jint);

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jboolean get(jint) const;
          jboolean getAndSet(jint) const;
          jint length() const;
          jint nextSetBit(jint) const;
          jint nextSetBit(jint, jint) const;
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          jlong ramBytesUsed() const;
          void set(jint) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(SparseFixedBitSet);
        extern PyTypeObject *PY_TYPE(SparseFixedBitSet);

        class t_SparseFixedBitSet {
        public:
          PyObject_HEAD
          SparseFixedBitSet object;
          static PyObject *wrap_Object(const SparseFixedBitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
