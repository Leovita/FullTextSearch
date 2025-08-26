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
              mid_init$_89ab2bee9aa84b00,
              mid_getNextToken_bd89ce15dad49192,
              mid_getText_6c885244caf2c782,
              mid_setBufferSize_8226bd0b0fc13dba,
              mid_yyatEOF_9aa4f33e82ea333f,
              mid_yybegin_8226bd0b0fc13dba,
              mid_yychar_bd89ce15dad49192,
              mid_yycharat_bc94dd98365f92fb,
              mid_yyclose_e7bdbe105ce1bafb,
              mid_yylength_bd89ce15dad49192,
              mid_yypushback_8226bd0b0fc13dba,
              mid_yyreset_89ab2bee9aa84b00,
              mid_yystate_bd89ce15dad49192,
              mid_yytext_e7df854526d67fa3,
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
