#ifndef org_apache_lucene_analysis_morph_MorphData_H
#define org_apache_lucene_analysis_morph_MorphData_H

#include "java/lang/Object.h"

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
        namespace morph {

          class MorphData : public ::java::lang::Object {
           public:
            enum {
              mid_getLeftId_a3904e10f5bb9437,
              mid_getRightId_a3904e10f5bb9437,
              mid_getWordCost_a3904e10f5bb9437,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MorphData(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MorphData(const MorphData& obj) : ::java::lang::Object(obj) {}

            jint getLeftId(jint) const;
            jint getRightId(jint) const;
            jint getWordCost(jint) const;
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
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(MorphData);
          extern PyTypeObject *PY_TYPE(MorphData);

          class t_MorphData {
          public:
            PyObject_HEAD
            MorphData object;
            static PyObject *wrap_Object(const MorphData&);
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
