#ifndef org_apache_lucene_internal_hppc_LongIntHashMap$LongIntCursor_H
#define org_apache_lucene_internal_hppc_LongIntHashMap$LongIntCursor_H

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

          class LongIntHashMap$LongIntCursor : public ::java::lang::Object {
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

            explicit LongIntHashMap$LongIntCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongIntHashMap$LongIntCursor(const LongIntHashMap$LongIntCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jlong _get_key() const;
            void _set_key(jlong) const;
            jint _get_value() const;
            void _set_value(jint) const;

            LongIntHashMap$LongIntCursor();

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
          extern PyType_Def PY_TYPE_DEF(LongIntHashMap$LongIntCursor);
          extern PyTypeObject *PY_TYPE(LongIntHashMap$LongIntCursor);

          class t_LongIntHashMap$LongIntCursor {
          public:
            PyObject_HEAD
            LongIntHashMap$LongIntCursor object;
            static PyObject *wrap_Object(const LongIntHashMap$LongIntCursor&);
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
