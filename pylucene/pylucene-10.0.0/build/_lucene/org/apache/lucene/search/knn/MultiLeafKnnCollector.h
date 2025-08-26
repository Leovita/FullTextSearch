#ifndef org_apache_lucene_search_knn_MultiLeafKnnCollector_H
#define org_apache_lucene_search_knn_MultiLeafKnnCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class AbstractKnnCollector;
        class KnnCollector;
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
              mid_init$_d150a9551c8b599c,
              mid_collect_0ebe0f1167a31953,
              mid_earlyTerminated_9aa4f33e82ea333f,
              mid_incVisitedCount_8226bd0b0fc13dba,
              mid_k_bd89ce15dad49192,
              mid_minCompetitiveSimilarity_8b62236f0e4d0dbc,
              mid_toString_e7df854526d67fa3,
              mid_topDocs_ff559ee576f938cf,
              mid_visitLimit_0f176418e3e16541,
              mid_visitedCount_0f176418e3e16541,
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
