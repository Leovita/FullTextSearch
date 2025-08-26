#ifndef org_apache_lucene_analysis_ko_dict_KoMorphData_H
#define org_apache_lucene_analysis_ko_dict_KoMorphData_H

#include "org/apache/lucene/analysis/morph/MorphData.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class KoMorphData$Morpheme;
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

            class KoMorphData : public ::org::apache::lucene::analysis::morph::MorphData {
             public:
              enum {
                mid_getLeftPOS_51fec7bb8fb3ba51,
                mid_getMorphemes_f5b40e1c8b3719a4,
                mid_getPOSType_8a424fed53279e6e,
                mid_getReading_0da8f0b89b1e9a22,
                mid_getRightPOS_51fec7bb8fb3ba51,
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
