#ifndef org_apache_lucene_internal_hppc_CharObjectHashMap$CharObjectCursor_H
#define org_apache_lucene_internal_hppc_CharObjectHashMap$CharObjectCursor_H

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

          class CharObjectHashMap$CharObjectCursor : public ::java::lang::Object {
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

            explicit CharObjectHashMap$CharObjectCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharObjectHashMap$CharObjectCursor(const CharObjectHashMap$CharObjectCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jchar _get_key() const;
            void _set_key(jchar) const;
            ::java::lang::Object _get_value() const;
            void _set_value(const ::java::lang::Object &) const;

            CharObjectHashMap$CharObjectCursor();

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
          extern PyType_Def PY_TYPE_DEF(CharObjectHashMap$CharObjectCursor);
          extern PyTypeObject *PY_TYPE(CharObjectHashMap$CharObjectCursor);

          class t_CharObjectHashMap$CharObjectCursor {
          public:
            PyObject_HEAD
            CharObjectHashMap$CharObjectCursor object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharObjectHashMap$CharObjectCursor *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharObjectHashMap$CharObjectCursor&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharObjectHashMap$CharObjectCursor&, PyTypeObject *);
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
