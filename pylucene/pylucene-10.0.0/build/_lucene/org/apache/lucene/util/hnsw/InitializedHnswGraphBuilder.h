#ifndef org_apache_lucene_util_hnsw_InitializedHnswGraphBuilder_H
#define org_apache_lucene_util_hnsw_InitializedHnswGraphBuilder_H

#include "org/apache/lucene/util/hnsw/HnswGraphBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class OnHeapHnswGraph;
          class HnswGraph;
          class InitializedHnswGraphBuilder;
          class RandomVectorScorerSupplier;
        }
        class BitSet;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {

          class InitializedHnswGraphBuilder : public ::org::apache::lucene::util::hnsw::HnswGraphBuilder {
           public:
            enum {
              mid_init$_c46a229a813805ac,
              mid_addGraphNode_540b2b23d51b1efd,
              mid_fromGraph_b7207c3a907fa958,
              mid_initGraph_95e82c5e5a1c7503,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InitializedHnswGraphBuilder(jobject obj) : ::org::apache::lucene::util::hnsw::HnswGraphBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InitializedHnswGraphBuilder(const InitializedHnswGraphBuilder& obj) : ::org::apache::lucene::util::hnsw::HnswGraphBuilder(obj) {}

            InitializedHnswGraphBuilder(const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, jlong, const ::org::apache::lucene::util::hnsw::OnHeapHnswGraph &, const ::org::apache::lucene::util::BitSet &);

            void addGraphNode(jint) const;
            static InitializedHnswGraphBuilder fromGraph(const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, jlong, const ::org::apache::lucene::util::hnsw::HnswGraph &, const JArray< jint > &, const ::org::apache::lucene::util::BitSet &, jint);
            static ::org::apache::lucene::util::hnsw::OnHeapHnswGraph initGraph(jint, const ::org::apache::lucene::util::hnsw::HnswGraph &, const JArray< jint > &, jint);
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
          extern PyType_Def PY_TYPE_DEF(InitializedHnswGraphBuilder);
          extern PyTypeObject *PY_TYPE(InitializedHnswGraphBuilder);

          class t_InitializedHnswGraphBuilder {
          public:
            PyObject_HEAD
            InitializedHnswGraphBuilder object;
            static PyObject *wrap_Object(const InitializedHnswGraphBuilder&);
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
