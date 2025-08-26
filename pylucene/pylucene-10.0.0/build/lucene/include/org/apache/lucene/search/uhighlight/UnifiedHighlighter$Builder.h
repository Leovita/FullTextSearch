#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class PassageFormatter;
          class PassageScorer;
          class UnifiedHighlighter$Builder;
          class UnifiedHighlighter;
          class Passage;
          class UnifiedHighlighter$HighlightFlag;
        }
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
      class Function;
      class Supplier;
    }
    class Comparator;
    class Set;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class UnifiedHighlighter$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2911da2a708e97e5,
              mid_build_76a3df16ca2af9cc,
              mid_getFlags_79131c6bbcf08916,
              mid_getIndexAnalyzer_7bc9b23f56937752,
              mid_getIndexSearcher_b5872e6ced4699df,
              mid_withBreakIterator_6e5a284dfb8475c5,
              mid_withCacheFieldValCharsThreshold_fec05e5f2ba6c1c8,
              mid_withFieldMatcher_9daba775f0fea4be,
              mid_withFlags_93b078fccecdfbe3,
              mid_withFormatter_102828d2ed8c95c2,
              mid_withHandleMultiTermQuery_8169aebdaa60a69d,
              mid_withHighlightPhrasesStrictly_8169aebdaa60a69d,
              mid_withMaskedFieldsFunc_9c184355f2c3d598,
              mid_withMaxLength_fec05e5f2ba6c1c8,
              mid_withMaxNoHighlightPassages_fec05e5f2ba6c1c8,
              mid_withPassageRelevancyOverSpeed_8169aebdaa60a69d,
              mid_withPassageSortComparator_b2def1b8016dd1fe,
              mid_withScorer_847a5555dff90bf1,
              mid_withWeightMatches_8169aebdaa60a69d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnifiedHighlighter$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnifiedHighlighter$Builder(const UnifiedHighlighter$Builder& obj) : ::java::lang::Object(obj) {}

            UnifiedHighlighter$Builder(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter build() const;
            ::java::util::Set getFlags() const;
            ::org::apache::lucene::analysis::Analyzer getIndexAnalyzer() const;
            ::org::apache::lucene::search::IndexSearcher getIndexSearcher() const;
            UnifiedHighlighter$Builder withBreakIterator(const ::java::util::function::Supplier &) const;
            UnifiedHighlighter$Builder withCacheFieldValCharsThreshold(jint) const;
            UnifiedHighlighter$Builder withFieldMatcher(const ::java::util::function::Predicate &) const;
            UnifiedHighlighter$Builder withFlags(const ::java::util::Set &) const;
            UnifiedHighlighter$Builder withFormatter(const ::org::apache::lucene::search::uhighlight::PassageFormatter &) const;
            UnifiedHighlighter$Builder withHandleMultiTermQuery(jboolean) const;
            UnifiedHighlighter$Builder withHighlightPhrasesStrictly(jboolean) const;
            UnifiedHighlighter$Builder withMaskedFieldsFunc(const ::java::util::function::Function &) const;
            UnifiedHighlighter$Builder withMaxLength(jint) const;
            UnifiedHighlighter$Builder withMaxNoHighlightPassages(jint) const;
            UnifiedHighlighter$Builder withPassageRelevancyOverSpeed(jboolean) const;
            UnifiedHighlighter$Builder withPassageSortComparator(const ::java::util::Comparator &) const;
            UnifiedHighlighter$Builder withScorer(const ::org::apache::lucene::search::uhighlight::PassageScorer &) const;
            UnifiedHighlighter$Builder withWeightMatches(jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(UnifiedHighlighter$Builder);
          extern PyTypeObject *PY_TYPE(UnifiedHighlighter$Builder);

          class t_UnifiedHighlighter$Builder {
          public:
            PyObject_HEAD
            UnifiedHighlighter$Builder object;
            static PyObject *wrap_Object(const UnifiedHighlighter$Builder&);
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
