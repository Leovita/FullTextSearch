#ifndef org_apache_lucene_util_hnsw_IncrementalHnswGraphMerger_H
#define org_apache_lucene_util_hnsw_IncrementalHnswGraphMerger_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class OnHeapHnswGraph;
          class IncrementalHnswGraphMerger;
          class RandomVectorScorerSupplier;
          class HnswGraphMerger;
        }
        class InfoStream;
        class Bits;
      }
      namespace codecs {
        class KnnVectorsReader;
      }
      namespace index {
        class FieldInfo;
        class KnnVectorValues;
        class MergeState$DocMap;
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

          class IncrementalHnswGraphMerger : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ba2b898fefeb37d1,
              mid_addReader_16b63f3e080f5a21,
              mid_merge_dbc21f636ebb70b4,
              mid_getNewOrdMapping_a0f3c6f7d50a854b,
              mid_createBuilder_b4645ff1a19dbd6f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IncrementalHnswGraphMerger(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IncrementalHnswGraphMerger(const IncrementalHnswGraphMerger& obj) : ::java::lang::Object(obj) {}

            IncrementalHnswGraphMerger(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint);

            IncrementalHnswGraphMerger addReader(const ::org::apache::lucene::codecs::KnnVectorsReader &, const ::org::apache::lucene::index::MergeState$DocMap &, const ::org::apache::lucene::util::Bits &) const;
            ::org::apache::lucene::util::hnsw::OnHeapHnswGraph merge(const ::org::apache::lucene::index::KnnVectorValues &, const ::org::apache::lucene::util::InfoStream &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(IncrementalHnswGraphMerger);
          extern PyTypeObject *PY_TYPE(IncrementalHnswGraphMerger);

          class t_IncrementalHnswGraphMerger {
          public:
            PyObject_HEAD
            IncrementalHnswGraphMerger object;
            static PyObject *wrap_Object(const IncrementalHnswGraphMerger&);
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
