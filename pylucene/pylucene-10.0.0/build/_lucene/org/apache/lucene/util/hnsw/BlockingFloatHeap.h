#ifndef org_apache_lucene_util_hnsw_BlockingFloatHeap_H
#define org_apache_lucene_util_hnsw_BlockingFloatHeap_H

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

          class BlockingFloatHeap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_540b2b23d51b1efd,
              mid_offer_8fa359a2bc20a127,
              mid_offer_c503d06cdea3e910,
              mid_peek_9b6c3480dac00edf,
              mid_poll_9b6c3480dac00edf,
              mid_size_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockingFloatHeap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockingFloatHeap(const BlockingFloatHeap& obj) : ::java::lang::Object(obj) {}

            BlockingFloatHeap(jint);

            jfloat offer(jfloat) const;
            jfloat offer(const JArray< jfloat > &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockingFloatHeap);
          extern PyTypeObject *PY_TYPE(BlockingFloatHeap);

          class t_BlockingFloatHeap {
          public:
            PyObject_HEAD
            BlockingFloatHeap object;
            static PyObject *wrap_Object(const BlockingFloatHeap&);
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
