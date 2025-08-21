#ifndef org_apache_lucene_backward_codecs_lucene84_PForUtil_H
#define org_apache_lucene_backward_codecs_lucene84_PForUtil_H

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
      namespace backward_codecs {
        namespace lucene84 {

          class PForUtil : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PForUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PForUtil(const PForUtil& obj) : ::java::lang::Object(obj) {}
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
      namespace backward_codecs {
        namespace lucene84 {
          extern PyType_Def PY_TYPE_DEF(PForUtil);
          extern PyTypeObject *PY_TYPE(PForUtil);

          class t_PForUtil {
          public:
            PyObject_HEAD
            PForUtil object;
            static PyObject *wrap_Object(const PForUtil&);
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
