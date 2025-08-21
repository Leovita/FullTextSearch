#ifndef org_apache_lucene_analysis_pt_RSLPStemmerBase_H
#define org_apache_lucene_analysis_pt_RSLPStemmerBase_H

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
        namespace pt {

          class RSLPStemmerBase : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_parse_25d17b9dc4f12cf6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RSLPStemmerBase(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RSLPStemmerBase(const RSLPStemmerBase& obj) : ::java::lang::Object(obj) {}

            RSLPStemmerBase();
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
        namespace pt {
          extern PyType_Def PY_TYPE_DEF(RSLPStemmerBase);
          extern PyTypeObject *PY_TYPE(RSLPStemmerBase);

          class t_RSLPStemmerBase {
          public:
            PyObject_HEAD
            RSLPStemmerBase object;
            static PyObject *wrap_Object(const RSLPStemmerBase&);
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
