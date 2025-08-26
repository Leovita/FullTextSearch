#ifndef org_apache_lucene_internal_hppc_LongFloatHashMap$LongFloatCursor_H
#define org_apache_lucene_internal_hppc_LongFloatHashMap$LongFloatCursor_H

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

          class LongFloatHashMap$LongFloatCursor : public ::java::lang::Object {
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

            explicit LongFloatHashMap$LongFloatCursor(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongFloatHashMap$LongFloatCursor(const LongFloatHashMap$LongFloatCursor& obj) : ::java::lang::Object(obj) {}

            jint _get_index() const;
            void _set_index(jint) const;
            jlong _get_key() const;
            void _set_key(jlong) const;
            jfloat _get_value() const;
            void _set_value(jfloat) const;

            LongFloatHashMap$LongFloatCursor();

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
          extern PyType_Def PY_TYPE_DEF(LongFloatHashMap$LongFloatCursor);
          extern PyTypeObject *PY_TYPE(LongFloatHashMap$LongFloatCursor);

          class t_LongFloatHashMap$LongFloatCursor {
          public:
            PyObject_HEAD
            LongFloatHashMap$LongFloatCursor object;
            static PyObject *wrap_Object(const LongFloatHashMap$LongFloatCursor&);
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
