#ifndef org_apache_lucene_util_hnsw_RandomVectorScorerSupplier_H
#define org_apache_lucene_util_hnsw_RandomVectorScorerSupplier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomVectorScorer;
          class RandomVectorScorerSupplier;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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

          class RandomVectorScorerSupplier : public ::java::lang::Object {
           public:
            enum {
              mid_copy_32926ad3d3b913f9,
              mid_scorer_f5561f974c4aad06,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RandomVectorScorerSupplier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RandomVectorScorerSupplier(const RandomVectorScorerSupplier& obj) : ::java::lang::Object(obj) {}

            RandomVectorScorerSupplier copy() const;
            ::org::apache::lucene::util::hnsw::RandomVectorScorer scorer(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(RandomVectorScorerSupplier);
          extern PyTypeObject *PY_TYPE(RandomVectorScorerSupplier);

          class t_RandomVectorScorerSupplier {
          public:
            PyObject_HEAD
            RandomVectorScorerSupplier object;
            static PyObject *wrap_Object(const RandomVectorScorerSupplier&);
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
