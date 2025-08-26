#ifndef org_apache_lucene_queries_spans_SpanScorer_H
#define org_apache_lucene_queries_spans_SpanScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        class DocIdSetIterator;
        class LeafSimScorer;
      }
      namespace queries {
        namespace spans {
          class Spans;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_init$_0e8c2871f836c208,
              mid_docID_bd89ce15dad49192,
              mid_getMaxScore_5873a23b935a9d49,
              mid_getSpans_359406d18b943dd6,
              mid_iterator_b78969502cbf4939,
              mid_score_8b62236f0e4d0dbc,
              mid_twoPhaseIterator_c827d3ab11221e86,
              mid_setFreqCurrentDoc_e7bdbe105ce1bafb,
              mid_scoreCurrentDoc_8b62236f0e4d0dbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanScorer(const SpanScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            SpanScorer(const ::org::apache::lucene::queries::spans::Spans &, const ::org::apache::lucene::search::LeafSimScorer &);

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::queries::spans::Spans getSpans() const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jfloat score() const;
            ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanScorer);
          extern PyTypeObject *PY_TYPE(SpanScorer);

          class t_SpanScorer {
          public:
            PyObject_HEAD
            SpanScorer object;
            static PyObject *wrap_Object(const SpanScorer&);
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
