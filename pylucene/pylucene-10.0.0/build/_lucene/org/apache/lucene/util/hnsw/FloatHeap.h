#ifndef org_apache_lucene_util_hnsw_FloatHeap_H
#define org_apache_lucene_util_hnsw_FloatHeap_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class FloatHeap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_clear_e7bdbe105ce1bafb,
              mid_getHeap_67d89dc3894661ff,
              mid_offer_bf47f881a09da8d2,
              mid_peek_8b62236f0e4d0dbc,
              mid_poll_8b62236f0e4d0dbc,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FloatHeap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FloatHeap(const FloatHeap& obj) : ::java::lang::Object(obj) {}

            FloatHeap(jint);

            void clear() const;
            JArray< jfloat > getHeap() const;
            jboolean offer(jfloat) const;
            jfloat peek() const;
            jfloat poll() const;
            jint size() const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(FloatHeap);
          extern PyTypeObject *PY_TYPE(FloatHeap);

          class t_FloatHeap {
          public:
            PyObject_HEAD
            FloatHeap object;
            static PyObject *wrap_Object(const FloatHeap&);
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
