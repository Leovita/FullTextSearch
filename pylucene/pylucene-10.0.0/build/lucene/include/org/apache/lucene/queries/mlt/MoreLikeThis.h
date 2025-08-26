#ifndef org_apache_lucene_queries_mlt_MoreLikeThis_H
#define org_apache_lucene_queries_mlt_MoreLikeThis_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
        namespace similarities {
          class TFIDFSimilarity;
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
    class Reader;
  }
  namespace util {
    class Map;
    class Collection;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThis : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d988f6cfce8380fb,
              mid_init$_00bbf5fd440872d7,
              mid_describeParams_e7df854526d67fa3,
              mid_getAnalyzer_7bc9b23f56937752,
              mid_getBoostFactor_8b62236f0e4d0dbc,
              mid_getFieldNames_970db9a2a49d840f,
              mid_getMaxDocFreq_bd89ce15dad49192,
              mid_getMaxNumTokensParsed_bd89ce15dad49192,
              mid_getMaxQueryTerms_bd89ce15dad49192,
              mid_getMaxWordLen_bd89ce15dad49192,
              mid_getMinDocFreq_bd89ce15dad49192,
              mid_getMinTermFreq_bd89ce15dad49192,
              mid_getMinWordLen_bd89ce15dad49192,
              mid_getSimilarity_296babe06eda0bc8,
              mid_getStopWords_79131c6bbcf08916,
              mid_isBoost_9aa4f33e82ea333f,
              mid_like_e351d4d4ee40278f,
              mid_like_b22490156853b6e4,
              mid_like_7c3eb2b2173affda,
              mid_retrieveInterestingTerms_f202269f1bcafd9e,
              mid_retrieveInterestingTerms_51c557d4d2d526b6,
              mid_setAnalyzer_1aaca852402a5069,
              mid_setBoost_f5dd97eebf6a215a,
              mid_setBoostFactor_675f4cb9a2529ee0,
              mid_setFieldNames_1f90f2fcbe43e50d,
              mid_setMaxDocFreq_8226bd0b0fc13dba,
              mid_setMaxDocFreqPct_8226bd0b0fc13dba,
              mid_setMaxNumTokensParsed_8226bd0b0fc13dba,
              mid_setMaxQueryTerms_8226bd0b0fc13dba,
              mid_setMaxWordLen_8226bd0b0fc13dba,
              mid_setMinDocFreq_8226bd0b0fc13dba,
              mid_setMinTermFreq_8226bd0b0fc13dba,
              mid_setMinWordLen_8226bd0b0fc13dba,
              mid_setSimilarity_4f3ec3e49a52259d,
              mid_setStopWords_478519f7d4301fc7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThis(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThis(const MoreLikeThis& obj) : ::java::lang::Object(obj) {}

            static jboolean DEFAULT_BOOST;
            static JArray< ::java::lang::String > *DEFAULT_FIELD_NAMES;
            static jint DEFAULT_MAX_DOC_FREQ;
            static jint DEFAULT_MAX_NUM_TOKENS_PARSED;
            static jint DEFAULT_MAX_QUERY_TERMS;
            static jint DEFAULT_MAX_WORD_LENGTH;
            static jint DEFAULT_MIN_DOC_FREQ;
            static jint DEFAULT_MIN_TERM_FREQ;
            static jint DEFAULT_MIN_WORD_LENGTH;
            static ::java::util::Set *DEFAULT_STOP_WORDS;

            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &);
            MoreLikeThis(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::TFIDFSimilarity &);

            ::java::lang::String describeParams() const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            jfloat getBoostFactor() const;
            JArray< ::java::lang::String > getFieldNames() const;
            jint getMaxDocFreq() const;
            jint getMaxNumTokensParsed() const;
            jint getMaxQueryTerms() const;
            jint getMaxWordLen() const;
            jint getMinDocFreq() const;
            jint getMinTermFreq() const;
            jint getMinWordLen() const;
            ::org::apache::lucene::search::similarities::TFIDFSimilarity getSimilarity() const;
            ::java::util::Set getStopWords() const;
            jboolean isBoost() const;
            ::org::apache::lucene::search::Query like(jint) const;
            ::org::apache::lucene::search::Query like(const ::java::util::Map &) const;
            ::org::apache::lucene::search::Query like(const ::java::lang::String &, const JArray< ::java::io::Reader > &) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(jint) const;
            JArray< ::java::lang::String > retrieveInterestingTerms(const ::java::io::Reader &, const ::java::lang::String &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setBoost(jboolean) const;
            void setBoostFactor(jfloat) const;
            void setFieldNames(const JArray< ::java::lang::String > &) const;
            void setMaxDocFreq(jint) const;
            void setMaxDocFreqPct(jint) const;
            void setMaxNumTokensParsed(jint) const;
            void setMaxQueryTerms(jint) const;
            void setMaxWordLen(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFreq(jint) const;
            void setMinWordLen(jint) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::TFIDFSimilarity &) const;
            void setStopWords(const ::java::util::Set &) const;
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
      namespace queries {
        namespace mlt {
          extern PyType_Def PY_TYPE_DEF(MoreLikeThis);
          extern PyTypeObject *PY_TYPE(MoreLikeThis);

          class t_MoreLikeThis {
          public:
            PyObject_HEAD
            MoreLikeThis object;
            static PyObject *wrap_Object(const MoreLikeThis&);
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
