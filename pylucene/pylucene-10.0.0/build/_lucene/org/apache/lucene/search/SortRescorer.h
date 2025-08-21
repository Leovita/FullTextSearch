#ifndef org_apache_lucene_search_SortRescorer_H
#define org_apache_lucene_search_SortRescorer_H

#include "org/apache/lucene/search/Rescorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
        class Explanation;
        class TopDocs;
        class IndexSearcher;
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
      namespace search {

        class SortRescorer : public ::org::apache::lucene::search::Rescorer {
         public:
          enum {
            mid_init$_d35bc7e409a6dca4,
            mid_explain_7816c2afad961dbe,
            mid_rescore_2a267af6d7168b6c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortRescorer(jobject obj) : ::org::apache::lucene::search::Rescorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortRescorer(const SortRescorer& obj) : ::org::apache::lucene::search::Rescorer(obj) {}

          SortRescorer(const ::org::apache::lucene::search::Sort &);

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Explanation &, jint) const;
          ::org::apache::lucene::search::TopDocs rescore(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SortRescorer);
        extern PyTypeObject *PY_TYPE(SortRescorer);

        class t_SortRescorer {
        public:
          PyObject_HEAD
          SortRescorer object;
          static PyObject *wrap_Object(const SortRescorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
