#ifndef org_apache_lucene_queries_spans_SpanScorer_H
#define org_apache_lucene_queries_spans_SpanScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
        class TwoPhaseIterator;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_init$_fbe4a18beac6854d,
              mid_docID_20fbf7565993c3d7,
              mid_getMaxScore_29cfa01aaad92564,
              mid_getSpans_2d3524efd956d163,
              mid_iterator_fc644a826c65d236,
              mid_score_9b6c3480dac00edf,
              mid_twoPhaseIterator_28c4f2cd9e5f8da7,
              mid_setFreqCurrentDoc_3720c61b0679eb3e,
              mid_scoreCurrentDoc_9b6c3480dac00edf,
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
