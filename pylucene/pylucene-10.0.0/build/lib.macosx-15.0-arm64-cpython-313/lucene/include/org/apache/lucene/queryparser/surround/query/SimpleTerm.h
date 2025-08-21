#ifndef org_apache_lucene_queryparser_surround_query_SimpleTerm_H
#define org_apache_lucene_queryparser_surround_query_SimpleTerm_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

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
            class DistanceSubQuery;
            class SimpleTerm$MatchingTermVisitor;
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
                mid_init$_b110fc3a58c081ab,
                mid_addSpanQueries_aa9cfb8c7bb6240d,
                mid_distanceSubQueryNotAllowed_09a7afff1868fc5e,
                mid_getFieldOperator_09a7afff1868fc5e,
                mid_getQuote_09a7afff1868fc5e,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                mid_toString_09a7afff1868fc5e,
                mid_toStringUnquoted_09a7afff1868fc5e,
                mid_visitMatchingTerms_67f593c567975eea,
                mid_suffixToString_86d6edf9953c2f53,
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
