#ifndef org_apache_lucene_search_FilterScorer_H
#define org_apache_lucene_search_FilterScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Unwrappable;
      }
      namespace search {
        class DocIdSetIterator;
        class TwoPhaseIterator;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_53f26636e24b2902,
            mid_docID_20fbf7565993c3d7,
            mid_iterator_fc644a826c65d236,
            mid_score_9b6c3480dac00edf,
            mid_twoPhaseIterator_28c4f2cd9e5f8da7,
            mid_unwrap_668396db055b6c56,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterScorer(const FilterScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          FilterScorer(const ::org::apache::lucene::search::Scorer &);

          jint docID() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
          ::org::apache::lucene::search::Scorer unwrap() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilterScorer);
        extern PyTypeObject *PY_TYPE(FilterScorer);

        class t_FilterScorer {
        public:
          PyObject_HEAD
          FilterScorer object;
          static PyObject *wrap_Object(const FilterScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
