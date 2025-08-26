#ifndef org_apache_lucene_analysis_ko_dict_UserMorphData_H
#define org_apache_lucene_analysis_ko_dict_UserMorphData_H

#include "java/lang/Object.h"

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
          namespace dict {

            class UserMorphData : public ::java::lang::Object {
             public:
              enum {
                mid_getLeftId_a3904e10f5bb9437,
                mid_getLeftPOS_51fec7bb8fb3ba51,
                mid_getMorphemes_f5b40e1c8b3719a4,
                mid_getPOSType_8a424fed53279e6e,
                mid_getReading_0da8f0b89b1e9a22,
                mid_getRightId_a3904e10f5bb9437,
                mid_getRightPOS_51fec7bb8fb3ba51,
                mid_getWordCost_a3904e10f5bb9437,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserMorphData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserMorphData(const UserMorphData& obj) : ::java::lang::Object(obj) {}

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
            extern PyType_Def PY_TYPE_DEF(UserMorphData);
            extern PyTypeObject *PY_TYPE(UserMorphData);

            class t_UserMorphData {
            public:
              PyObject_HEAD
              UserMorphData object;
              static PyObject *wrap_Object(const UserMorphData&);
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
