#ifndef org_apache_lucene_util_hnsw_OnHeapHnswGraph_H
#define org_apache_lucene_util_hnsw_OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
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
              mid_addNode_e13cff512ebda969,
              mid_entryNode_20fbf7565993c3d7,
              mid_getNeighbors_8a4290b2a3b8f486,
              mid_getNodesOnLevel_0f4b826da8e38ef5,
              mid_maxNodeId_20fbf7565993c3d7,
              mid_nextNeighbor_20fbf7565993c3d7,
              mid_numLevels_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_seek_e13cff512ebda969,
              mid_size_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_tryPromoteNewEntryNode_fb87b32bf7e41aa6,
              mid_trySetNewEntryNode_3f91d6e63b0427e9,
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
