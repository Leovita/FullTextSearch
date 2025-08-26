#ifndef org_apache_lucene_analysis_morph_Dictionary_H
#define org_apache_lucene_analysis_morph_Dictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class MorphData;
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
        namespace morph {

          class Dictionary : public ::java::lang::Object {
           public:
            enum {
              mid_getLeftId_a3904e10f5bb9437,
              mid_getMorphAttributes_bc5c4683890a54c0,
              mid_getRightId_a3904e10f5bb9437,
              mid_getWordCost_a3904e10f5bb9437,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Dictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Dictionary(const Dictionary& obj) : ::java::lang::Object(obj) {}

            jint getLeftId(jint) const;
            ::org::apache::lucene::analysis::morph::MorphData getMorphAttributes() const;
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
          extern PyType_Def PY_TYPE_DEF(Dictionary);
          extern PyTypeObject *PY_TYPE(Dictionary);

          class t_Dictionary {
          public:
            PyObject_HEAD
            Dictionary object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Dictionary *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Dictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Dictionary&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
