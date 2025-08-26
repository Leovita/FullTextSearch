#ifndef org_apache_lucene_search_ConstantScoreScorer_H
#define org_apache_lucene_search_ConstantScoreScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class TwoPhaseIterator;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ConstantScoreScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_5bd50a0545d84497,
            mid_init$_7b4a00a97df1a3a8,
            mid_docID_bd89ce15dad49192,
            mid_getMaxScore_5873a23b935a9d49,
            mid_iterator_b78969502cbf4939,
            mid_score_8b62236f0e4d0dbc,
            mid_setMinCompetitiveScore_675f4cb9a2529ee0,
            mid_twoPhaseIterator_c827d3ab11221e86,
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
