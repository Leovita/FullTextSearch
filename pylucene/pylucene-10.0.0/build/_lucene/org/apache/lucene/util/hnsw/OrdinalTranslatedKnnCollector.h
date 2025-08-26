#ifndef org_apache_lucene_util_hnsw_OrdinalTranslatedKnnCollector_H
#define org_apache_lucene_util_hnsw_OrdinalTranslatedKnnCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
        class TopDocs;
      }
      namespace util {
        namespace hnsw {
          class IntToIntFunction;
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

          class OrdinalTranslatedKnnCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_476191823a959008,
              mid_collect_0ebe0f1167a31953,
              mid_earlyTerminated_9aa4f33e82ea333f,
              mid_incVisitedCount_8226bd0b0fc13dba,
              mid_k_bd89ce15dad49192,
              mid_minCompetitiveSimilarity_8b62236f0e4d0dbc,
              mid_topDocs_ff559ee576f938cf,
              mid_visitLimit_0f176418e3e16541,
              mid_visitedCount_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalTranslatedKnnCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalTranslatedKnnCollector(const OrdinalTranslatedKnnCollector& obj) : ::java::lang::Object(obj) {}

            OrdinalTranslatedKnnCollector(const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::hnsw::IntToIntFunction &);

            jboolean collect(jint, jfloat) const;
            jboolean earlyTerminated() const;
            void incVisitedCount(jint) const;
            jint k() const;
            jfloat minCompetitiveSimilarity() const;
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
      namespace util {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(OrdinalTranslatedKnnCollector);
          extern PyTypeObject *PY_TYPE(OrdinalTranslatedKnnCollector);

          class t_OrdinalTranslatedKnnCollector {
          public:
            PyObject_HEAD
            OrdinalTranslatedKnnCollector object;
            static PyObject *wrap_Object(const OrdinalTranslatedKnnCollector&);
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
