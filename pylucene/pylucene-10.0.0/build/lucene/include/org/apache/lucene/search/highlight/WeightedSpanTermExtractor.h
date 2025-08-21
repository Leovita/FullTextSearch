#ifndef org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H
#define org_apache_lucene_search_highlight_WeightedSpanTermExtractor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace highlight {
          class WeightedSpanTerm;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_0d82408c6e55bc30,
              mid_getExpandMultiTermQuery_947277eca0748c4e,
              mid_getTokenStream_707aa2a89bdef693,
              mid_getWeightedSpanTerms_ea47597dd488f452,
              mid_getWeightedSpanTerms_0414b7828e9db36b,
              mid_getWeightedSpanTermsWithScores_aa2d157e8bbb5fd6,
              mid_isCachedTokenStream_947277eca0748c4e,
              mid_isUsePayloads_947277eca0748c4e,
              mid_setExpandMultiTermQuery_b110fc3a58c081ab,
              mid_setUsePayloads_b110fc3a58c081ab,
              mid_setWrapIfNotCachingTokenFilter_b110fc3a58c081ab,
              mid_fieldNameComparator_4a13a663b5c11133,
              mid_collectSpanQueryFields_a8c011bc2a6e1e25,
              mid_mustRewriteQuery_7138aef954ed6314,
              mid_isQueryUnsupported_0be35c16891dfd3c,
              mid_extractWeightedTerms_4e3fb54ec2659807,
              mid_extractWeightedSpanTerms_3db00dfb3f81ce15,
              mid_getLeafContext_73a30448bd05c3e2,
              mid_extractUnknownQuery_4440002e948cd3d6,
              mid_setMaxDocCharsToAnalyze_540b2b23d51b1efd,
              mid_extract_deb5aaa35534728c,
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
