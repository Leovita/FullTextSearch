#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91OnHeapHnswGraph_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraph$NodesIterator;
        }
      }
      namespace backward_codecs {
        namespace lucene91 {
          class Lucene91NeighborArray;
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
      namespace backward_codecs {
        namespace lucene91 {

          class Lucene91OnHeapHnswGraph : public ::org::apache::lucene::util::hnsw::HnswGraph {
           public:
            enum {
              mid_addNode_645c25455f5b9b1c,
              mid_entryNode_bd89ce15dad49192,
              mid_getNeighbors_bc9ae2bedfdab956,
              mid_getNodesOnLevel_767b56846d01a898,
              mid_nextNeighbor_bd89ce15dad49192,
              mid_numLevels_bd89ce15dad49192,
              mid_seek_645c25455f5b9b1c,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91OnHeapHnswGraph(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91OnHeapHnswGraph(const Lucene91OnHeapHnswGraph& obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {}

            void addNode(jint, jint) const;
            jint entryNode() const;
            ::org::apache::lucene::backward_codecs::lucene91::Lucene91NeighborArray getNeighbors(jint, jint) const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint nextNeighbor() const;
            jint numLevels() const;
            void seek(jint, jint) const;
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
      namespace backward_codecs {
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91OnHeapHnswGraph);
          extern PyTypeObject *PY_TYPE(Lucene91OnHeapHnswGraph);

          class t_Lucene91OnHeapHnswGraph {
          public:
            PyObject_HEAD
            Lucene91OnHeapHnswGraph object;
            static PyObject *wrap_Object(const Lucene91OnHeapHnswGraph&);
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
