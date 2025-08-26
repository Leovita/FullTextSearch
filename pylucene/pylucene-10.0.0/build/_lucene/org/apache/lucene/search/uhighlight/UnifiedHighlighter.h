#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class PassageFormatter;
          class PassageScorer;
          class UnifiedHighlighter$Builder;
        }
        class Query;
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
  namespace text {
    class BreakIterator;
  }
  namespace util {
    namespace function {
      class Predicate;
      class Supplier;
    }
    class Map;
  }
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
        namespace uhighlight {

          class UnifiedHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8d11426fbb6ddfd0,
              mid_init$_2911da2a708e97e5,
              mid_builder_4ff2b1e65e18c85f,
              mid_builderWithoutSearcher_ae741cf992b1c1e2,
              mid_getCacheFieldValCharsThreshold_bd89ce15dad49192,
              mid_getIndexAnalyzer_7bc9b23f56937752,
              mid_getIndexSearcher_b5872e6ced4699df,
              mid_getMaxLength_bd89ce15dad49192,
              mid_highlight_fed50d31b36c4601,
              mid_highlight_898de2859c7cf596,
              mid_highlightFields_24eea558aea2ea88,
              mid_highlightFields_8bd577f1efe47387,
              mid_highlightFields_a1fec942a21c2a30,
              mid_highlightWithoutSearcher_a7216a8bfaab9c1e,
              mid_setBreakIterator_acdcd59a9c6420a3,
              mid_setCacheFieldValCharsThreshold_8226bd0b0fc13dba,
              mid_setFieldMatcher_f46c7e2e342ee5db,
              mid_setFormatter_b301603a3975493b,
              mid_setHandleMultiTermQuery_f5dd97eebf6a215a,
              mid_setHighlightPhrasesStrictly_f5dd97eebf6a215a,
              mid_setMaxLength_8226bd0b0fc13dba,
              mid_setMaxNoHighlightPassages_8226bd0b0fc13dba,
              mid_setPassageRelevancyOverSpeed_f5dd97eebf6a215a,
              mid_setScorer_a279013e5e6515ae,
              mid_setWeightMatches_f5dd97eebf6a215a,
              mid_evaluateFlags_c8051b7a7c87c6db,
              mid_evaluateFlags_53ddb0074f2dc41d,
              mid_evaluateFlags_4e69e4b78d80fb5e,
              mid_getFieldInfo_e0f86c1ef7db94db,
              mid_highlightFieldsAsObjects_8bd577f1efe47387,
              mid_extractTerms_ca9fd20ba851b2a9,
              mid_getFieldHighlighter_4ed492047aca1f3e,
              mid_getOffsetSource_185f2d2301da7355,
              mid_loadFieldValues_d946dc7d93dc2381,
              mid_getMaskedFields_570080d504bfa9b3,
              mid_getHighlightComponents_43cbdb4465050681,
              mid_getOptimizedOffsetSource_ef25251b226c7a6c,
              mid_getOffsetStrategy_82ec2ddd75395000,
              mid_getBreakIterator_5d2caa5ff34b9bf9,
              mid_getScorer_bcce0eb48b91c167,
              mid_getMaxNoHighlightPassages_fa2a6f298bd618ab,
              mid_getPassageSortComparator_7eb5ff095815146c,
              mid_newFieldHighlighter_c6b3aca949c2a69e,
              mid_getFieldMatcher_5a0a6c817ea1842d,
              mid_getPhraseHelper_7713750b19c3b26b,
              mid_hasUnrecognizedQuery_e171d5cbc39a632c,
              mid_filterExtractedTerms_cbe5373195954643,
              mid_getAutomata_a186ec76ada99665,
              mid_newLimitedStoredFieldsVisitor_53508f4ff55acab4,
              mid_shouldHandleMultiTermQuery_94f7e759d94961b0,
              mid_shouldHighlightPhrasesStrictly_94f7e759d94961b0,
              mid_shouldPreferPassageRelevancyOverSpeed_94f7e759d94961b0,
              mid_requiresRewrite_2d2d67a98377ab75,
              mid_preSpanQueryRewrite_5ad843c16fca232c,
              mid_getFormatter_1575cfd1cd757ad8,
              mid_getFlags_570080d504bfa9b3,
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
