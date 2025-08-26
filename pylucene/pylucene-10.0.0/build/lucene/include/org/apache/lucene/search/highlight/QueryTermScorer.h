#ifndef org_apache_lucene_search_highlight_QueryTermScorer_H
#define org_apache_lucene_search_highlight_QueryTermScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
          class WeightedTerm;
          class Scorer;
        }
        class Query;
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
              mid_init$_95d7abcc566f6f3d,
              mid_init$_a28ff1cdbaf0bf6c,
              mid_init$_9421654d65af6edf,
              mid_init$_bf3dd050cd3f66a0,
              mid_allFragmentsProcessed_e7bdbe105ce1bafb,
              mid_getFragmentScore_8b62236f0e4d0dbc,
              mid_getMaxTermWeight_8b62236f0e4d0dbc,
              mid_getTokenScore_8b62236f0e4d0dbc,
              mid_init_f3e050e998938273,
              mid_startFragment_f36ca6b77c71a3d9,
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
