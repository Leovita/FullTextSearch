#ifndef org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndPrefixQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SimpleTerm$MatchingTermVisitor;
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

            class SrndPrefixQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_dc909876e5b0346f,
                mid_getPrefix_09a7afff1868fc5e,
                mid_getSuffixOperator_6c956faefc706166,
                mid_toStringUnquoted_09a7afff1868fc5e,
                mid_visitMatchingTerms_67f593c567975eea,
                mid_suffixToString_86d6edf9953c2f53,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndPrefixQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndPrefixQuery(const SrndPrefixQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndPrefixQuery(const ::java::lang::String &, jboolean, jchar);

              ::java::lang::String getPrefix() const;
              jchar getSuffixOperator() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndPrefixQuery);
            extern PyTypeObject *PY_TYPE(SrndPrefixQuery);

            class t_SrndPrefixQuery {
            public:
              PyObject_HEAD
              SrndPrefixQuery object;
              static PyObject *wrap_Object(const SrndPrefixQuery&);
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
