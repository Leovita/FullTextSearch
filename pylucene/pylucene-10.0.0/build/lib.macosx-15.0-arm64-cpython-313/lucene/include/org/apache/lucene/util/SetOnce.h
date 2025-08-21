#ifndef org_apache_lucene_util_SetOnce_H
#define org_apache_lucene_util_SetOnce_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SetOnce : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_eb61ef4d1db15d08,
            mid_get_5655ed8670534604,
            mid_set_eb61ef4d1db15d08,
            mid_trySet_570b5248a6da3ef6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SetOnce(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SetOnce(const SetOnce& obj) : ::java::lang::Object(obj) {}

          SetOnce();
          SetOnce(const ::java::lang::Object &);

          ::java::lang::Object get() const;
          void set(const ::java::lang::Object &) const;
          jboolean trySet(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(SetOnce);
        extern PyTypeObject *PY_TYPE(SetOnce);

        class t_SetOnce {
        public:
          PyObject_HEAD
          SetOnce object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SetOnce *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SetOnce&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SetOnce&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
