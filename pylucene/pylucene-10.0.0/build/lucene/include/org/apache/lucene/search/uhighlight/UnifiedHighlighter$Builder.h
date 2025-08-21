#ifndef org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H
#define org_apache_lucene_search_uhighlight_UnifiedHighlighter$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class Predicate;
      class Function;
    }
    class Set;
    class Comparator;
  }
  namespace text {
    class BreakIterator;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$HighlightFlag;
          class Passage;
          class UnifiedHighlighter$Builder;
          class UnifiedHighlighter;
          class PassageFormatter;
          class PassageScorer;
        }
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
      }
    }
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
              mid_init$_c61163c22195f70b,
              mid_build_51499746e0aa5d54,
              mid_getFlags_4df174295554d7bd,
              mid_getIndexAnalyzer_6755ba003d984513,
              mid_getIndexSearcher_8c9a1e527c2e5a94,
              mid_withBreakIterator_39d5153852e9fda7,
              mid_withCacheFieldValCharsThreshold_10084d94a344ba31,
              mid_withFieldMatcher_f3ff6687e76dd171,
              mid_withFlags_f56668c193e5ac76,
              mid_withFormatter_2bc9ce04b11fc7c9,
              mid_withHandleMultiTermQuery_f2ca432251607204,
              mid_withHighlightPhrasesStrictly_f2ca432251607204,
              mid_withMaskedFieldsFunc_79bbbe2d5712ff84,
              mid_withMaxLength_10084d94a344ba31,
              mid_withMaxNoHighlightPassages_10084d94a344ba31,
              mid_withPassageRelevancyOverSpeed_f2ca432251607204,
              mid_withPassageSortComparator_34eae4e045bb8da4,
              mid_withScorer_c0a66abfdc49e093,
              mid_withWeightMatches_f2ca432251607204,
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
