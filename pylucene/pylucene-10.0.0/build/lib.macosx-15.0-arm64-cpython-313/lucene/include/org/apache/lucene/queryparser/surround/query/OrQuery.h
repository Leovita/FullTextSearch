#ifndef org_apache_lucene_queryparser_surround_query_OrQuery_H
#define org_apache_lucene_queryparser_surround_query_OrQuery_H

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
            class DistanceSubQuery;
            class SpanNearClauseFactory;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class OrQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_4fcda0d6e43d0b71,
                mid_addSpanQueries_aa9cfb8c7bb6240d,
                mid_distanceSubQueryNotAllowed_09a7afff1868fc5e,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit OrQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              OrQuery(const OrQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              OrQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
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
            extern PyType_Def PY_TYPE_DEF(OrQuery);
            extern PyTypeObject *PY_TYPE(OrQuery);

            class t_OrQuery {
            public:
              PyObject_HEAD
              OrQuery object;
              static PyObject *wrap_Object(const OrQuery&);
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
