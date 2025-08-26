#ifndef org_apache_lucene_search_ScoringRewrite_H
#define org_apache_lucene_search_ScoringRewrite_H

#include "org/apache/lucene/search/TermCollectingRewrite.h"

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
        class Query;
        class MultiTermQuery;
        class MultiTermQuery$RewriteMethod;
        class ScoringRewrite;
        class BooleanQuery$Builder;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScoringRewrite : public ::org::apache::lucene::search::TermCollectingRewrite {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_rewrite_ea36ecc6891147cc,
            mid_checkMaxClauseCount_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoringRewrite(jobject obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoringRewrite(const ScoringRewrite& obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {}

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BOOLEAN_REWRITE;
          static ScoringRewrite *SCORING_BOOLEAN_REWRITE;

          ScoringRewrite();

          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(ScoringRewrite);
        extern PyTypeObject *PY_TYPE(ScoringRewrite);

        class t_ScoringRewrite {
        public:
          PyObject_HEAD
          ScoringRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ScoringRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ScoringRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ScoringRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
