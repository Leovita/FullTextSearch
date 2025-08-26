#ifndef org_apache_lucene_queryparser_surround_query_ComposedQuery_H
#define org_apache_lucene_queryparser_surround_query_ComposedQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace java {
  namespace util {
    class Iterator;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class ComposedQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_1ad19c832bba5d35,
                mid_getNrSubQueries_bd89ce15dad49192,
                mid_getOperatorName_e7df854526d67fa3,
                mid_getSubQueriesIterator_c7985fafdcf40e83,
                mid_getSubQuery_59c941d6f11d6b8c,
                mid_isFieldsSubQueryAcceptable_9aa4f33e82ea333f,
                mid_isOperatorInfix_9aa4f33e82ea333f,
                mid_makeLuceneSubQueriesField_45d486352254701e,
                mid_toString_e7df854526d67fa3,
                mid_recompose_acbb405b60a30822,
                mid_infixToString_5dd6a2d608961d5f,
                mid_prefixToString_5dd6a2d608961d5f,
                mid_getBracketOpen_e7df854526d67fa3,
                mid_getBracketClose_e7df854526d67fa3,
                mid_getPrefixSeparator_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ComposedQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ComposedQuery(const ComposedQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              ComposedQuery(const ::java::util::List &, jboolean, const ::java::lang::String &);

              jint getNrSubQueries() const;
              ::java::lang::String getOperatorName() const;
              ::java::util::Iterator getSubQueriesIterator() const;
              ::org::apache::lucene::queryparser::surround::query::SrndQuery getSubQuery(jint) const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isOperatorInfix() const;
              ::java::util::List makeLuceneSubQueriesField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::java::lang::String toString() const;
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
            extern PyType_Def PY_TYPE_DEF(ComposedQuery);
            extern PyTypeObject *PY_TYPE(ComposedQuery);

            class t_ComposedQuery {
            public:
              PyObject_HEAD
              ComposedQuery object;
              static PyObject *wrap_Object(const ComposedQuery&);
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
