#ifndef org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H
#define org_apache_lucene_queryparser_surround_query_BasicQueryFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class TooManyBasicQueries;
          }
        }
      }
      namespace queries {
        namespace spans {
          class SpanTermQuery;
        }
      }
      namespace search {
        class TermQuery;
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
                mid_init$_3720c61b0679eb3e,
                mid_init$_540b2b23d51b1efd,
                mid_equals_570b5248a6da3ef6,
                mid_getMaxBasicQueries_20fbf7565993c3d7,
                mid_getNrQueriesMade_20fbf7565993c3d7,
                mid_hashCode_20fbf7565993c3d7,
                mid_newSpanTermQuery_93223fbd2a50fa4d,
                mid_newTermQuery_819dd359cd2de088,
                mid_toString_09a7afff1868fc5e,
                mid_checkMax_3720c61b0679eb3e,
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
