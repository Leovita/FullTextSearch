#ifndef org_apache_lucene_queryparser_surround_query_ComposedQuery_H
#define org_apache_lucene_queryparser_surround_query_ComposedQuery_H

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
          }
        }
      }
    }
  }
}
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
                mid_init$_4fcda0d6e43d0b71,
                mid_getNrSubQueries_20fbf7565993c3d7,
                mid_getOperatorName_09a7afff1868fc5e,
                mid_getSubQueriesIterator_0db4c76ff7ee995b,
                mid_getSubQuery_8106d80d6c2b47c3,
                mid_isFieldsSubQueryAcceptable_947277eca0748c4e,
                mid_isOperatorInfix_947277eca0748c4e,
                mid_makeLuceneSubQueriesField_236aeb6408c91994,
                mid_toString_09a7afff1868fc5e,
                mid_infixToString_86d6edf9953c2f53,
                mid_prefixToString_86d6edf9953c2f53,
                mid_getBracketOpen_09a7afff1868fc5e,
                mid_getBracketClose_09a7afff1868fc5e,
                mid_getPrefixSeparator_09a7afff1868fc5e,
                mid_recompose_9425cd4f62c94bce,
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
