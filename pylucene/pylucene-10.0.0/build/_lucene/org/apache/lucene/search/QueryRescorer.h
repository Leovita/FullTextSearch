#ifndef org_apache_lucene_search_QueryRescorer_H
#define org_apache_lucene_search_QueryRescorer_H

#include "org/apache/lucene/search/Rescorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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

        class QueryRescorer : public ::org::apache::lucene::search::Rescorer {
         public:
          enum {
            mid_init$_d7278af460a7b96a,
            mid_explain_7816c2afad961dbe,
            mid_rescore_2a267af6d7168b6c,
            mid_rescore_bc567def57a4a563,
            mid_combine_757202bc8b9c9a52,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryRescorer(jobject obj) : ::org::apache::lucene::search::Rescorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryRescorer(const QueryRescorer& obj) : ::org::apache::lucene::search::Rescorer(obj) {}

          QueryRescorer(const ::org::apache::lucene::search::Query &);

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Explanation &, jint) const;
          ::org::apache::lucene::search::TopDocs rescore(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, jint) const;
          static ::org::apache::lucene::search::TopDocs rescore(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::search::Query &, jdouble, jint);
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
        extern PyType_Def PY_TYPE_DEF(QueryRescorer);
        extern PyTypeObject *PY_TYPE(QueryRescorer);

        class t_QueryRescorer {
        public:
          PyObject_HEAD
          QueryRescorer object;
          static PyObject *wrap_Object(const QueryRescorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
