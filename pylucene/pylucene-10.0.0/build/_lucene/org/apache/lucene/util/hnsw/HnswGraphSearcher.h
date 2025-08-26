#ifndef org_apache_lucene_util_hnsw_HnswGraphSearcher_H
#define org_apache_lucene_util_hnsw_HnswGraphSearcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
        class Bits;
        namespace hnsw {
          class OnHeapHnswGraph;
          class RandomVectorScorer;
          class NeighborQueue;
          class HnswGraphBuilder$GraphBuilderKnnCollector;
          class HnswGraph;
        }
      }
      namespace search {
        class KnnCollector;
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

          class HnswGraphSearcher : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f020b326a37c9a45,
              mid_search_dfbd4ff3304f265b,
              mid_search_23c9dcab711ab0b1,
              mid_searchLevel_b02a3fae423b38f3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphSearcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphSearcher(const HnswGraphSearcher& obj) : ::java::lang::Object(obj) {}

            HnswGraphSearcher(const ::org::apache::lucene::util::hnsw::NeighborQueue &, const ::org::apache::lucene::util::BitSet &);

            static void search(const ::org::apache::lucene::util::hnsw::RandomVectorScorer &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::hnsw::HnswGraph &, const ::org::apache::lucene::util::Bits &);
            static ::org::apache::lucene::search::KnnCollector search(const ::org::apache::lucene::util::hnsw::RandomVectorScorer &, jint, const ::org::apache::lucene::util::hnsw::OnHeapHnswGraph &, const ::org::apache::lucene::util::Bits &, jint);
            ::org::apache::lucene::util::hnsw::HnswGraphBuilder$GraphBuilderKnnCollector searchLevel(const ::org::apache::lucene::util::hnsw::RandomVectorScorer &, jint, jint, const JArray< jint > &, const ::org::apache::lucene::util::hnsw::HnswGraph &) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswGraphSearcher);
          extern PyTypeObject *PY_TYPE(HnswGraphSearcher);

          class t_HnswGraphSearcher {
          public:
            PyObject_HEAD
            HnswGraphSearcher object;
            static PyObject *wrap_Object(const HnswGraphSearcher&);
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
