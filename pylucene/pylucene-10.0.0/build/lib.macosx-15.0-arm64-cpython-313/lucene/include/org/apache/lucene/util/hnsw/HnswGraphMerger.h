#ifndef org_apache_lucene_util_hnsw_HnswGraphMerger_H
#define org_apache_lucene_util_hnsw_HnswGraphMerger_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class OnHeapHnswGraph;
          class HnswGraphMerger;
        }
        class InfoStream;
        class Bits;
      }
      namespace codecs {
        class KnnVectorsReader;
      }
      namespace index {
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

          class HnswGraphMerger : public ::java::lang::Object {
           public:
            enum {
              mid_addReader_5a19966d62e41821,
              mid_merge_dbc21f636ebb70b4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswGraphMerger(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswGraphMerger(const HnswGraphMerger& obj) : ::java::lang::Object(obj) {}

            HnswGraphMerger addReader(const ::org::apache::lucene::codecs::KnnVectorsReader &, const ::org::apache::lucene::index::MergeState$DocMap &, const ::org::apache::lucene::util::Bits &) const;
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
          extern PyType_Def PY_TYPE_DEF(HnswGraphMerger);
          extern PyTypeObject *PY_TYPE(HnswGraphMerger);

          class t_HnswGraphMerger {
          public:
            PyObject_HEAD
            HnswGraphMerger object;
            static PyObject *wrap_Object(const HnswGraphMerger&);
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
