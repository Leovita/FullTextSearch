#ifndef org_apache_lucene_search_suggest_document_CompletionTerms_H
#define org_apache_lucene_search_suggest_document_CompletionTerms_H

#include "org/apache/lucene/index/FilterLeafReader$FilterTerms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class NRTSuggester;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionTerms : public ::org::apache::lucene::index::FilterLeafReader$FilterTerms {
             public:
              enum {
                mid_getMaxWeight_16939d9d0a9a9721,
                mid_getMinWeight_16939d9d0a9a9721,
                mid_getType_847674f430f49e4c,
                mid_suggester_7910fd32139a8cb1,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionTerms(jobject obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTerms(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionTerms(const CompletionTerms& obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTerms(obj) {}

              jlong getMaxWeight() const;
              jlong getMinWeight() const;
              jbyte getType() const;
              ::org::apache::lucene::search::suggest::document::NRTSuggester suggester() const;
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
            extern PyType_Def PY_TYPE_DEF(CompletionTerms);
            extern PyTypeObject *PY_TYPE(CompletionTerms);

            class t_CompletionTerms {
            public:
              PyObject_HEAD
              CompletionTerms object;
              static PyObject *wrap_Object(const CompletionTerms&);
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
