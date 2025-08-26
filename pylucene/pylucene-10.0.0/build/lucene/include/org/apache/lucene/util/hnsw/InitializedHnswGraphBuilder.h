#ifndef org_apache_lucene_util_hnsw_InitializedHnswGraphBuilder_H
#define org_apache_lucene_util_hnsw_InitializedHnswGraphBuilder_H

#include "org/apache/lucene/util/hnsw/HnswGraphBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
        namespace hnsw {
          class OnHeapHnswGraph;
          class RandomVectorScorerSupplier;
          class HnswGraph;
          class InitializedHnswGraphBuilder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

          class InitializedHnswGraphBuilder : public ::org::apache::lucene::util::hnsw::HnswGraphBuilder {
           public:
            enum {
              mid_init$_49ba60e531ae095d,
              mid_addGraphNode_8226bd0b0fc13dba,
              mid_fromGraph_1012d2673f3d16a9,
              mid_initGraph_2bfd0770fb2e2ae4,
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
