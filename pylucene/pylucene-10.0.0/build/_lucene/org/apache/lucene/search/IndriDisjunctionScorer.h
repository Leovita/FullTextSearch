#ifndef org_apache_lucene_search_IndriDisjunctionScorer_H
#define org_apache_lucene_search_IndriDisjunctionScorer_H

#include "org/apache/lucene/search/IndriScorer.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
        class Scorer;
      }
    }
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
            mid_docID_bd89ce15dad49192,
            mid_getMaxScore_5873a23b935a9d49,
            mid_getSubMatches_1387e1e2702ac173,
            mid_iterator_b78969502cbf4939,
            mid_score_8b62236f0e4d0dbc,
            mid_smoothingScore_5873a23b935a9d49,
            mid_smoothingScore_87b6b571ca6f70bb,
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
