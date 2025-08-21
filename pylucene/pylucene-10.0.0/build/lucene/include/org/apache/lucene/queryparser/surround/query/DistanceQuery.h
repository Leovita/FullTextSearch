#ifndef org_apache_lucene_queryparser_surround_query_DistanceQuery_H
#define org_apache_lucene_queryparser_surround_query_DistanceQuery_H

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
      namespace index {
        class IndexReader;
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

            class DistanceQuery : public ::org::apache::lucene::queryparser::surround::query::ComposedQuery {
             public:
              enum {
                mid_init$_2a0ecec824c50d17,
                mid_addSpanQueries_aa9cfb8c7bb6240d,
                mid_distanceSubQueryNotAllowed_09a7afff1868fc5e,
                mid_getOpDistance_20fbf7565993c3d7,
                mid_getSpanNearQuery_3eaf9730ec8d6707,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                mid_subQueriesOrdered_947277eca0748c4e,
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
