#ifndef org_apache_lucene_analysis_ko_dict_KoMorphData_H
#define org_apache_lucene_analysis_ko_dict_KoMorphData_H

#include "org/apache/lucene/analysis/morph/MorphData.h"

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
          namespace dict {

            class KoMorphData : public ::org::apache::lucene::analysis::morph::MorphData {
             public:
              enum {
                mid_getLeftPOS_aaabe9c3d0c4ec64,
                mid_getMorphemes_2adb092e08e57358,
                mid_getPOSType_e6fe68c793eb798f,
                mid_getReading_cd8436557ab831f9,
                mid_getRightPOS_aaabe9c3d0c4ec64,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KoMorphData(jobject obj) : ::org::apache::lucene::analysis::morph::MorphData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KoMorphData(const KoMorphData& obj) : ::org::apache::lucene::analysis::morph::MorphData(obj) {}

              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS(jint) const;
              JArray< ::org::apache::lucene::analysis::ko::dict::KoMorphData$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType(jint) const;
              ::java::lang::String getReading(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(KoMorphData);
            extern PyTypeObject *PY_TYPE(KoMorphData);

            class t_KoMorphData {
            public:
              PyObject_HEAD
              KoMorphData object;
              static PyObject *wrap_Object(const KoMorphData&);
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
