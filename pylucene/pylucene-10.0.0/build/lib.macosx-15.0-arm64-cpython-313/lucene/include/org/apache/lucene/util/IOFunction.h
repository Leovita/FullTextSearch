#ifndef org_apache_lucene_util_IOFunction_H
#define org_apache_lucene_util_IOFunction_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOFunction : public ::java::lang::Object {
         public:
          enum {
            mid_apply_5fd81664d2d475e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOFunction(const IOFunction& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object apply(const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IOFunction);
        extern PyTypeObject *PY_TYPE(IOFunction);

        class t_IOFunction {
        public:
          PyObject_HEAD
          IOFunction object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_IOFunction *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const IOFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const IOFunction&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
