#ifndef org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H
#define org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H

#include "java/lang/Object.h"

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
      namespace index {
        class Term;
        class IndexReader;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
        }
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

            class SpanNearClauseFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_748c57f1149e169e,
                mid_addSpanQuery_d7278af460a7b96a,
                mid_addTermWeighted_e09c19f723952c55,
                mid_clear_3720c61b0679eb3e,
                mid_getBasicQueryFactory_0077a13a08ea5970,
                mid_getFieldName_09a7afff1868fc5e,
                mid_getIndexReader_38e68c08dc5fee6f,
                mid_makeSpanClause_ccd29998bab337f9,
                mid_size_20fbf7565993c3d7,
                mid_addSpanQueryWeighted_f10d20865cc3eab9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SpanNearClauseFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SpanNearClauseFactory(const SpanNearClauseFactory& obj) : ::java::lang::Object(obj) {}

              SpanNearClauseFactory(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &);

              void addSpanQuery(const ::org::apache::lucene::search::Query &) const;
              void addTermWeighted(const ::org::apache::lucene::index::Term &, jfloat) const;
              void clear() const;
              ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory getBasicQueryFactory() const;
              ::java::lang::String getFieldName() const;
              ::org::apache::lucene::index::IndexReader getIndexReader() const;
              ::org::apache::lucene::queries::spans::SpanQuery makeSpanClause() const;
              jint size() const;
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
            extern PyType_Def PY_TYPE_DEF(SpanNearClauseFactory);
            extern PyTypeObject *PY_TYPE(SpanNearClauseFactory);

            class t_SpanNearClauseFactory {
            public:
              PyObject_HEAD
              SpanNearClauseFactory object;
              static PyObject *wrap_Object(const SpanNearClauseFactory&);
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
