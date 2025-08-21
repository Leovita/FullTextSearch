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
              mid_init$_540b2b23d51b1efd,
              mid_clear_3720c61b0679eb3e,
              mid_getHeap_808165844ea67079,
              mid_offer_ed8290af1db6b7df,
              mid_peek_9b6c3480dac00edf,
              mid_poll_9b6c3480dac00edf,
              mid_size_20fbf7565993c3d7,
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
