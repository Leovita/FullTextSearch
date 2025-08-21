#ifndef org_apache_lucene_util_hnsw_NeighborQueue_H
#define org_apache_lucene_util_hnsw_NeighborQueue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class NeighborQueue : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2936d2706a18a684,
              mid_add_06e0b8d4c1d7906b,
              mid_clear_3720c61b0679eb3e,
              mid_incomplete_947277eca0748c4e,
              mid_insertWithOverflow_c1497fee57980602,
              mid_markIncomplete_3720c61b0679eb3e,
              mid_nodes_623cd4a044ba647a,
              mid_pop_20fbf7565993c3d7,
              mid_setVisitedCount_540b2b23d51b1efd,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_topNode_20fbf7565993c3d7,
              mid_topScore_9b6c3480dac00edf,
              mid_visitedCount_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NeighborQueue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NeighborQueue(const NeighborQueue& obj) : ::java::lang::Object(obj) {}

            NeighborQueue(jint, jboolean);

            void add(jint, jfloat) const;
            void clear() const;
            jboolean incomplete() const;
            jboolean insertWithOverflow(jint, jfloat) const;
            void markIncomplete() const;
            JArray< jint > nodes() const;
            jint pop() const;
            void setVisitedCount(jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            jint topNode() const;
            jfloat topScore() const;
            jint visitedCount() const;
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
          extern PyType_Def PY_TYPE_DEF(NeighborQueue);
          extern PyTypeObject *PY_TYPE(NeighborQueue);

          class t_NeighborQueue {
          public:
            PyObject_HEAD
            NeighborQueue object;
            static PyObject *wrap_Object(const NeighborQueue&);
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
