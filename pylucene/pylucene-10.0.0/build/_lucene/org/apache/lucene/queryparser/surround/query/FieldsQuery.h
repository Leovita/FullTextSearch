#ifndef org_apache_lucene_queryparser_surround_query_FieldsQuery_H
#define org_apache_lucene_queryparser_surround_query_FieldsQuery_H

#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
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

            class FieldsQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_beb694a1a71b028c,
                mid_init$_a409af8d1306b8f2,
                mid_getFieldNames_1387e1e2702ac173,
                mid_getFieldOperator_15a06771db8cb866,
                mid_isFieldsSubQueryAcceptable_9aa4f33e82ea333f,
                mid_makeLuceneQueryFieldNoBoost_f72be4f202dc3d74,
                mid_makeLuceneQueryNoBoost_f282569408bb7aa4,
                mid_toString_e7df854526d67fa3,
                mid_fieldNamesToString_5dd6a2d608961d5f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldsQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldsQuery(const FieldsQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SrndQuery(obj) {}

              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::lang::String &, jchar);
              FieldsQuery(const ::org::apache::lucene::queryparser::surround::query::SrndQuery &, const ::java::util::List &, jchar);

              ::java::util::List getFieldNames() const;
              jchar getFieldOperator() const;
              jboolean isFieldsSubQueryAcceptable() const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryNoBoost(const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldsQuery);
            extern PyTypeObject *PY_TYPE(FieldsQuery);

            class t_FieldsQuery {
            public:
              PyObject_HEAD
              FieldsQuery object;
              static PyObject *wrap_Object(const FieldsQuery&);
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
