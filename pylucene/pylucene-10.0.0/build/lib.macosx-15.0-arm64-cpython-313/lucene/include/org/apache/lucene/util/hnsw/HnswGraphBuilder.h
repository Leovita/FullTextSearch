#ifndef org_apache_lucene_util_hnsw_HnswGraphBuilder_H
#define org_apache_lucene_util_hnsw_HnswGraphBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswBuilder;
          class OnHeapHnswGraph;
          class HnswGraphBuilder;
          class RandomVectorScorerSupplier;
        }
        class InfoStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class HnswGraphBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addGraphNode_540b2b23d51b1efd,
              mid_build_9fd6d69296ace9c0,
              mid_create_a492410c4cda9ca6,
              mid_create_396ee732edd24843,
              mid_getCompletedGraph_7f2a628e64b61b56,
              mid_getGraph_7f2a628e64b61b56,
              mid_setInfoStream_3b3e574f321bdf38,
              mid_addVectors_e13cff512ebda969,
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
