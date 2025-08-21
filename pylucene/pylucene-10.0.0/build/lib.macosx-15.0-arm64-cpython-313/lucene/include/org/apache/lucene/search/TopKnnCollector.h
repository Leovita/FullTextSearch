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
            mid_init$_e13cff512ebda969,
            mid_collect_c1497fee57980602,
            mid_minCompetitiveSimilarity_9b6c3480dac00edf,
            mid_numCollected_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_topDocs_a61875f39685c639,
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
