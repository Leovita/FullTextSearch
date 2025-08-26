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
        class TwoPhaseIterator;
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
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
      namespace search {

        class FilterScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_c609d371cee67844,
            mid_docID_bd89ce15dad49192,
            mid_iterator_b78969502cbf4939,
            mid_score_8b62236f0e4d0dbc,
            mid_twoPhaseIterator_c827d3ab11221e86,
            mid_unwrap_1f4bdfb912fea241,
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
