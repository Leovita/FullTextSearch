#ifndef org_apache_lucene_analysis_ja_dict_UnknownMorphData_H
#define org_apache_lucene_analysis_ja_dict_UnknownMorphData_H

#include "org/apache/lucene/analysis/ja/dict/TokenInfoMorphData.h"

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

            class UnknownMorphData : public ::org::apache::lucene::analysis::ja::dict::TokenInfoMorphData {
             public:
              enum {
                mid_getInflectionForm_cd8436557ab831f9,
                mid_getInflectionType_cd8436557ab831f9,
                mid_getReading_8050a2644734b4d8,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnknownMorphData(jobject obj) : ::org::apache::lucene::analysis::ja::dict::TokenInfoMorphData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnknownMorphData(const UnknownMorphData& obj) : ::org::apache::lucene::analysis::ja::dict::TokenInfoMorphData(obj) {}

              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(UnknownMorphData);
            extern PyTypeObject *PY_TYPE(UnknownMorphData);

            class t_UnknownMorphData {
            public:
              PyObject_HEAD
              UnknownMorphData object;
              static PyObject *wrap_Object(const UnknownMorphData&);
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
