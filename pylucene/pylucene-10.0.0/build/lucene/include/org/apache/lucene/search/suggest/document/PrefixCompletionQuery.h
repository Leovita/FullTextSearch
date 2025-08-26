#ifndef org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H
#define org_apache_lucene_search_suggest_document_PrefixCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
        class QueryVisitor;
        namespace suggest {
          class BitsProducer;
        }
        class Weight;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class Term;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
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
                mid_init$_b64ffd8a29c180ba,
                mid_init$_71dea2287eaa102e,
                mid_createWeight_dc54d493278607e4,
                mid_equals_00d17418847797d4,
                mid_getAnalyzer_7bc9b23f56937752,
                mid_hashCode_bd89ce15dad49192,
                mid_visit_85475af8e8904ab4,
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
