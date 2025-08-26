#ifndef org_apache_lucene_util_hnsw_OnHeapHnswGraph_H
#define org_apache_lucene_util_hnsw_OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace hnsw {
          class NeighborArray;
          class HnswGraph$NodesIterator;
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

          class OnHeapHnswGraph : public ::org::apache::lucene::util::hnsw::HnswGraph {
           public:
            enum {
              mid_addNode_645c25455f5b9b1c,
              mid_entryNode_bd89ce15dad49192,
              mid_getNeighbors_2b70ee545095d66c,
              mid_getNodesOnLevel_767b56846d01a898,
              mid_maxNodeId_bd89ce15dad49192,
              mid_nextNeighbor_bd89ce15dad49192,
              mid_numLevels_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_seek_645c25455f5b9b1c,
              mid_size_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_tryPromoteNewEntryNode_964913aa98f38ea1,
              mid_trySetNewEntryNode_5dd9e64338fe1611,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnHeapHnswGraph(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnHeapHnswGraph(const OnHeapHnswGraph& obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {}

            void addNode(jint, jint) const;
            jint entryNode() const;
            ::org::apache::lucene::util::hnsw::NeighborArray getNeighbors(jint, jint) const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint maxNodeId() const;
            jint nextNeighbor() const;
            jint numLevels() const;
            jlong ramBytesUsed() const;
            void seek(jint, jint) const;
            jint size() const;
            ::java::lang::String toString() const;
            jboolean tryPromoteNewEntryNode(jint, jint, jint) const;
            jboolean trySetNewEntryNode(jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(OnHeapHnswGraph);
          extern PyTypeObject *PY_TYPE(OnHeapHnswGraph);

          class t_OnHeapHnswGraph {
          public:
            PyObject_HEAD
            OnHeapHnswGraph object;
            static PyObject *wrap_Object(const OnHeapHnswGraph&);
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
