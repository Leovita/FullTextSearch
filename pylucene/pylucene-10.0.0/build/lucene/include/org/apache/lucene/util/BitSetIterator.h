#ifndef org_apache_lucene_util_BitSetIterator_H
#define org_apache_lucene_util_BitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
        class FixedBitSet;
        class SparseFixedBitSet;
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

        class BitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_c07cb9a90039759b,
            mid_advance_a3904e10f5bb9437,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_getBitSet_c51191497671ef55,
            mid_getFixedBitSetOrNull_2dfbd7e288d7b5ae,
            mid_getSparseFixedBitSetOrNull_0ec2d26131ba3126,
            mid_nextDoc_bd89ce15dad49192,
            mid_setDocId_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSetIterator(const BitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          BitSetIterator(const ::org::apache::lucene::util::BitSet &, jlong);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::util::BitSet getBitSet() const;
          static ::org::apache::lucene::util::FixedBitSet getFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          static ::org::apache::lucene::util::SparseFixedBitSet getSparseFixedBitSetOrNull(const ::org::apache::lucene::search::DocIdSetIterator &);
          jint nextDoc() const;
          void setDocId(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(BitSetIterator);
        extern PyTypeObject *PY_TYPE(BitSetIterator);

        class t_BitSetIterator {
        public:
          PyObject_HEAD
          BitSetIterator object;
          static PyObject *wrap_Object(const BitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
