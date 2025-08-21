#ifndef org_apache_lucene_util_hnsw_HnswConcurrentMergeBuilder_H
#define org_apache_lucene_util_hnsw_HnswConcurrentMergeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class HnswBuilder;
          class OnHeapHnswGraph;
          class RandomVectorScorerSupplier;
        }
        class InfoStream;
        class BitSet;
      }
      namespace search {
        class TaskExecutor;
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

          class HnswConcurrentMergeBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a71c8f5033a95c05,
              mid_addGraphNode_540b2b23d51b1efd,
              mid_build_9fd6d69296ace9c0,
              mid_getCompletedGraph_7f2a628e64b61b56,
              mid_getGraph_7f2a628e64b61b56,
              mid_setInfoStream_3b3e574f321bdf38,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswConcurrentMergeBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswConcurrentMergeBuilder(const HnswConcurrentMergeBuilder& obj) : ::java::lang::Object(obj) {}

            HnswConcurrentMergeBuilder(const ::org::apache::lucene::search::TaskExecutor &, jint, const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, const ::org::apache::lucene::util::hnsw::OnHeapHnswGraph &, const ::org::apache::lucene::util::BitSet &);

            void addGraphNode(jint) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph build(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswConcurrentMergeBuilder);
          extern PyTypeObject *PY_TYPE(HnswConcurrentMergeBuilder);

          class t_HnswConcurrentMergeBuilder {
          public:
            PyObject_HEAD
            HnswConcurrentMergeBuilder object;
            static PyObject *wrap_Object(const HnswConcurrentMergeBuilder&);
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
