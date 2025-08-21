#ifndef org_apache_lucene_search_knn_MultiLeafKnnCollector_H
#define org_apache_lucene_search_knn_MultiLeafKnnCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
        class AbstractKnnCollector;
        class TopDocs;
      }
      namespace util {
        namespace hnsw {
          class BlockingFloatHeap;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace knn {

          class MultiLeafKnnCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6f8013201d43b975,
              mid_collect_c1497fee57980602,
              mid_earlyTerminated_947277eca0748c4e,
              mid_incVisitedCount_540b2b23d51b1efd,
              mid_k_20fbf7565993c3d7,
              mid_minCompetitiveSimilarity_9b6c3480dac00edf,
              mid_toString_09a7afff1868fc5e,
              mid_topDocs_a61875f39685c639,
              mid_visitLimit_16939d9d0a9a9721,
              mid_visitedCount_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiLeafKnnCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiLeafKnnCollector(const MultiLeafKnnCollector& obj) : ::java::lang::Object(obj) {}

            MultiLeafKnnCollector(jint, const ::org::apache::lucene::util::hnsw::BlockingFloatHeap &, const ::org::apache::lucene::search::AbstractKnnCollector &);

            jboolean collect(jint, jfloat) const;
            jboolean earlyTerminated() const;
            void incVisitedCount(jint) const;
            jint k() const;
            jfloat minCompetitiveSimilarity() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::search::TopDocs topDocs() const;
            jlong visitLimit() const;
            jlong visitedCount() const;
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
      namespace search {
        namespace knn {
          extern PyType_Def PY_TYPE_DEF(MultiLeafKnnCollector);
          extern PyTypeObject *PY_TYPE(MultiLeafKnnCollector);

          class t_MultiLeafKnnCollector {
          public:
            PyObject_HEAD
            MultiLeafKnnCollector object;
            static PyObject *wrap_Object(const MultiLeafKnnCollector&);
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
