#ifndef org_apache_lucene_queryparser_surround_query_FieldsQuery_H
#define org_apache_lucene_queryparser_surround_query_FieldsQuery_H

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

            class FieldsQuery : public ::org::apache::lucene::queryparser::surround::query::SrndQuery {
             public:
              enum {
                mid_init$_8dd9cadc56bc61ec,
                mid_init$_092cd03370928e1b,
                mid_getFieldNames_36830460e10839eb,
                mid_getFieldOperator_6c956faefc706166,
                mid_isFieldsSubQueryAcceptable_947277eca0748c4e,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                mid_makeLuceneQueryNoBoost_e0589645b9f2cb14,
                mid_toString_09a7afff1868fc5e,
                mid_fieldNamesToString_86d6edf9953c2f53,
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
