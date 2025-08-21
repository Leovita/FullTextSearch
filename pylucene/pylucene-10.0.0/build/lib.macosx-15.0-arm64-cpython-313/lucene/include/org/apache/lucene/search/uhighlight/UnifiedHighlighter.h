#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace uhighlight {
          class PassageFormatter;
          class UnifiedHighlighter$Builder;
          class PassageScorer;
        }
        class TopDocs;
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class Predicate;
    }
    class Map;
  }
  namespace text {
    class BreakIterator;
  }
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
        namespace uhighlight {

          class UnifiedHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_209069f29d1c2313,
              mid_init$_c61163c22195f70b,
              mid_builder_815ded13baa87c27,
              mid_builderWithoutSearcher_eebccca0562bc867,
              mid_getCacheFieldValCharsThreshold_20fbf7565993c3d7,
              mid_getIndexAnalyzer_6755ba003d984513,
              mid_getIndexSearcher_8c9a1e527c2e5a94,
              mid_getMaxLength_20fbf7565993c3d7,
              mid_highlight_d3745e84f808a7da,
              mid_highlight_9402a6da3262b696,
              mid_highlightFields_8b2cf577156b87d8,
              mid_highlightFields_264e877039988ab2,
              mid_highlightFields_f5c2081e0fbf9d6f,
              mid_highlightWithoutSearcher_d5488a107905c4de,
              mid_setBreakIterator_477e4cf08f2cd161,
              mid_setCacheFieldValCharsThreshold_540b2b23d51b1efd,
              mid_setFieldMatcher_b2cba0f53cd5f915,
              mid_setFormatter_9e2a49e732a98917,
              mid_setHandleMultiTermQuery_b110fc3a58c081ab,
              mid_setHighlightPhrasesStrictly_b110fc3a58c081ab,
              mid_setMaxLength_540b2b23d51b1efd,
              mid_setMaxNoHighlightPassages_540b2b23d51b1efd,
              mid_setPassageRelevancyOverSpeed_b110fc3a58c081ab,
              mid_setScorer_c9f1c2306f3a9664,
              mid_setWeightMatches_b110fc3a58c081ab,
              mid_getAutomata_8c0c8ff748b69c44,
              mid_getOffsetSource_4203fdc61bf1f9ff,
              mid_hasUnrecognizedQuery_aae07e407daaa4bb,
              mid_evaluateFlags_24536ee7b5138a74,
              mid_evaluateFlags_512d77162db59637,
              mid_evaluateFlags_53ae88d4aa4402c8,
              mid_highlightFieldsAsObjects_264e877039988ab2,
              mid_extractTerms_fa57c664c3602578,
              mid_getFieldHighlighter_d8e29b835bb89745,
              mid_loadFieldValues_39e0df1b12198303,
              mid_getMaskedFields_b20ad7d3613ab95e,
              mid_getHighlightComponents_ea8ce79b147e7103,
              mid_getOptimizedOffsetSource_7d1fde6086af9961,
              mid_getOffsetStrategy_9fb820bd3c3cdf99,
              mid_getBreakIterator_5eda0b3486dcbe1b,
              mid_getMaxNoHighlightPassages_3f230d713d7fd2b0,
              mid_getPassageSortComparator_3ad489d36ca1826b,
              mid_newFieldHighlighter_8cca9adb27fdd451,
              mid_getFieldMatcher_e7f4dd6a51ec0293,
              mid_getPhraseHelper_dffb890c1668a635,
              mid_filterExtractedTerms_091e032253f26aaf,
              mid_newLimitedStoredFieldsVisitor_6151a59526115bce,
              mid_shouldHandleMultiTermQuery_4a13a663b5c11133,
              mid_shouldHighlightPhrasesStrictly_4a13a663b5c11133,
              mid_shouldPreferPassageRelevancyOverSpeed_4a13a663b5c11133,
              mid_requiresRewrite_c4755b0f3fea43dd,
              mid_preSpanQueryRewrite_9e9c91d3b35c0b6e,
              mid_getScorer_804f0070bc53d9d1,
              mid_getFieldInfo_a0a445f355d9f4d7,
              mid_getFormatter_afb750e45cfaeb63,
              mid_getFlags_b20ad7d3613ab95e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter(const UnifiedHighlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_CACHE_CHARS_THRESHOLD;
            static jint DEFAULT_MAX_LENGTH;

            UnifiedHighlighter(const ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder &);
            UnifiedHighlighter(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);

            static ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder builder(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$Builder builderWithoutSearcher(const ::org::apache::lucene::analysis::Analyzer &);
            jint getCacheFieldValCharsThreshold() const;
            ::org::apache::lucene::analysis::Analyzer getIndexAnalyzer() const;
            ::org::apache::lucene::search::IndexSearcher getIndexSearcher() const;
            jint getMaxLength() const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            JArray< ::java::lang::String > highlight(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, jint) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const JArray< jint > &, const JArray< jint > &) const;
            ::java::util::Map highlightFields(const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::TopDocs &, const JArray< jint > &) const;
            ::java::lang::Object highlightWithoutSearcher(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, jint) const;
            void setBreakIterator(const ::java::util::function::Supplier &) const;
            void setCacheFieldValCharsThreshold(jint) const;
            void setFieldMatcher(const ::java::util::function::Predicate &) const;
            void setFormatter(const ::org::apache::lucene::search::uhighlight::PassageFormatter &) const;
            void setHandleMultiTermQuery(jboolean) const;
            void setHighlightPhrasesStrictly(jboolean) const;
            void setMaxLength(jint) const;
            void setMaxNoHighlightPassages(jint) const;
            void setPassageRelevancyOverSpeed(jboolean) const;
            void setScorer(const ::org::apache::lucene::search::uhighlight::PassageScorer &) const;
            void setWeightMatches(jboolean) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter);

          class t_UnifiedHighlighter {
          public:
            PyObject_HEAD
            UnifiedHighlighter object;
            static PyObject *wrap_Object(const UnifiedHighlighter&);
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
