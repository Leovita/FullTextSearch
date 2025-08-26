#ifndef org_apache_lucene_search_TermScorer_H
#define org_apache_lucene_search_TermScorer_H

#include "org/apache/lucene/search/Scorer.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
        class LeafSimScorer;
        class Weight;
      }
      namespace index {
        class PostingsEnum;
        class ImpactsEnum;
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
            mid_init$_bfc0ad438bde94cf,
            mid_init$_178829ef84509811,
            mid_advanceShallow_a3904e10f5bb9437,
            mid_docID_bd89ce15dad49192,
            mid_freq_bd89ce15dad49192,
            mid_getMaxScore_5873a23b935a9d49,
            mid_iterator_b78969502cbf4939,
            mid_score_8b62236f0e4d0dbc,
            mid_setMinCompetitiveScore_675f4cb9a2529ee0,
            mid_smoothingScore_5873a23b935a9d49,
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
