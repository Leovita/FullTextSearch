#ifndef org_apache_lucene_search_highlight_QueryTermScorer_H
#define org_apache_lucene_search_highlight_QueryTermScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class WeightedTerm;
          class Scorer;
          class TextFragment;
        }
      }
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryTermScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3c8d499ad35005cf,
              mid_init$_d7278af460a7b96a,
              mid_init$_8848e7ccd8e9c62a,
              mid_init$_9d3535bfda97f8a3,
              mid_allFragmentsProcessed_3720c61b0679eb3e,
              mid_getFragmentScore_9b6c3480dac00edf,
              mid_getMaxTermWeight_9b6c3480dac00edf,
              mid_getTokenScore_9b6c3480dac00edf,
              mid_init_2ec4d1726b35d478,
              mid_startFragment_bc0317ca0a60e657,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryTermScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryTermScorer(const QueryTermScorer& obj) : ::java::lang::Object(obj) {}

            QueryTermScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedTerm > &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryTermScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);

            void allFragmentsProcessed() const;
            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            void startFragment(const ::org::apache::lucene::search::highlight::TextFragment &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(QueryTermScorer);
          extern PyTypeObject *PY_TYPE(QueryTermScorer);

          class t_QueryTermScorer {
          public:
            PyObject_HEAD
            QueryTermScorer object;
            static PyObject *wrap_Object(const QueryTermScorer&);
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
