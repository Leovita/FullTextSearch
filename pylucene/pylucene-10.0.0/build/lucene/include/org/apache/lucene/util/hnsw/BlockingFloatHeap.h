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
              mid_init$_8226bd0b0fc13dba,
              mid_offer_760c23641efab431,
              mid_offer_f91cd2115bbc249e,
              mid_peek_8b62236f0e4d0dbc,
              mid_poll_8b62236f0e4d0dbc,
              mid_size_bd89ce15dad49192,
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
