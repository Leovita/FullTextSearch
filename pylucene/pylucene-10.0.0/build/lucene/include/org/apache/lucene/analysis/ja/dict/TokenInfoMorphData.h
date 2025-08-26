#ifndef org_apache_lucene_analysis_ja_dict_TokenInfoMorphData_H
#define org_apache_lucene_analysis_ja_dict_TokenInfoMorphData_H

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

            class TokenInfoMorphData : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_6ceb45848be0c90e,
                mid_getInflectionForm_0da8f0b89b1e9a22,
                mid_getInflectionType_0da8f0b89b1e9a22,
                mid_getLeftId_a3904e10f5bb9437,
                mid_getPartOfSpeech_0da8f0b89b1e9a22,
                mid_getPronunciation_6ceb45848be0c90e,
                mid_getReading_6ceb45848be0c90e,
                mid_getRightId_a3904e10f5bb9437,
                mid_getWordCost_a3904e10f5bb9437,
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

              static jint HAS_BASEFORM;
              static jint HAS_PRONUNCIATION;
              static jint HAS_READING;

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
