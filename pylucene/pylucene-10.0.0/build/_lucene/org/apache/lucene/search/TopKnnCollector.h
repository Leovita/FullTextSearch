#ifndef org_apache_lucene_search_TopKnnCollector_H
#define org_apache_lucene_search_TopKnnCollector_H

#include "org/apache/lucene/search/AbstractKnnCollector.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopKnnCollector : public ::org::apache::lucene::search::AbstractKnnCollector {
         public:
          enum {
            mid_init$_645c25455f5b9b1c,
            mid_collect_0ebe0f1167a31953,
            mid_minCompetitiveSimilarity_8b62236f0e4d0dbc,
            mid_numCollected_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_topDocs_ff559ee576f938cf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopKnnCollector(jobject obj) : ::org::apache::lucene::search::AbstractKnnCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopKnnCollector(const TopKnnCollector& obj) : ::org::apache::lucene::search::AbstractKnnCollector(obj) {}

          TopKnnCollector(jint, jint);

          jboolean collect(jint, jfloat) const;
          jfloat minCompetitiveSimilarity() const;
          jint numCollected() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopKnnCollector);
        extern PyTypeObject *PY_TYPE(TopKnnCollector);

        class t_TopKnnCollector {
        public:
          PyObject_HEAD
          TopKnnCollector object;
          static PyObject *wrap_Object(const TopKnnCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
