#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90OnHeapHnswGraph_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90OnHeapHnswGraph_H

#include "org/apache/lucene/util/hnsw/HnswGraph.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        namespace hnsw {
          class NeighborQueue;
          class HnswGraph$NodesIterator;
        }
      }
      namespace index {
        class FloatVectorValues;
        class VectorSimilarityFunction;
      }
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90NeighborArray;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class SplittableRandom;
  }
  namespace io {
    class IOException;
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
              mid_entryNode_bd89ce15dad49192,
              mid_getNeighbors_ca68b0533505abe5,
              mid_getNodesOnLevel_767b56846d01a898,
              mid_nextNeighbor_bd89ce15dad49192,
              mid_numLevels_bd89ce15dad49192,
              mid_search_287bf047e0d46a55,
              mid_seek_645c25455f5b9b1c,
              mid_size_bd89ce15dad49192,
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
