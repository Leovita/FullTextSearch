#ifndef org_apache_lucene_util_hnsw_IncrementalHnswGraphMerger_H
#define org_apache_lucene_util_hnsw_IncrementalHnswGraphMerger_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        namespace hnsw {
          class IncrementalHnswGraphMerger;
          class OnHeapHnswGraph;
          class HnswGraphMerger;
          class RandomVectorScorerSupplier;
        }
        class InfoStream;
      }
      namespace index {
        class MergeState$DocMap;
        class FieldInfo;
        class KnnVectorValues;
      }
      namespace codecs {
        class KnnVectorsReader;
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

          class IncrementalHnswGraphMerger : public ::java::lang::Object {
           public:
            enum {
              mid_init$_461c72541a01271d,
              mid_addReader_be272604bb86c873,
              mid_merge_d2f6a310bdcdcefd,
              mid_getNewOrdMapping_1b227365ad370c65,
              mid_createBuilder_c1dcc3edd0f9d63b,
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
