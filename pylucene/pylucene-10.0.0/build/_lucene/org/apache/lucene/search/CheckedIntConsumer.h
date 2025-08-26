#ifndef org_apache_lucene_search_CheckedIntConsumer_H
#define org_apache_lucene_search_CheckedIntConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Exception;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CheckedIntConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_accept_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckedIntConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckedIntConsumer(const CheckedIntConsumer& obj) : ::java::lang::Object(obj) {}

          void accept(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(CheckedIntConsumer);
        extern PyTypeObject *PY_TYPE(CheckedIntConsumer);

        class t_CheckedIntConsumer {
        public:
          PyObject_HEAD
          CheckedIntConsumer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CheckedIntConsumer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CheckedIntConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CheckedIntConsumer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
