#ifndef org_apache_lucene_internal_hppc_LongObjectHashMap$LongObjectCursor_H
#define org_apache_lucene_internal_hppc_LongObjectHashMap$LongObjectCursor_H

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

          class LongObjectHashMap$LongObjectCursor : public ::java::lang::Object {
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

            explicit LongObjectHashMap$LongObjectCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongObjectHashMap$LongObjectCursor(const LongObjectHashMap$LongObjectCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jlong _get_key() const;
            void _set_key(jlong) const;
            ::java::lang::Object _get_value() const;
            void _set_value(const ::java::lang::Object &) const;

            LongObjectHashMap$LongObjectCursor();

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
          extern PyType_Def PY_TYPE_DEF(LongObjectHashMap$LongObjectCursor);
          extern PyTypeObject *PY_TYPE(LongObjectHashMap$LongObjectCursor);

          class t_LongObjectHashMap$LongObjectCursor {
          public:
            PyObject_HEAD
            LongObjectHashMap$LongObjectCursor object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_LongObjectHashMap$LongObjectCursor *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const LongObjectHashMap$LongObjectCursor&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const LongObjectHashMap$LongObjectCursor&, PyTypeObject *);
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
