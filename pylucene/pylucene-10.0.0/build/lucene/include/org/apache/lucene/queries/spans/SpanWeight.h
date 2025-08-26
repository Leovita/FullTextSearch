#ifndef org_apache_lucene_queries_spans_SpanWeight_H
#define org_apache_lucene_queries_spans_SpanWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class ScorerSupplier;
        class Matches;
        class LeafSimScorer;
        class IndexSearcher;
      }
      namespace index {
        class TermStates;
        class Term;
        class LeafReaderContext;
      }
      namespace queries {
        namespace spans {
          class Spans;
          class SpanWeight$Postings;
          class SpanQuery;
        }
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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanWeight : public ::org::apache::lucene::search::Weight {
           public:
            enum {
              mid_init$_2c7273b1b372ef04,
              mid_explain_b1310cbadc240f44,
              mid_extractTermStates_6a7e23584beb7c0f,
              mid_getSimScorer_9774955b65847467,
              mid_getSpans_03932f6f031979e9,
              mid_matches_868b3421ec3687f4,
              mid_scorerSupplier_613b85087b5065ab,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanWeight(const SpanWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

            SpanWeight(const ::org::apache::lucene::queries::spans::SpanQuery &, const ::org::apache::lucene::search::IndexSearcher &, const ::java::util::Map &, jfloat);

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            void extractTermStates(const ::java::util::Map &) const;
            ::org::apache::lucene::search::LeafSimScorer getSimScorer(const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::spans::Spans getSpans(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::queries::spans::SpanWeight$Postings &) const;
            ::org::apache::lucene::search::Matches matches(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            ::org::apache::lucene::search::ScorerSupplier scorerSupplier(const ::org::apache::lucene::index::LeafReaderContext &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanWeight);
          extern PyTypeObject *PY_TYPE(SpanWeight);

          class t_SpanWeight {
          public:
            PyObject_HEAD
            SpanWeight object;
            static PyObject *wrap_Object(const SpanWeight&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
