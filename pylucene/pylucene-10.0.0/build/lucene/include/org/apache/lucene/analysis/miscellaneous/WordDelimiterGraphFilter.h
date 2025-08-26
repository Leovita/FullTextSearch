#ifndef org_apache_lucene_analysis_miscellaneous_WordDelimiterGraphFilter_H
#define org_apache_lucene_analysis_miscellaneous_WordDelimiterGraphFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class WordDelimiterGraphFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c5bf2c3ebc208931,
              mid_init$_bae2e69ce1861b01,
              mid_flagsToString_0da8f0b89b1e9a22,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordDelimiterGraphFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordDelimiterGraphFilter(const WordDelimiterGraphFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint CATENATE_ALL;
            static jint CATENATE_NUMBERS;
            static jint CATENATE_WORDS;
            static jint GENERATE_NUMBER_PARTS;
            static jint GENERATE_WORD_PARTS;
            static jint IGNORE_KEYWORDS;
            static jint PRESERVE_ORIGINAL;
            static jint SPLIT_ON_CASE_CHANGE;
            static jint SPLIT_ON_NUMERICS;
            static jint STEM_ENGLISH_POSSESSIVE;

            WordDelimiterGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, const ::org::apache::lucene::analysis::CharArraySet &);
            WordDelimiterGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, const JArray< jbyte > &, jint, const ::org::apache::lucene::analysis::CharArraySet &);

            static ::java::lang::String flagsToString(jint);
            jboolean incrementToken() const;
            void reset() const;
            ::java::lang::String toString() const;
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
      namespace analysis {
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(WordDelimiterGraphFilter);
          extern PyTypeObject *PY_TYPE(WordDelimiterGraphFilter);

          class t_WordDelimiterGraphFilter {
          public:
            PyObject_HEAD
            WordDelimiterGraphFilter object;
            static PyObject *wrap_Object(const WordDelimiterGraphFilter&);
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
