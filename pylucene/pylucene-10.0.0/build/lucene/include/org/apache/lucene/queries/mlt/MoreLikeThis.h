#ifndef org_apache_lucene_queries_mlt_MoreLikeThis_H
#define org_apache_lucene_queries_mlt_MoreLikeThis_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace similarities {
          class TFIDFSimilarity;
        }
      }
      namespace index {
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Set;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
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
              mid_init$_1980becffa418484,
              mid_init$_f4039b562c99241d,
              mid_describeParams_09a7afff1868fc5e,
              mid_getAnalyzer_6755ba003d984513,
              mid_getBoostFactor_9b6c3480dac00edf,
              mid_getFieldNames_6da8f3ea65e22733,
              mid_getMaxDocFreq_20fbf7565993c3d7,
              mid_getMaxNumTokensParsed_20fbf7565993c3d7,
              mid_getMaxQueryTerms_20fbf7565993c3d7,
              mid_getMaxWordLen_20fbf7565993c3d7,
              mid_getMinDocFreq_20fbf7565993c3d7,
              mid_getMinTermFreq_20fbf7565993c3d7,
              mid_getMinWordLen_20fbf7565993c3d7,
              mid_getSimilarity_f4c8dce3201d1d50,
              mid_getStopWords_4df174295554d7bd,
              mid_isBoost_947277eca0748c4e,
              mid_like_084e5d933b3db302,
              mid_like_329233af2742a1a1,
              mid_like_81d497e8e0cac0b2,
              mid_retrieveInterestingTerms_def776e128cea4f0,
              mid_retrieveInterestingTerms_c53d91f263c9b62a,
              mid_setAnalyzer_07cd0f76cabcf75a,
              mid_setBoost_b110fc3a58c081ab,
              mid_setBoostFactor_c771a95b0227fb6a,
              mid_setFieldNames_ce41e621b30e91b1,
              mid_setMaxDocFreq_540b2b23d51b1efd,
              mid_setMaxDocFreqPct_540b2b23d51b1efd,
              mid_setMaxNumTokensParsed_540b2b23d51b1efd,
              mid_setMaxQueryTerms_540b2b23d51b1efd,
              mid_setMaxWordLen_540b2b23d51b1efd,
              mid_setMinDocFreq_540b2b23d51b1efd,
              mid_setMinTermFreq_540b2b23d51b1efd,
              mid_setMinWordLen_540b2b23d51b1efd,
              mid_setSimilarity_ffb1b98621f5c301,
              mid_setStopWords_1d5d4c6f11d1b2ab,
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
