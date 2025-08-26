#ifndef org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H
#define org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        class Query;
        namespace highlight {
          class WeightedSpanTerm;
        }
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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class WeightedSpanTermExtractor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_ee46a189998009d6,
              mid_getExpandMultiTermQuery_9aa4f33e82ea333f,
              mid_getTokenStream_6d4d6f6f288807ef,
              mid_getWeightedSpanTerms_ed9f0d6014f9f0bf,
              mid_getWeightedSpanTerms_75a3dcff8157f4dc,
              mid_getWeightedSpanTermsWithScores_fabfc027942616c5,
              mid_isCachedTokenStream_9aa4f33e82ea333f,
              mid_isUsePayloads_9aa4f33e82ea333f,
              mid_setExpandMultiTermQuery_f5dd97eebf6a215a,
              mid_setUsePayloads_f5dd97eebf6a215a,
              mid_setWrapIfNotCachingTokenFilter_f5dd97eebf6a215a,
              mid_extractWeightedTerms_ee73026b057db43a,
              mid_collectSpanQueryFields_1da2d10b16df7230,
              mid_mustRewriteQuery_d38f98a1e41250ee,
              mid_isQueryUnsupported_4c29bd646fc74404,
              mid_extractWeightedSpanTerms_a63219da3c5e339d,
              mid_fieldNameComparator_94f7e759d94961b0,
              mid_getLeafContext_a465a075d20c01e1,
              mid_extractUnknownQuery_d917c39398821679,
              mid_setMaxDocCharsToAnalyze_8226bd0b0fc13dba,
              mid_extract_e95b039a24b2ac82,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WeightedSpanTermExtractor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WeightedSpanTermExtractor(const WeightedSpanTermExtractor& obj) : ::java::lang::Object(obj) {}

            WeightedSpanTermExtractor();
            WeightedSpanTermExtractor(const ::java::lang::String &);

            jboolean getExpandMultiTermQuery() const;
            ::org::apache::lucene::analysis::TokenStream getTokenStream() const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Map getWeightedSpanTerms(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::util::Map getWeightedSpanTermsWithScores(const ::org::apache::lucene::search::Query &, jfloat, const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, const ::org::apache::lucene::index::IndexReader &) const;
            jboolean isCachedTokenStream() const;
            jboolean isUsePayloads() const;
            void setExpandMultiTermQuery(jboolean) const;
            void setUsePayloads(jboolean) const;
            void setWrapIfNotCachingTokenFilter(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(WeightedSpanTermExtractor);
          extern PyTypeObject *PY_TYPE(WeightedSpanTermExtractor);

          class t_WeightedSpanTermExtractor {
          public:
            PyObject_HEAD
            WeightedSpanTermExtractor object;
            static PyObject *wrap_Object(const WeightedSpanTermExtractor&);
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
