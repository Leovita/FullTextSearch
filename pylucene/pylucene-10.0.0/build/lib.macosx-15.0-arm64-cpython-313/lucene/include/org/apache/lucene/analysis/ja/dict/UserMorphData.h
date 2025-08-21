#ifndef org_apache_lucene_analysis_ja_dict_UserMorphData_H
#define org_apache_lucene_analysis_ja_dict_UserMorphData_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class JaMorphData;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UserMorphData : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_8050a2644734b4d8,
                mid_getInflectionForm_cd8436557ab831f9,
                mid_getInflectionType_cd8436557ab831f9,
                mid_getLeftId_3c9bba330f083871,
                mid_getPartOfSpeech_cd8436557ab831f9,
                mid_getPronunciation_8050a2644734b4d8,
                mid_getReading_8050a2644734b4d8,
                mid_getRightId_3c9bba330f083871,
                mid_getWordCost_3c9bba330f083871,
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

              static jint LEFT_ID;
              static jint RIGHT_ID;
              static jint WORD_COST;

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              jint getLeftId(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint getRightId(jint) const;
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
        namespace ja {
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
