#ifndef org_apache_lucene_search_highlight_QueryScorer_H
#define org_apache_lucene_search_highlight_QueryScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
          class WeightedSpanTerm;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class QueryScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_192a5998e9bee925,
              mid_init$_a28ff1cdbaf0bf6c,
              mid_init$_9421654d65af6edf,
              mid_init$_2aa00155ebd16955,
              mid_init$_bf3dd050cd3f66a0,
              mid_init$_c04814cc687a2d6e,
              mid_getFragmentScore_8b62236f0e4d0dbc,
              mid_getMaxTermWeight_8b62236f0e4d0dbc,
              mid_getTokenScore_8b62236f0e4d0dbc,
              mid_getWeightedSpanTerm_d900b7d165d35c37,
              mid_init_f3e050e998938273,
              mid_isExpandMultiTermQuery_9aa4f33e82ea333f,
              mid_isUsePayloads_9aa4f33e82ea333f,
              mid_setExpandMultiTermQuery_f5dd97eebf6a215a,
              mid_setMaxDocCharsToAnalyze_8226bd0b0fc13dba,
              mid_setUsePayloads_f5dd97eebf6a215a,
              mid_setWrapIfNotCachingTokenFilter_f5dd97eebf6a215a,
              mid_startFragment_f36ca6b77c71a3d9,
              mid_newTermExtractor_ba0aee457cdda440,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryScorer(const QueryScorer& obj) : ::java::lang::Object(obj) {}

            QueryScorer(const JArray< ::org::apache::lucene::search::highlight::WeightedSpanTerm > &);
            QueryScorer(const ::org::apache::lucene::search::Query &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
            QueryScorer(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::java::lang::String &);

            jfloat getFragmentScore() const;
            jfloat getMaxTermWeight() const;
            jfloat getTokenScore() const;
            ::org::apache::lucene::search::highlight::WeightedSpanTerm getWeightedSpanTerm(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::TokenStream init(const ::org::apache::lucene::analysis::TokenStream &) const;
            jboolean isExpandMultiTermQuery() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(QueryScorer);
          extern PyTypeObject *PY_TYPE(QueryScorer);

          class t_QueryScorer {
          public:
            PyObject_HEAD
            QueryScorer object;
            static PyObject *wrap_Object(const QueryScorer&);
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
