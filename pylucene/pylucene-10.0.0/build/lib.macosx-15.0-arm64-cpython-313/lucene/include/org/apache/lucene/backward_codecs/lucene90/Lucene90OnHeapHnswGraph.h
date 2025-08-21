#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90OnHeapHnswGraph_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class SplittableRandom;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorSimilarityFunction;
        class FloatVectorValues;
      }
      namespace util {
        class Bits;
        namespace hnsw {
          class HnswGraph$NodesIterator;
          class NeighborQueue;
        }
      }
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90NeighborArray;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90OnHeapHnswGraph : public ::org::apache::lucene::util::hnsw::HnswGraph {
           public:
            enum {
              mid_entryNode_20fbf7565993c3d7,
              mid_getNeighbors_ddd662ec0a9a3c31,
              mid_getNodesOnLevel_0f4b826da8e38ef5,
              mid_nextNeighbor_20fbf7565993c3d7,
              mid_numLevels_20fbf7565993c3d7,
              mid_search_dd930b54554106c4,
              mid_seek_e13cff512ebda969,
              mid_size_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90OnHeapHnswGraph(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90OnHeapHnswGraph(const Lucene90OnHeapHnswGraph& obj) : ::org::apache::lucene::util::hnsw::HnswGraph(obj) {}

            jint entryNode() const;
            ::org::apache::lucene::backward_codecs::lucene90::Lucene90NeighborArray getNeighbors(jint) const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint nextNeighbor() const;
            jint numLevels() const;
            static ::org::apache::lucene::util::hnsw::NeighborQueue search(const JArray< jfloat > &, jint, jint, const ::org::apache::lucene::index::FloatVectorValues &, const ::org::apache::lucene::index::VectorSimilarityFunction &, const ::org::apache::lucene::util::hnsw::HnswGraph &, const ::org::apache::lucene::util::Bits &, jlong, const ::java::util::SplittableRandom &);
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90OnHeapHnswGraph);
          extern PyTypeObject *PY_TYPE(Lucene90OnHeapHnswGraph);

          class t_Lucene90OnHeapHnswGraph {
          public:
            PyObject_HEAD
            Lucene90OnHeapHnswGraph object;
            static PyObject *wrap_Object(const Lucene90OnHeapHnswGraph&);
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
