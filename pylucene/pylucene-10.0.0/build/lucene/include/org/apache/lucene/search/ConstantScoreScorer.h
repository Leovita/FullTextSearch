#ifndef org_apache_lucene_search_ConstantScoreScorer_H
#define org_apache_lucene_search_ConstantScoreScorer_H

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
        class ScoreMode;
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
      namespace search {

        class ConstantScoreScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_a854295b11c6e2f1,
            mid_init$_d22bc6e55d2d18a0,
            mid_docID_20fbf7565993c3d7,
            mid_getMaxScore_29cfa01aaad92564,
            mid_iterator_fc644a826c65d236,
            mid_score_9b6c3480dac00edf,
            mid_setMinCompetitiveScore_c771a95b0227fb6a,
            mid_twoPhaseIterator_28c4f2cd9e5f8da7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreScorer(const ConstantScoreScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          ConstantScoreScorer(jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::DocIdSetIterator &);
          ConstantScoreScorer(jfloat, const ::org::apache::lucene::search::ScoreMode &, const ::org::apache::lucene::search::TwoPhaseIterator &);

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(ConstantScoreScorer);
        extern PyTypeObject *PY_TYPE(ConstantScoreScorer);

        class t_ConstantScoreScorer {
        public:
          PyObject_HEAD
          ConstantScoreScorer object;
          static PyObject *wrap_Object(const ConstantScoreScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
