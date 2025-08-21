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
        class CharArraySet;
        class TokenStream;
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
              mid_init$_5d7fa0d7b5076e38,
              mid_init$_ec42cfe8da6047da,
              mid_flagsToString_cd8436557ab831f9,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              mid_toString_09a7afff1868fc5e,
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
