#ifndef org_apache_lucene_analysis_ko_DictionaryToken_H
#define org_apache_lucene_analysis_ko_DictionaryToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class KoMorphData$Morpheme;
            class KoMorphData;
          }
          class POS$Tag;
          class POS$Type;
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          class DictionaryToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_88868fcf7e25cd28,
              mid_getLeftPOS_2a8a370cf50ce28f,
              mid_getMorphemes_26d08ca9e8789c10,
              mid_getPOSType_86949d14aaadbcf7,
              mid_getReading_e7df854526d67fa3,
              mid_getRightPOS_2a8a370cf50ce28f,
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

            explicit DictionaryToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictionaryToken(const DictionaryToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DictionaryToken(const ::org::apache::lucene::analysis::morph::TokenType &, const ::org::apache::lucene::analysis::ko::dict::KoMorphData &, jint, const JArray< jchar > &, jint, jint, jint, jint);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(DictionaryToken);
          extern PyTypeObject *PY_TYPE(DictionaryToken);

          class t_DictionaryToken {
          public:
            PyObject_HEAD
            DictionaryToken object;
            static PyObject *wrap_Object(const DictionaryToken&);
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
