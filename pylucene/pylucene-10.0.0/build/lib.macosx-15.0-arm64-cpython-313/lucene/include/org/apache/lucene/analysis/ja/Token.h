#ifndef org_apache_lucene_analysis_ja_Token_H
#define org_apache_lucene_analysis_ja_Token_H

#include "org/apache/lucene/analysis/morph/Token.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class JaMorphData;
          }
        }
        namespace morph {
          class TokenType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class Token : public ::org::apache::lucene::analysis::morph::Token {
           public:
            enum {
              mid_init$_673fb66fb1ee5373,
              mid_getBaseForm_09a7afff1868fc5e,
              mid_getInflectionForm_09a7afff1868fc5e,
              mid_getInflectionType_09a7afff1868fc5e,
              mid_getPartOfSpeech_09a7afff1868fc5e,
              mid_getPronunciation_09a7afff1868fc5e,
              mid_getReading_09a7afff1868fc5e,
              mid_isKnown_947277eca0748c4e,
              mid_isUnknown_947277eca0748c4e,
              mid_isUser_947277eca0748c4e,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Token(jobject obj) : ::org::apache::lucene::analysis::morph::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Token(const Token& obj) : ::org::apache::lucene::analysis::morph::Token(obj) {}

            Token(const JArray< jchar > &, jint, jint, jint, jint, jint, const ::org::apache::lucene::analysis::morph::TokenType &, const ::org::apache::lucene::analysis::ja::dict::JaMorphData &);

            ::java::lang::String getBaseForm() const;
            ::java::lang::String getInflectionForm() const;
            ::java::lang::String getInflectionType() const;
            ::java::lang::String getPartOfSpeech() const;
            ::java::lang::String getPronunciation() const;
            ::java::lang::String getReading() const;
            jboolean isKnown() const;
            jboolean isUnknown() const;
            jboolean isUser() const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(Token);
          extern PyTypeObject *PY_TYPE(Token);

          class t_Token {
          public:
            PyObject_HEAD
            Token object;
            static PyObject *wrap_Object(const Token&);
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
