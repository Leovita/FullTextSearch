#ifndef org_apache_lucene_search_suggest_document_RegexCompletionQuery_H
#define org_apache_lucene_search_suggest_document_RegexCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        namespace suggest {
          class BitsProducer;
        }
        class Weight;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class RegexCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_3b0982cb6e1bfb9d,
                mid_init$_d9e98e086dd87cde,
                mid_init$_25675dcc7619f110,
                mid_init$_10b8baa298fa257a,
                mid_createWeight_77fe52950093e704,
                mid_equals_570b5248a6da3ef6,
                mid_getDeterminizeWorkLimit_20fbf7565993c3d7,
                mid_getFlags_20fbf7565993c3d7,
                mid_hashCode_20fbf7565993c3d7,
                mid_visit_1b22ec612b613eea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit RegexCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              RegexCompletionQuery(const RegexCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              RegexCompletionQuery(const ::org::apache::lucene::index::Term &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint);
              RegexCompletionQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint getDeterminizeWorkLimit() const;
              jint getFlags() const;
              jint hashCode() const;
              void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
            extern PyType_Def PY_TYPE_DEF(RegexCompletionQuery);
            extern PyTypeObject *PY_TYPE(RegexCompletionQuery);

            class t_RegexCompletionQuery {
            public:
              PyObject_HEAD
              RegexCompletionQuery object;
              static PyObject *wrap_Object(const RegexCompletionQuery&);
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
