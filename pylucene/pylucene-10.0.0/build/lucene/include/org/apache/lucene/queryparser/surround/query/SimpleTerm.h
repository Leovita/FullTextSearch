#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            class SpanNearClauseFactory;
            class DistanceSubQuery;
            class BasicQueryFactory;
            class SimpleTerm$MatchingTermVisitor;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class SimpleTerm : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_f5dd97eebf6a215a,
                mid_addSpanQueries_56afd90c8c16ea0c,
                mid_distanceSubQueryNotAllowed_e7df854526d67fa3,
                mid_getFieldOperator_e7df854526d67fa3,
                mid_getQuote_e7df854526d67fa3,
                mid_makeLuceneQueryFieldNoBoost_f72be4f202dc3d74,
                mid_toString_e7df854526d67fa3,
                mid_toStringUnquoted_e7df854526d67fa3,
                mid_visitMatchingTerms_b61f1a3a9acfb89c,
                mid_suffixToString_5dd6a2d608961d5f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SimpleTerm(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SimpleTerm(const SimpleTerm& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              SimpleTerm(jboolean);

              void addSpanQueries(const ::org::apache::lucene::queryparser::surround::query::SpanNearClauseFactory &) const;
              ::java::lang::String distanceSubQueryNotAllowed() const;
              ::java::lang::String getFieldOperator() const;
              ::java::lang::String getQuote() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
              ::java::lang::String toStringUnquoted() const;
              void visitMatchingTerms(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::SimpleTerm$MatchingTermVisitor &) const;
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
            extern PyType_Def PY_TYPE_DEF(SimpleTerm);
            extern PyTypeObject *PY_TYPE(SimpleTerm);

            class t_SimpleTerm {
            public:
              PyObject_HEAD
              SimpleTerm object;
              static PyObject *wrap_Object(const SimpleTerm&);
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
