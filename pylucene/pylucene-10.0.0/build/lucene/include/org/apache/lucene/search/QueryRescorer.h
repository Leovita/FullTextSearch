#ifndef org_apache_lucene_search_QueryRescorer_H
#define org_apache_lucene_search_QueryRescorer_H

#include "org/apache/lucene/search/Rescorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        class Query;
        class TopDocs;
        class IndexSearcher;
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
      namespace search {

        class QueryRescorer : public ::org::apache::lucene::search::Rescorer {
         public:
          enum {
            mid_init$_a28ff1cdbaf0bf6c,
            mid_explain_0301dd764f0b75c0,
            mid_rescore_f836b6b8188cc050,
            mid_rescore_6f157d51c0c36fbf,
            mid_combine_d25cfd2f8aac4e81,
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
