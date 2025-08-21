#ifndef org_apache_lucene_search_suggest_document_ContextQuery_H
#define org_apache_lucene_search_suggest_document_ContextQuery_H

#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
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

            class ContextQuery : public ::org::apache::lucene::search::suggest::document::CompletionQuery {
             public:
              enum {
                mid_init$_179ac467f71e30b8,
                mid_addAllContexts_3720c61b0679eb3e,
                mid_addContext_5ed8eb2e3024c663,
                mid_addContext_26544a2b8fbbde36,
                mid_addContext_f0a71b75a386c9f6,
                mid_createWeight_77fe52950093e704,
                mid_equals_570b5248a6da3ef6,
                mid_hashCode_20fbf7565993c3d7,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_toString_cb0eb1432185fc94,
                mid_visit_1b22ec612b613eea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ContextQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ContextQuery(const ContextQuery& obj) : ::org::apache::lucene::search::suggest::document::CompletionQuery(obj) {}

              ContextQuery(const ::org::apache::lucene::search::suggest::document::CompletionQuery &);

              void addAllContexts() const;
              void addContext(const ::java::lang::CharSequence &) const;
              void addContext(const ::java::lang::CharSequence &, jfloat) const;
              void addContext(const ::java::lang::CharSequence &, jfloat, jboolean) const;
              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jboolean equals(const ::java::lang::Object &) const;
              jint hashCode() const;
              jlong ramBytesUsed() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
            extern PyType_Def PY_TYPE_DEF(ContextQuery);
            extern PyTypeObject *PY_TYPE(ContextQuery);

            class t_ContextQuery {
            public:
              PyObject_HEAD
              ContextQuery object;
              static PyObject *wrap_Object(const ContextQuery&);
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
