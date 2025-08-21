#ifndef org_apache_lucene_search_TermScorer_H
#define org_apache_lucene_search_TermScorer_H

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
        class Weight;
        class LeafSimScorer;
      }
      namespace index {
        class ImpactsEnum;
        class PostingsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermScorer : public ::org::apache::lucene::search::Scorer {
         public:
          enum {
            mid_init$_6fdc11bd63ae84d7,
            mid_init$_425fcdf4af19f5b9,
            mid_advanceShallow_3c9bba330f083871,
            mid_docID_20fbf7565993c3d7,
            mid_freq_20fbf7565993c3d7,
            mid_getMaxScore_29cfa01aaad92564,
            mid_iterator_fc644a826c65d236,
            mid_score_9b6c3480dac00edf,
            mid_setMinCompetitiveScore_c771a95b0227fb6a,
            mid_smoothingScore_29cfa01aaad92564,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermScorer(jobject obj) : ::org::apache::lucene::search::Scorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermScorer(const TermScorer& obj) : ::org::apache::lucene::search::Scorer(obj) {}

          TermScorer(const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::search::LeafSimScorer &);
          TermScorer(const ::org::apache::lucene::search::Weight &, const ::org::apache::lucene::index::ImpactsEnum &, const ::org::apache::lucene::search::LeafSimScorer &, jboolean);

          jint advanceShallow(jint) const;
          jint docID() const;
          jint freq() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          jfloat smoothingScore(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TermScorer);
        extern PyTypeObject *PY_TYPE(TermScorer);

        class t_TermScorer {
        public:
          PyObject_HEAD
          TermScorer object;
          static PyObject *wrap_Object(const TermScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
