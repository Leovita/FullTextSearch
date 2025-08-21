#ifndef org_apache_lucene_analysis_standard_StandardTokenizerImpl_H
#define org_apache_lucene_analysis_standard_StandardTokenizerImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Reader;
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
      namespace analysis {
        namespace standard {

          class StandardTokenizerImpl : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fa55492f0f5d7f31,
              mid_getNextToken_20fbf7565993c3d7,
              mid_getText_ddd2ada188133d78,
              mid_setBufferSize_540b2b23d51b1efd,
              mid_yyatEOF_947277eca0748c4e,
              mid_yybegin_540b2b23d51b1efd,
              mid_yychar_20fbf7565993c3d7,
              mid_yycharat_92a13ce4196a7e69,
              mid_yyclose_3720c61b0679eb3e,
              mid_yylength_20fbf7565993c3d7,
              mid_yypushback_540b2b23d51b1efd,
              mid_yyreset_fa55492f0f5d7f31,
              mid_yystate_20fbf7565993c3d7,
              mid_yytext_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StandardTokenizerImpl(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StandardTokenizerImpl(const StandardTokenizerImpl& obj) : ::java::lang::Object(obj) {}

            static jint EMOJI_TYPE;
            static jint HANGUL_TYPE;
            static jint HIRAGANA_TYPE;
            static jint IDEOGRAPHIC_TYPE;
            static jint KATAKANA_TYPE;
            static jint NUMERIC_TYPE;
            static jint SOUTH_EAST_ASIAN_TYPE;
            static jint WORD_TYPE;
            static jint YYEOF;
            static jint YYINITIAL;

            StandardTokenizerImpl(const ::java::io::Reader &);

            jint getNextToken() const;
            void getText(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            void setBufferSize(jint) const;
            jboolean yyatEOF() const;
            void yybegin(jint) const;
            jint yychar() const;
            jchar yycharat(jint) const;
            void yyclose() const;
            jint yylength() const;
            void yypushback(jint) const;
            void yyreset(const ::java::io::Reader &) const;
            jint yystate() const;
            ::java::lang::String yytext() const;
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
        namespace standard {
          extern PyType_Def PY_TYPE_DEF(StandardTokenizerImpl);
          extern PyTypeObject *PY_TYPE(StandardTokenizerImpl);

          class t_StandardTokenizerImpl {
          public:
            PyObject_HEAD
            StandardTokenizerImpl object;
            static PyObject *wrap_Object(const StandardTokenizerImpl&);
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
