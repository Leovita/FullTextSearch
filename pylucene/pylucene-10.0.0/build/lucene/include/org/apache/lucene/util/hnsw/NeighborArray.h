#ifndef org_apache_lucene_util_hnsw_NeighborArray_H
#define org_apache_lucene_util_hnsw_NeighborArray_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class NeighborArray : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a0fed0a2cd38e7b1,
              mid_addAndEnsureDiversity_7a8146e28f6eea21,
              mid_addInOrder_a18b0cdf76a9509e,
              mid_addOutOfOrder_a18b0cdf76a9509e,
              mid_clear_e7bdbe105ce1bafb,
              mid_nodes_4b72a28a860ae838,
              mid_scores_67d89dc3894661ff,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NeighborArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NeighborArray(const NeighborArray& obj) : ::java::lang::Object(obj) {}

            NeighborArray(jint, jboolean);

            void addAndEnsureDiversity(jint, jfloat, jint, const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &) const;
            void addInOrder(jint, jfloat) const;
            void addOutOfOrder(jint, jfloat) const;
            void clear() const;
            JArray< jint > nodes() const;
            JArray< jfloat > scores() const;
            jint size() const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(NeighborArray);
          extern PyTypeObject *PY_TYPE(NeighborArray);

          class t_NeighborArray {
          public:
            PyObject_HEAD
            NeighborArray object;
            static PyObject *wrap_Object(const NeighborArray&);
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
