#ifndef org_apache_lucene_analysis_ja_dict_JaMorphData_H
#define org_apache_lucene_analysis_ja_dict_JaMorphData_H

#include "org/apache/lucene/analysis/morph/MorphData.h"

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
        namespace ja {
          namespace dict {

            class JaMorphData : public ::org::apache::lucene::analysis::morph::MorphData {
             public:
              enum {
                mid_getBaseForm_6ceb45848be0c90e,
                mid_getInflectionForm_0da8f0b89b1e9a22,
                mid_getInflectionType_0da8f0b89b1e9a22,
                mid_getPartOfSpeech_0da8f0b89b1e9a22,
                mid_getPronunciation_6ceb45848be0c90e,
                mid_getReading_6ceb45848be0c90e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit JaMorphData(jobject obj) : ::org::apache::lucene::analysis::morph::MorphData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              JaMorphData(const JaMorphData& obj) : ::org::apache::lucene::analysis::morph::MorphData(obj) {}

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(JaMorphData);
            extern PyTypeObject *PY_TYPE(JaMorphData);

            class t_JaMorphData {
            public:
              PyObject_HEAD
              JaMorphData object;
              static PyObject *wrap_Object(const JaMorphData&);
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
