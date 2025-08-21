#ifndef org_apache_pylucene_ref_PythonObject_H
#define org_apache_pylucene_ref_PythonObject_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {

        class PythonObject : public ::java::lang::Object {
         public:

          enum {
            fid_pythonObject,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonObject(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonObject(const PythonObject& obj) : ::java::lang::Object(obj) {}

          jlong _get_pythonObject() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {
        extern PyType_Def PY_TYPE_DEF(PythonObject);
        extern PyTypeObject *PY_TYPE(PythonObject);

        class t_PythonObject {
        public:
          PyObject_HEAD
          PythonObject object;
          static PyObject *wrap_Object(const PythonObject&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
