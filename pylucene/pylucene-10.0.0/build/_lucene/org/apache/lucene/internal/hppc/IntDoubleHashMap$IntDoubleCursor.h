#ifndef org_apache_lucene_internal_hppc_IntDoubleHashMap$IntDoubleCursor_H
#define org_apache_lucene_internal_hppc_IntDoubleHashMap$IntDoubleCursor_H

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

          class IntDoubleHashMap$IntDoubleCursor : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_toString_e7df854526d67fa3,
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

            explicit IntDoubleHashMap$IntDoubleCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntDoubleHashMap$IntDoubleCursor(const IntDoubleHashMap$IntDoubleCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jint _get_key() const;
            void _set_key(jint) const;
            jdouble _get_value() const;
            void _set_value(jdouble) const;

            IntDoubleHashMap$IntDoubleCursor();

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
          extern PyType_Def PY_TYPE_DEF(IntDoubleHashMap$IntDoubleCursor);
          extern PyTypeObject *PY_TYPE(IntDoubleHashMap$IntDoubleCursor);

          class t_IntDoubleHashMap$IntDoubleCursor {
          public:
            PyObject_HEAD
            IntDoubleHashMap$IntDoubleCursor object;
            static PyObject *wrap_Object(const IntDoubleHashMap$IntDoubleCursor&);
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
