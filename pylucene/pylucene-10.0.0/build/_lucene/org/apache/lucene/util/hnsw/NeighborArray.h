#ifndef org_apache_lucene_util_hnsw_NeighborArray_H
#define org_apache_lucene_util_hnsw_NeighborArray_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
              mid_init$_2936d2706a18a684,
              mid_addAndEnsureDiversity_aeeff243a8e3815e,
              mid_addInOrder_06e0b8d4c1d7906b,
              mid_addOutOfOrder_06e0b8d4c1d7906b,
              mid_clear_3720c61b0679eb3e,
              mid_nodes_623cd4a044ba647a,
              mid_scores_808165844ea67079,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
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
