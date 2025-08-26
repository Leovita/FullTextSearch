#ifndef org_apache_lucene_analysis_miscellaneous_WordDelimiterFilter_H
#define org_apache_lucene_analysis_miscellaneous_WordDelimiterFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class WordDelimiterFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_c5bf2c3ebc208931,
              mid_init$_b04fa133f6b9f5fb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WordDelimiterFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WordDelimiterFilter(const WordDelimiterFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint ALPHA;
            static jint ALPHANUM;
            static jint CATENATE_ALL;
            static jint CATENATE_NUMBERS;
            static jint CATENATE_WORDS;
            static jint DIGIT;
            static jint GENERATE_NUMBER_PARTS;
            static jint GENERATE_WORD_PARTS;
            static jint IGNORE_KEYWORDS;
            static jint LOWER;
            static jint PRESERVE_ORIGINAL;
            static jint SPLIT_ON_CASE_CHANGE;
            static jint SPLIT_ON_NUMERICS;
            static jint STEM_ENGLISH_POSSESSIVE;
            static jint SUBWORD_DELIM;
            static jint UPPER;

            WordDelimiterFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, const ::org::apache::lucene::analysis::CharArraySet &);
            WordDelimiterFilter(const ::org::apache::lucene::analysis::TokenStream &, const JArray< jbyte > &, jint, const ::org::apache::lucene::analysis::CharArraySet &);

            jboolean incrementToken() const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(WordDelimiterFilter);
          extern PyTypeObject *PY_TYPE(WordDelimiterFilter);

          class t_WordDelimiterFilter {
          public:
            PyObject_HEAD
            WordDelimiterFilter object;
            static PyObject *wrap_Object(const WordDelimiterFilter&);
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
