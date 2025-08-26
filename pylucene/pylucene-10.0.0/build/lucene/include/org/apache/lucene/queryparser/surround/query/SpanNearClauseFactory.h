#ifndef org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H
#define org_apache_lucene_queryparser_surround_query_SpanNearClauseFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
        class Term;
      }
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
      namespace queries {
        namespace spans {
          class SpanQuery;
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

            class SpanNearClauseFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_84fb6684475d39ad,
                mid_addSpanQuery_a28ff1cdbaf0bf6c,
                mid_addTermWeighted_5c3f9539b4390048,
                mid_clear_e7bdbe105ce1bafb,
                mid_getBasicQueryFactory_d55bf8a40bb55f4a,
                mid_getFieldName_e7df854526d67fa3,
                mid_getIndexReader_9596617cc74c49f2,
                mid_makeSpanClause_181254ec704aaed2,
                mid_size_bd89ce15dad49192,
                mid_addSpanQueryWeighted_9cf48623311f244d,
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
