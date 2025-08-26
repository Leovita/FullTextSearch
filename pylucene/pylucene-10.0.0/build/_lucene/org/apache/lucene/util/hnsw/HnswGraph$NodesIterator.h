#ifndef org_apache_lucene_util_hnsw_HnswGraph$NodesIterator_H
#define org_apache_lucene_util_hnsw_HnswGraph$NodesIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraph$NodesIterator;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class PrimitiveIterator$OfInt;
  }
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

          class HnswGraph$NodesIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8226bd0b0fc13dba,
              mid_consume_ce3442f6684197de,
              mid_getSortedNodes_37e485686b918f2e,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraph$NodesIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraph$NodesIterator(const HnswGraph$NodesIterator& obj) : ::java::lang::Object(obj) {}

            HnswGraph$NodesIterator(jint);

            jint consume(const JArray< jint > &) const;
            static JArray< jint > getSortedNodes(const HnswGraph$NodesIterator &);
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
          extern PyType_Def PY_TYPE_DEF(HnswGraph$NodesIterator);
          extern PyTypeObject *PY_TYPE(HnswGraph$NodesIterator);

          class t_HnswGraph$NodesIterator {
          public:
            PyObject_HEAD
            HnswGraph$NodesIterator object;
            static PyObject *wrap_Object(const HnswGraph$NodesIterator&);
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
