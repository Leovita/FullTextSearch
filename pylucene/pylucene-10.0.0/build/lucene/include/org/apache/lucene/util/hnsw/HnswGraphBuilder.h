#ifndef org_apache_lucene_util_hnsw_HnswGraphBuilder_H
#define org_apache_lucene_util_hnsw_HnswGraphBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswGraphBuilder;
          class OnHeapHnswGraph;
          class HnswBuilder;
          class RandomVectorScorerSupplier;
        }
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class HnswGraphBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addGraphNode_8226bd0b0fc13dba,
              mid_build_890c1737c7309e31,
              mid_create_c2c83cdf311aaa5e,
              mid_create_3d6266191837d513,
              mid_getCompletedGraph_c6522999a4810969,
              mid_getGraph_c6522999a4810969,
              mid_setInfoStream_f10e797612112ab1,
              mid_addVectors_645c25455f5b9b1c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphBuilder(const HnswGraphBuilder& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_BEAM_WIDTH;
            static jint DEFAULT_MAX_CONN;
            static ::java::lang::String *HNSW_COMPONENT;
            static jlong randSeed;

            void addGraphNode(jint) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph build(jint) const;
            static HnswGraphBuilder create(const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, jlong);
            static HnswGraphBuilder create(const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, jlong, jint);
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph getCompletedGraph() const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph getGraph() const;
            void setInfoStream(const ::org::apache::lucene::util::InfoStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswGraphBuilder);
          extern PyTypeObject *PY_TYPE(HnswGraphBuilder);

          class t_HnswGraphBuilder {
          public:
            PyObject_HEAD
            HnswGraphBuilder object;
            static PyObject *wrap_Object(const HnswGraphBuilder&);
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
