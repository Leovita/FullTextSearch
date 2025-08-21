#ifndef org_apache_lucene_internal_hppc_IntObjectHashMap$IntObjectCursor_H
#define org_apache_lucene_internal_hppc_IntObjectHashMap$IntObjectCursor_H

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

          class IntObjectHashMap$IntObjectCursor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_index,
              fid_key,
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntObjectHashMap$IntObjectCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntObjectHashMap$IntObjectCursor(const IntObjectHashMap$IntObjectCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jint _get_key() const;
            void _set_key(jint) const;
            ::java::lang::Object _get_value() const;
            void _set_value(const ::java::lang::Object &) const;

            IntObjectHashMap$IntObjectCursor();

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
          extern PyType_Def PY_TYPE_DEF(IntObjectHashMap$IntObjectCursor);
          extern PyTypeObject *PY_TYPE(IntObjectHashMap$IntObjectCursor);

          class t_IntObjectHashMap$IntObjectCursor {
          public:
            PyObject_HEAD
            IntObjectHashMap$IntObjectCursor object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntObjectHashMap$IntObjectCursor *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntObjectHashMap$IntObjectCursor&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntObjectHashMap$IntObjectCursor&, PyTypeObject *);
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
