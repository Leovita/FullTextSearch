#ifndef org_apache_lucene_expressions_js_ExpressionMath_H
#define org_apache_lucene_expressions_js_ExpressionMath_H

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
      namespace expressions {
        namespace js {

          class ExpressionMath : public ::java::lang::Object {
           public:
            enum {
              mid_haversinKilometers_3b7e25b0c0a0582d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExpressionMath(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExpressionMath(const ExpressionMath& obj) : ::java::lang::Object(obj) {}

            static jdouble haversinKilometers(jdouble, jdouble, jdouble, jdouble);
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
      namespace expressions {
        namespace js {
          extern PyType_Def PY_TYPE_DEF(ExpressionMath);
          extern PyTypeObject *PY_TYPE(ExpressionMath);

          class t_ExpressionMath {
          public:
            PyObject_HEAD
            ExpressionMath object;
            static PyObject *wrap_Object(const ExpressionMath&);
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
