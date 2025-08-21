#ifndef org_apache_lucene_analysis_ko_DecompoundToken_H
#define org_apache_lucene_analysis_ko_DecompoundToken_H

#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Tag;
          class POS$Type;
          namespace dict {
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

          class DecompoundToken : public ::org::apache::lucene::analysis::ko::Token {
           public:
            enum {
              mid_init$_749ab561df0acbec,
              mid_getLeftPOS_8319649eebaf05cc,
              mid_getMorphemes_da3226d9a4bd4f43,
              mid_getPOSType_ee544d89d14021b5,
              mid_getReading_09a7afff1868fc5e,
              mid_getRightPOS_8319649eebaf05cc,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DecompoundToken(jobject obj) : ::org::apache::lucene::analysis::ko::Token(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DecompoundToken(const DecompoundToken& obj) : ::org::apache::lucene::analysis::ko::Token(obj) {}

            DecompoundToken(const ::org::apache::lucene::analysis::ko::POS$Tag &, const ::java::lang::String &, jint, jint, const ::org::apache::lucene::analysis::morph::TokenType &);

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
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
          extern PyType_Def PY_TYPE_DEF(DecompoundToken);
          extern PyTypeObject *PY_TYPE(DecompoundToken);

          class t_DecompoundToken {
          public:
            PyObject_HEAD
            DecompoundToken object;
            static PyObject *wrap_Object(const DecompoundToken&);
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
