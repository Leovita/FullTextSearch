#ifndef org_apache_lucene_util_hnsw_HnswGraph_H
#define org_apache_lucene_util_hnsw_HnswGraph_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraph$NodesIterator;
          class HnswGraph;
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

          class HnswGraph : public ::java::lang::Object {
           public:
            enum {
              mid_entryNode_bd89ce15dad49192,
              mid_getNodesOnLevel_767b56846d01a898,
              mid_maxNodeId_bd89ce15dad49192,
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

            explicit HnswGraph(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraph(const HnswGraph& obj) : ::java::lang::Object(obj) {}

            static HnswGraph *EMPTY;

            jint entryNode() const;
            ::org::apache::lucene::util::hnsw::HnswGraph$NodesIterator getNodesOnLevel(jint) const;
            jint maxNodeId() const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(HnswGraph);
          extern PyTypeObject *PY_TYPE(HnswGraph);

          class t_HnswGraph {
          public:
            PyObject_HEAD
            HnswGraph object;
            static PyObject *wrap_Object(const HnswGraph&);
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
