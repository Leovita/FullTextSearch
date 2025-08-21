#ifndef org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H
#define org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class QueryVisitor;
        class Weight;
        class ScoreMode;
        namespace suggest {
          class BitsProducer;
        }
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
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

            class PrefixCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_ac117cbb7133c263,
                mid_init$_c6aaa8bd6204b91d,
                mid_createWeight_77fe52950093e704,
                mid_equals_570b5248a6da3ef6,
                mid_getAnalyzer_6755ba003d984513,
                mid_hashCode_20fbf7565993c3d7,
                mid_visit_1b22ec612b613eea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PrefixCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PrefixCompletionQuery(const PrefixCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              PrefixCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
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
            extern PyType_Def PY_TYPE_DEF(PrefixCompletionQuery);
            extern PyTypeObject *PY_TYPE(PrefixCompletionQuery);

            class t_PrefixCompletionQuery {
            public:
              PyObject_HEAD
              PrefixCompletionQuery object;
              static PyObject *wrap_Object(const PrefixCompletionQuery&);
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
