#ifndef org_apache_lucene_search_highlight_QueryScorer_H
#define org_apache_lucene_search_highlight_QueryScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class Scorer;
          class WeightedSpanTerm;
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
  namespace io {
    class IOException;
  }
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

          class QueryScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f1dfb734d35ab572,
              mid_init$_d7278af460a7b96a,
              mid_init$_8848e7ccd8e9c62a,
              mid_init$_4fe2c86dff5aeb77,
              mid_init$_9d3535bfda97f8a3,
              mid_init$_fa925986901b66c6,
              mid_getFragmentScore_9b6c3480dac00edf,
              mid_getMaxTermWeight_9b6c3480dac00edf,
              mid_getTokenScore_9b6c3480dac00edf,
              mid_getWeightedSpanTerm_88a2e314a1b4b210,
              mid_init_2ec4d1726b35d478,
              mid_isExpandMultiTermQuery_947277eca0748c4e,
              mid_isUsePayloads_947277eca0748c4e,
              mid_setExpandMultiTermQuery_b110fc3a58c081ab,
              mid_setMaxDocCharsToAnalyze_540b2b23d51b1efd,
              mid_setUsePayloads_b110fc3a58c081ab,
              mid_setWrapIfNotCachingTokenFilter_b110fc3a58c081ab,
              mid_startFragment_bc0317ca0a60e657,
              mid_newTermExtractor_53c5fcb4e5963d37,
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
