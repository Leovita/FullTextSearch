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
            mid_init$_540b2b23d51b1efd,
            mid_approximateCardinality_20fbf7565993c3d7,
            mid_cardinality_20fbf7565993c3d7,
            mid_clear_3720c61b0679eb3e,
            mid_clear_540b2b23d51b1efd,
            mid_clear_e13cff512ebda969,
            mid_get_ae22d3a856ad56f1,
            mid_getAndSet_ae22d3a856ad56f1,
            mid_length_20fbf7565993c3d7,
            mid_nextSetBit_3c9bba330f083871,
            mid_nextSetBit_7f733b5d08bb5ec4,
            mid_or_ed30298d46fa551b,
            mid_prevSetBit_3c9bba330f083871,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_set_540b2b23d51b1efd,
            mid_toString_09a7afff1868fc5e,
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
