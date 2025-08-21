#ifndef org_apache_lucene_util_hnsw_ConcurrentHnswMerger_H
#define org_apache_lucene_util_hnsw_ConcurrentHnswMerger_H

#include "org/apache/lucene/util/hnsw/IncrementalHnswGraphMerger.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
      }
      namespace search {
        class TaskExecutor;
      }
      namespace util {
        namespace hnsw {
          class RandomVectorScorerSupplier;
        }
      }
    }
  }
}
namespace java {
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

          class ConcurrentHnswMerger : public ::org::apache::lucene::util::hnsw::IncrementalHnswGraphMerger {
           public:
            enum {
              mid_init$_28ad4c41bd207067,
              mid_createBuilder_b4645ff1a19dbd6f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConcurrentHnswMerger(jobject obj) : ::org::apache::lucene::util::hnsw::IncrementalHnswGraphMerger(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConcurrentHnswMerger(const ConcurrentHnswMerger& obj) : ::org::apache::lucene::util::hnsw::IncrementalHnswGraphMerger(obj) {}

            ConcurrentHnswMerger(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::util::hnsw::RandomVectorScorerSupplier &, jint, jint, const ::org::apache::lucene::search::TaskExecutor &, jint);
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
          extern PyType_Def PY_TYPE_DEF(ConcurrentHnswMerger);
          extern PyTypeObject *PY_TYPE(ConcurrentHnswMerger);

          class t_ConcurrentHnswMerger {
          public:
            PyObject_HEAD
            ConcurrentHnswMerger object;
            static PyObject *wrap_Object(const ConcurrentHnswMerger&);
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
