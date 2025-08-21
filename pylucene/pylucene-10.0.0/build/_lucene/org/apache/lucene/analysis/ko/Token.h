#ifndef org_apache_lucene_analysis_ko_Token_H
#define org_apache_lucene_analysis_ko_Token_H

#include "org/apache/lucene/analysis/morph/Token.h"

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

          class Token : public ::org::apache::lucene::analysis::morph::Token {
           public:
            enum {
              mid_getLeftPOS_8319649eebaf05cc,
              mid_getMorphemes_da3226d9a4bd4f43,
              mid_getPOSType_ee544d89d14021b5,
              mid_getReading_09a7afff1868fc5e,
              mid_getRightPOS_8319649eebaf05cc,
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

            ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
            JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes() const;
            ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
            ::java::lang::String getReading() const;
            ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
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
