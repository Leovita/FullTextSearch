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
              mid_init$_a0fed0a2cd38e7b1,
              mid_add_a18b0cdf76a9509e,
              mid_clear_e7bdbe105ce1bafb,
              mid_incomplete_9aa4f33e82ea333f,
              mid_insertWithOverflow_0ebe0f1167a31953,
              mid_markIncomplete_e7bdbe105ce1bafb,
              mid_nodes_4b72a28a860ae838,
              mid_pop_bd89ce15dad49192,
              mid_setVisitedCount_8226bd0b0fc13dba,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_topNode_bd89ce15dad49192,
              mid_topScore_8b62236f0e4d0dbc,
              mid_visitedCount_bd89ce15dad49192,
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
