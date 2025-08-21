#ifndef org_apache_lucene_internal_hppc_IntLongHashMap$IntLongCursor_H
#define org_apache_lucene_internal_hppc_IntLongHashMap$IntLongCursor_H

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

          class IntLongHashMap$IntLongCursor : public ::java::lang::Object {
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

            explicit IntLongHashMap$IntLongCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntLongHashMap$IntLongCursor(const IntLongHashMap$IntLongCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jint _get_key() const;
            void _set_key(jint) const;
            jlong _get_value() const;
            void _set_value(jlong) const;

            IntLongHashMap$IntLongCursor();

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
          extern PyType_Def PY_TYPE_DEF(IntLongHashMap$IntLongCursor);
          extern PyTypeObject *PY_TYPE(IntLongHashMap$IntLongCursor);

          class t_IntLongHashMap$IntLongCursor {
          public:
            PyObject_HEAD
            IntLongHashMap$IntLongCursor object;
            static PyObject *wrap_Object(const IntLongHashMap$IntLongCursor&);
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
