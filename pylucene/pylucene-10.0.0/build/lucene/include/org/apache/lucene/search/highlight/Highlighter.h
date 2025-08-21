#ifndef org_apache_lucene_search_highlight_Highlighter_H
#define org_apache_lucene_search_highlight_Highlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Fragmenter;
          class Scorer;
          class InvalidTokenOffsetsException;
          class TextFragment;
          class Formatter;
          class Encoder;
        }
      }
      namespace analysis {
        class Analyzer;
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

          class Highlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_18e81cbddf7ba652,
              mid_init$_9bd1b07590680bfe,
              mid_init$_d94eff9b8e624b7e,
              mid_getBestFragment_6c6e60b8ae4f464e,
              mid_getBestFragment_7c987f5a693289e1,
              mid_getBestFragments_e080a6798450cb34,
              mid_getBestFragments_8bcdf24125922188,
              mid_getBestFragments_546150871d2ffb49,
              mid_getBestTextFragments_fcc7a48e11f69a78,
              mid_getEncoder_0ee43d3a1437b4c1,
              mid_getFragmentScorer_459c538cfba8dd0c,
              mid_getMaxDocCharsToAnalyze_20fbf7565993c3d7,
              mid_getTextFragmenter_b4e8b5b1d625024e,
              mid_setEncoder_f9beb7a8a145b1bb,
              mid_setFragmentScorer_18e81cbddf7ba652,
              mid_setMaxDocCharsToAnalyze_540b2b23d51b1efd,
              mid_setTextFragmenter_a9a031655e33107f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Highlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Highlighter(const Highlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_CHARS_TO_ANALYZE;

            Highlighter(const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Encoder &, const ::org::apache::lucene::search::highlight::Scorer &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &, jint) const;
            JArray< ::org::apache::lucene::search::highlight::TextFragment > getBestTextFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jboolean, jint) const;
            ::org::apache::lucene::search::highlight::Encoder getEncoder() const;
            ::org::apache::lucene::search::highlight::Scorer getFragmentScorer() const;
            jint getMaxDocCharsToAnalyze() const;
            ::org::apache::lucene::search::highlight::Fragmenter getTextFragmenter() const;
            void setEncoder(const ::org::apache::lucene::search::highlight::Encoder &) const;
            void setFragmentScorer(const ::org::apache::lucene::search::highlight::Scorer &) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setTextFragmenter(const ::org::apache::lucene::search::highlight::Fragmenter &) const;
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
          extern PyType_Def PY_TYPE_DEF(Highlighter);
          extern PyTypeObject *PY_TYPE(Highlighter);

          class t_Highlighter {
          public:
            PyObject_HEAD
            Highlighter object;
            static PyObject *wrap_Object(const Highlighter&);
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
