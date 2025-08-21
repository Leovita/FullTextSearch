#ifndef org_apache_lucene_queries_function_ValueSourceScorer_H
#define org_apache_lucene_queries_function_ValueSourceScorer_H

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          class ValueSourceScorer : public ::org::apache::lucene::search::Scorer {
           public:
            enum {
              mid_docID_20fbf7565993c3d7,
              mid_getMaxScore_29cfa01aaad92564,
              mid_iterator_fc644a826c65d236,
              mid_matches_ae22d3a856ad56f1,
              mid_score_9b6c3480dac00edf,
              mid_twoPhaseIterator_28c4f2cd9e5f8da7,
              mid_matchCost_9b6c3480dac00edf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSourceScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSourceScorer(const ValueSourceScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

            jint docID() const;
            jfloat getMaxScore(jint) const;
            ::org::apache::lucene::search::DocIdSetIterator iterator() const;
            jboolean matches(jint) const;
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
        namespace function {
          extern PyType_Def PY_TYPE_DEF(ValueSourceScorer);
          extern PyTypeObject *PY_TYPE(ValueSourceScorer);

          class t_ValueSourceScorer {
          public:
            PyObject_HEAD
            ValueSourceScorer object;
            static PyObject *wrap_Object(const ValueSourceScorer&);
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
