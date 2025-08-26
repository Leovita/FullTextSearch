#ifndef org_apache_lucene_util_hnsw_CloseableRandomVectorScorerSupplier_H
#define org_apache_lucene_util_hnsw_CloseableRandomVectorScorerSupplier_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomVectorScorerSupplier;
        }
      }
    }
  }
}
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

          class CloseableRandomVectorScorerSupplier : public ::java::io::Closeable {
           public:
            enum {
              mid_totalVectorCount_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CloseableRandomVectorScorerSupplier(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CloseableRandomVectorScorerSupplier(const CloseableRandomVectorScorerSupplier& obj) : ::java::io::Closeable(obj) {}

            jint totalVectorCount() const;
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
          extern PyType_Def PY_TYPE_DEF(CloseableRandomVectorScorerSupplier);
          extern PyTypeObject *PY_TYPE(CloseableRandomVectorScorerSupplier);

          class t_CloseableRandomVectorScorerSupplier {
          public:
            PyObject_HEAD
            CloseableRandomVectorScorerSupplier object;
            static PyObject *wrap_Object(const CloseableRandomVectorScorerSupplier&);
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
