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
        class TwoPhaseIterator;
        class DocIdSetIterator;
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
              mid_docID_bd89ce15dad49192,
              mid_getMaxScore_5873a23b935a9d49,
              mid_iterator_b78969502cbf4939,
              mid_matches_a8281eb3b9d9672d,
              mid_score_8b62236f0e4d0dbc,
              mid_twoPhaseIterator_c827d3ab11221e86,
              mid_matchCost_8b62236f0e4d0dbc,
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
