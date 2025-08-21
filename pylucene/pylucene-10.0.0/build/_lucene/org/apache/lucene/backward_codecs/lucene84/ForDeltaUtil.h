#ifndef org_apache_lucene_backward_codecs_lucene84_ForDeltaUtil_H
#define org_apache_lucene_backward_codecs_lucene84_ForDeltaUtil_H

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

          class ForDeltaUtil : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ForDeltaUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ForDeltaUtil(const ForDeltaUtil& obj) : ::java::lang::Object(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(ForDeltaUtil);
          extern PyTypeObject *PY_TYPE(ForDeltaUtil);

          class t_ForDeltaUtil {
          public:
            PyObject_HEAD
            ForDeltaUtil object;
            static PyObject *wrap_Object(const ForDeltaUtil&);
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
