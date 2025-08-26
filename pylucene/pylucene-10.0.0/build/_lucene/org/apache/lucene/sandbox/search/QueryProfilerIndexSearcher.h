#ifndef org_apache_lucene_sandbox_search_QueryProfilerIndexSearcher_H
#define org_apache_lucene_sandbox_search_QueryProfilerIndexSearcher_H

#include "org/apache/lucene/search/IndexSearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Query;
        class Weight;
      }
      namespace index {
        class IndexReader;
      }
      namespace sandbox {
        namespace search {
          class QueryProfilerResult;
        }
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {

          class QueryProfilerIndexSearcher : public ::org::apache::lucene::search::IndexSearcher {
           public:
            enum {
              mid_init$_d988f6cfce8380fb,
              mid_createWeight_783fe471e3906f40,
              mid_getProfileResult_1387e1e2702ac173,
              mid_getRewriteTime_0f176418e3e16541,
              mid_rewrite_aa742476ed88ab8f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QueryProfilerIndexSearcher(jobject obj) : ::org::apache::lucene::search::IndexSearcher(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QueryProfilerIndexSearcher(const QueryProfilerIndexSearcher& obj) : ::org::apache::lucene::search::IndexSearcher(obj) {}

            QueryProfilerIndexSearcher(const ::org::apache::lucene::index::IndexReader &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            ::java::util::List getProfileResult() const;
            jlong getRewriteTime() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::Query &) const;
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
      namespace sandbox {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(QueryProfilerIndexSearcher);
          extern PyTypeObject *PY_TYPE(QueryProfilerIndexSearcher);

          class t_QueryProfilerIndexSearcher {
          public:
            PyObject_HEAD
            QueryProfilerIndexSearcher object;
            static PyObject *wrap_Object(const QueryProfilerIndexSearcher&);
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
