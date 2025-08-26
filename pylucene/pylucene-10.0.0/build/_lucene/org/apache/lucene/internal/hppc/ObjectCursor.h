#ifndef org_apache_lucene_internal_hppc_ObjectCursor_H
#define org_apache_lucene_internal_hppc_ObjectCursor_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class ObjectCursor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_index,
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ObjectCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ObjectCursor(const ObjectCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            ::java::lang::Object _get_value() const;
            void _set_value(const ::java::lang::Object &) const;

            ObjectCursor();

            ::java::lang::String toString() const;
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
      namespace internal {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(ObjectCursor);
          extern PyTypeObject *PY_TYPE(ObjectCursor);

          class t_ObjectCursor {
          public:
            PyObject_HEAD
            ObjectCursor object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ObjectCursor *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ObjectCursor&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ObjectCursor&, PyTypeObject *);
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
