#ifndef org_apache_lucene_search_suggest_document_RegexCompletionQuery_H
#define org_apache_lucene_search_suggest_document_RegexCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        namespace suggest {
          class BitsProducer;
        }
        class IndexSearcher;
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

            class RegexCompletionQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_ed33f9e055f7213d,
                mid_init$_fe05d84341126959,
                mid_init$_1b09428e23ab13c1,
                mid_init$_9d851c32f66a6ada,
                mid_createWeight_dc54d493278607e4,
                mid_equals_00d17418847797d4,
                mid_getDeterminizeWorkLimit_bd89ce15dad49192,
                mid_getFlags_bd89ce15dad49192,
                mid_hashCode_bd89ce15dad49192,
                mid_visit_85475af8e8904ab4,
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
