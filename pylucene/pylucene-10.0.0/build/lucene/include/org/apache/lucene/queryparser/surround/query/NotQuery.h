#ifndef org_apache_lucene_queryparser_surround_query_NotQuery_H
#define org_apache_lucene_queryparser_surround_query_NotQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class BasicQueryFactory;
            class SrndQuery;
          }
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class NotQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_2987a497c899570e,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NotQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NotQuery(const NotQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              NotQuery(const ::java::util::List &, const ::java::lang::String &);

              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyType_Def PY_TYPE_DEF(NotQuery);
            extern PyTypeObject *PY_TYPE(NotQuery);

            class t_NotQuery {
            public:
              PyObject_HEAD
              NotQuery object;
              static PyObject *wrap_Object(const NotQuery&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
