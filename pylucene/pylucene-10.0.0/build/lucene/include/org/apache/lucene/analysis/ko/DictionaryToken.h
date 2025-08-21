#ifndef org_apache_lucene_analysis_ko_DictionaryToken_H
#define org_apache_lucene_analysis_ko_DictionaryToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
          class POS$Type;
          namespace dict {
            class KoMorphData;
            class KoMorphData$Morpheme;
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
        namespace ko {

          class DictionaryToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_477652ff4afbcce6,
              mid_getLeftPOS_8319649eebaf05cc,
              mid_getMorphemes_da3226d9a4bd4f43,
              mid_getPOSType_ee544d89d14021b5,
              mid_getReading_09a7afff1868fc5e,
              mid_getRightPOS_8319649eebaf05cc,
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
