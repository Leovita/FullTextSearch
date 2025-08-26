#ifndef org_apache_lucene_search_suggest_document_CompletionQuery_H
#define org_apache_lucene_search_suggest_document_CompletionQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        namespace suggest {
          class BitsProducer;
        }
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionQuery : public ::org::apache::lucene::search::Query {
             public:
              enum {
                mid_getField_e7df854526d67fa3,
                mid_getFilter_b51451763cbcb3ee,
                mid_getTerm_b549eaec39b02d52,
                mid_rewrite_25984111320dbe39,
                mid_toString_fef9c036acf290a9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionQuery(const CompletionQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

              ::java::lang::String getField() const;
              ::org::apache::lucene::search::suggest::BitsProducer getFilter() const;
              ::org::apache::lucene::index::Term getTerm() const;
              ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
      namespace search {
        namespace suggest {
          namespace document {
            extern PyType_Def PY_TYPE_DEF(CompletionQuery);
            extern PyTypeObject *PY_TYPE(CompletionQuery);

            class t_CompletionQuery {
            public:
              PyObject_HEAD
              CompletionQuery object;
              static PyObject *wrap_Object(const CompletionQuery&);
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
