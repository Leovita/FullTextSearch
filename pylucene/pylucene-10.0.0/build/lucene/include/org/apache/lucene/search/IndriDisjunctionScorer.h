#ifndef org_apache_lucene_search_IndriDisjunctionScorer_H
#define org_apache_lucene_search_IndriDisjunctionScorer_H

#include "org/apache/lucene/search/IndriScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        class DocIdSetIterator;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriDisjunctionScorer : public ::org::apache::lucene::search::IndriScorer {
         public:
          enum {
            mid_docID_20fbf7565993c3d7,
            mid_getMaxScore_29cfa01aaad92564,
            mid_getSubMatches_36830460e10839eb,
            mid_iterator_fc644a826c65d236,
            mid_score_9b6c3480dac00edf,
            mid_smoothingScore_29cfa01aaad92564,
            mid_smoothingScore_4d149eddb72e861d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriDisjunctionScorer(jobject obj) : ::org::apache::lucene::search::IndriScorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriDisjunctionScorer(const IndriDisjunctionScorer& obj) : ::org::apache::lucene::search::IndriScorer(obj) {}

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::java::util::List getSubMatches() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          jfloat smoothingScore(jint) const;
          jfloat smoothingScore(const ::java::util::List &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriDisjunctionScorer);
        extern PyTypeObject *PY_TYPE(IndriDisjunctionScorer);

        class t_IndriDisjunctionScorer {
        public:
          PyObject_HEAD
          IndriDisjunctionScorer object;
          static PyObject *wrap_Object(const IndriDisjunctionScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
