#ifndef org_apache_lucene_analysis_ja_Token_H
#define org_apache_lucene_analysis_ja_Token_H

#include "org/apache/lucene/analysis/morph/Token.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_825ff29bc2d13cdb,
              mid_getBaseForm_e7df854526d67fa3,
              mid_getInflectionForm_e7df854526d67fa3,
              mid_getInflectionType_e7df854526d67fa3,
              mid_getPartOfSpeech_e7df854526d67fa3,
              mid_getPronunciation_e7df854526d67fa3,
              mid_getReading_e7df854526d67fa3,
              mid_isKnown_9aa4f33e82ea333f,
              mid_isUnknown_9aa4f33e82ea333f,
              mid_isUser_9aa4f33e82ea333f,
              mid_toString_e7df854526d67fa3,
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
