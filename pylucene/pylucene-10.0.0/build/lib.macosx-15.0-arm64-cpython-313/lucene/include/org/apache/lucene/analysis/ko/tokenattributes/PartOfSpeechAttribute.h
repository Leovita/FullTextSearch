#ifndef org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttribute_H
#define org_apache_lucene_analysis_ko_tokenattributes_PartOfSpeechAttribute_H

#include "org/apache/lucene/util/Attribute.h"

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
          class Token;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {

            class PartOfSpeechAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getLeftPOS_8319649eebaf05cc,
                mid_getMorphemes_da3226d9a4bd4f43,
                mid_getPOSType_ee544d89d14021b5,
                mid_getRightPOS_8319649eebaf05cc,
                mid_setToken_cff4f6c452786eb5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PartOfSpeechAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PartOfSpeechAttribute(const PartOfSpeechAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS() const;
              JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes() const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType() const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS() const;
              void setToken(const ::org::apache::lucene::analysis::ko::Token &) const;
            };
          }
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
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(PartOfSpeechAttribute);
            extern PyTypeObject *PY_TYPE(PartOfSpeechAttribute);

            class t_PartOfSpeechAttribute {
            public:
              PyObject_HEAD
              PartOfSpeechAttribute object;
              static PyObject *wrap_Object(const PartOfSpeechAttribute&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
