#ifndef org_apache_lucene_search_highlight_Highlighter_H
#define org_apache_lucene_search_highlight_Highlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class InvalidTokenOffsetsException;
          class TextFragment;
          class Formatter;
          class Encoder;
          class Scorer;
          class Fragmenter;
        }
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
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
              mid_init$_a6c2e2c3ee8c0728,
              mid_init$_e9fcfce58768eeb6,
              mid_init$_7923b35e98f88ae8,
              mid_getBestFragment_773b33cc21ea89e5,
              mid_getBestFragment_caf57cb7f57d0920,
              mid_getBestFragments_4d1aab37a0c85254,
              mid_getBestFragments_daccb57ee89ca3bb,
              mid_getBestFragments_6c74eee114683133,
              mid_getBestTextFragments_6a418415386ac8cf,
              mid_getEncoder_4d1e08a23b68a290,
              mid_getFragmentScorer_86d5e51c53dd3687,
              mid_getMaxDocCharsToAnalyze_bd89ce15dad49192,
              mid_getTextFragmenter_02f9bcf6a4fa1969,
              mid_setEncoder_e3634de257cd1cdd,
              mid_setFragmentScorer_a6c2e2c3ee8c0728,
              mid_setMaxDocCharsToAnalyze_8226bd0b0fc13dba,
              mid_setTextFragmenter_0a629e319ad6ff88,
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
