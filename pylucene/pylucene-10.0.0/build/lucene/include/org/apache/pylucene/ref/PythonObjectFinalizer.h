#ifndef org_apache_pylucene_ref_PythonObjectFinalizer_H
#define org_apache_pylucene_ref_PythonObjectFinalizer_H

#include "java/lang/ref/PhantomReference.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {
        class PythonObject;
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
    namespace pylucene {
      namespace ref {

        class PythonObjectFinalizer : public ::java::lang::ref::PhantomReference {
         public:
          enum {
            mid_pythonDecRef_3720c61b0679eb3e,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonObjectFinalizer(jobject obj) : ::java::lang::ref::PhantomReference(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonObjectFinalizer(const PythonObjectFinalizer& obj) : ::java::lang::ref::PhantomReference(obj) {}

          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonObjectFinalizer);
        extern PyTypeObject *PY_TYPE(PythonObjectFinalizer);

        class t_PythonObjectFinalizer {
        public:
          PyObject_HEAD
          PythonObjectFinalizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonObjectFinalizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonObjectFinalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonObjectFinalizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
