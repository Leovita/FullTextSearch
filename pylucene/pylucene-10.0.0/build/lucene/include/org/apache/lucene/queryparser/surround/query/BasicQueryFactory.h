#ifndef org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H
#define org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TermQuery;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class TooManyBasicQueries;
          }
        }
      }
      namespace index {
        class Term;
      }
      namespace queries {
        namespace spans {
          class SpanTermQuery;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class BasicQueryFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_8226bd0b0fc13dba,
                mid_equals_00d17418847797d4,
                mid_getMaxBasicQueries_bd89ce15dad49192,
                mid_getNrQueriesMade_bd89ce15dad49192,
                mid_hashCode_bd89ce15dad49192,
                mid_newSpanTermQuery_0bbd7a8d9d8b9a84,
                mid_newTermQuery_fefcd7725fa94c1f,
                mid_toString_e7df854526d67fa3,
                mid_checkMax_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BasicQueryFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BasicQueryFactory(const BasicQueryFactory& obj) : ::java::lang::Object(obj) {}

              BasicQueryFactory();
              BasicQueryFactory(jint);

              jboolean equals(const ::java::lang::Object &) const;
              jint getMaxBasicQueries() const;
              jint getNrQueriesMade() const;
              jint hashCode() const;
              ::org::apache::lucene::queries::spans::SpanTermQuery newSpanTermQuery(const ::org::apache::lucene::index::Term &) const;
              ::org::apache::lucene::search::TermQuery newTermQuery(const ::org::apache::lucene::index::Term &) const;
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
            extern PyType_Def PY_TYPE_DEF(BasicQueryFactory);
            extern PyTypeObject *PY_TYPE(BasicQueryFactory);

            class t_BasicQueryFactory {
            public:
              PyObject_HEAD
              BasicQueryFactory object;
              static PyObject *wrap_Object(const BasicQueryFactory&);
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
