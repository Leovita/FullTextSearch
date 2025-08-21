#ifndef org_apache_lucene_internal_vectorization_Lucene99MemorySegmentByteVectorScorerSupplier_H
#define org_apache_lucene_internal_vectorization_Lucene99MemorySegmentByteVectorScorerSupplier_H

#include "java/lang/Object.h"

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
      namespace internal {
        namespace vectorization {

          class Lucene99MemorySegmentByteVectorScorerSupplier : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99MemorySegmentByteVectorScorerSupplier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99MemorySegmentByteVectorScorerSupplier(const Lucene99MemorySegmentByteVectorScorerSupplier& obj) : ::java::lang::Object(obj) {}
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
        namespace vectorization {
          extern PyType_Def PY_TYPE_DEF(Lucene99MemorySegmentByteVectorScorerSupplier);
          extern PyTypeObject *PY_TYPE(Lucene99MemorySegmentByteVectorScorerSupplier);

          class t_Lucene99MemorySegmentByteVectorScorerSupplier {
          public:
            PyObject_HEAD
            Lucene99MemorySegmentByteVectorScorerSupplier object;
            static PyObject *wrap_Object(const Lucene99MemorySegmentByteVectorScorerSupplier&);
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
