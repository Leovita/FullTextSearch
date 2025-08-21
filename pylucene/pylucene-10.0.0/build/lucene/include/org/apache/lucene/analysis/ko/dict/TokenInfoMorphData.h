#ifndef org_apache_lucene_analysis_ko_dict_TokenInfoMorphData_H
#define org_apache_lucene_analysis_ko_dict_TokenInfoMorphData_H

#include "java/lang/Object.h"

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
          namespace dict {

            class TokenInfoMorphData : public ::java::lang::Object {
             public:
              enum {
                mid_getLeftId_3c9bba330f083871,
                mid_getLeftPOS_aaabe9c3d0c4ec64,
                mid_getMorphemes_2adb092e08e57358,
                mid_getPOSType_e6fe68c793eb798f,
                mid_getReading_cd8436557ab831f9,
                mid_getRightId_3c9bba330f083871,
                mid_getRightPOS_aaabe9c3d0c4ec64,
                mid_getWordCost_3c9bba330f083871,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenInfoMorphData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenInfoMorphData(const TokenInfoMorphData& obj) : ::java::lang::Object(obj) {}

              static jint HAS_READING;
              static jint HAS_SINGLE_POS;

              jint getLeftId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS(jint) const;
              JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType(jint) const;
              ::java::lang::String getReading(jint) const;
              jint getRightId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS(jint) const;
              jint getWordCost(jint) const;
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
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(TokenInfoMorphData);
            extern PyTypeObject *PY_TYPE(TokenInfoMorphData);

            class t_TokenInfoMorphData {
            public:
              PyObject_HEAD
              TokenInfoMorphData object;
              static PyObject *wrap_Object(const TokenInfoMorphData&);
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
