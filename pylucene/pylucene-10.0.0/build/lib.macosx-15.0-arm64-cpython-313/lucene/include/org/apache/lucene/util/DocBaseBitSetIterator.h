#ifndef org_apache_lucene_util_DocBaseBitSetIterator_H
#define org_apache_lucene_util_DocBaseBitSetIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FixedBitSet;
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

        class DocBaseBitSetIterator : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_f127cbf355adc01a,
            mid_advance_3c9bba330f083871,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getBitSet_5d012320ca853371,
            mid_getDocBase_20fbf7565993c3d7,
            mid_nextDoc_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocBaseBitSetIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocBaseBitSetIterator(const DocBaseBitSetIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          DocBaseBitSetIterator(const ::org::apache::lucene::util::FixedBitSet &, jlong, jint);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::util::FixedBitSet getBitSet() const;
          jint getDocBase() const;
          jint nextDoc() const;
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
        extern PyType_Def PY_TYPE_DEF(DocBaseBitSetIterator);
        extern PyTypeObject *PY_TYPE(DocBaseBitSetIterator);

        class t_DocBaseBitSetIterator {
        public:
          PyObject_HEAD
          DocBaseBitSetIterator object;
          static PyObject *wrap_Object(const DocBaseBitSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
