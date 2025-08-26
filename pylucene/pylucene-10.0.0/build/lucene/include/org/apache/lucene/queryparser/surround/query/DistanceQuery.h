#ifndef org_apache_lucene_queryparser_surround_query_DistanceQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceQuery_H

#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SpanNearClauseFactory;
            class DistanceSubQuery;
            class SrndQuery;
            class BasicQueryFactory;
          }
        }
      }
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
      namespace queryparser {
        namespace surround {
          namespace query {

            class DistanceQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_8081be10fd8e8c70,
                mid_addSpanQueries_56afd90c8c16ea0c,
                mid_distanceSubQueryNotAllowed_e7df854526d67fa3,
                mid_getOpDistance_bd89ce15dad49192,
                mid_getSpanNearQuery_3d4eaf6b05593ce9,
                mid_makeLuceneQueryFieldNoBoost_f72be4f202dc3d74,
                mid_subQueriesOrdered_9aa4f33e82ea333f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DistanceQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DistanceQuery(const DistanceQuery& obj) : ::org::apache::lucene::queryparser::surround::query::ComposedQuery(obj) {}

              DistanceQuery(const ::java::util::List &, jboolean, jint, const ::java::lang::String &, jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              jint getOpDistance() const;
              ::org::apache::lucene::search::Query getSpanNearQuery(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              jboolean subQueriesOrdered() const;
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
            extern PyType_Def PY_TYPE_DEF(DistanceQuery);
            extern PyTypeObject *PY_TYPE(DistanceQuery);

            class t_DistanceQuery {
            public:
              PyObject_HEAD
              DistanceQuery object;
              static PyObject *wrap_Object(const DistanceQuery&);
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
