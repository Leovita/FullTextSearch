#ifndef org_apache_lucene_queryparser_surround_query_SrndTermQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndTermQuery_H

#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
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

            class SrndTermQuery : public ::org::apache::lucene::queryparser::surround::query::SimpleTerm {
             public:
              enum {
                mid_init$_855d5fa744141d54,
                mid_getLuceneTerm_f915c22ed1dffa14,
                mid_getTermText_09a7afff1868fc5e,
                mid_toStringUnquoted_09a7afff1868fc5e,
                mid_visitMatchingTerms_67f593c567975eea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndTermQuery(jobject obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndTermQuery(const SrndTermQuery& obj) : ::org::apache::lucene::queryparser::surround::query::SimpleTerm(obj) {}

              SrndTermQuery(const ::java::lang::String &, jboolean);

              ::org::apache::lucene::index::Term getLuceneTerm(const ::java::lang::String &) const;
              ::java::lang::String getTermText() const;
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
            extern PyType_Def PY_TYPE_DEF(SrndTermQuery);
            extern PyTypeObject *PY_TYPE(SrndTermQuery);

            class t_SrndTermQuery {
            public:
              PyObject_HEAD
              SrndTermQuery object;
              static PyObject *wrap_Object(const SrndTermQuery&);
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
