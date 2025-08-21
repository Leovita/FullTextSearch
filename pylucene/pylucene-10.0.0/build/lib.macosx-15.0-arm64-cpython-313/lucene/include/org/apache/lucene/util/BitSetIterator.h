#ifndef org_apache_lucene_util_BitSetIterator_H
#define org_apache_lucene_util_BitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class SparseFixedBitSet;
        class FixedBitSet;
        class BitSet;
      }
    }
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
            mid_init$_cae33b2b11961e3c,
            mid_advance_3c9bba330f083871,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getBitSet_929151ffbbc0eb5d,
            mid_getFixedBitSetOrNull_d3e744fa02039131,
            mid_getSparseFixedBitSetOrNull_f0c6013f9beca006,
            mid_nextDoc_20fbf7565993c3d7,
            mid_setDocId_540b2b23d51b1efd,
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
