#ifndef org_apache_lucene_search_suggest_document_Completion912PostingsFormat_H
#define org_apache_lucene_search_suggest_document_Completion912PostingsFormat_H

#include "org/apache/lucene/search/suggest/document/CompletionPostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class CompletionPostingsFormat$FSTLoadMode;
          }
        }
      }
    }
  }
}
namespace java {
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

            class Completion912PostingsFormat : public ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_90a3ea34bc3450bf,
                mid_delegatePostingsFormat_d6a14e29d4b97c21,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Completion912PostingsFormat(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Completion912PostingsFormat(const Completion912PostingsFormat& obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {}

              Completion912PostingsFormat();
              Completion912PostingsFormat(const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);
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
            extern PyType_Def PY_TYPE_DEF(Completion912PostingsFormat);
            extern PyTypeObject *PY_TYPE(Completion912PostingsFormat);

            class t_Completion912PostingsFormat {
            public:
              PyObject_HEAD
              Completion912PostingsFormat object;
              static PyObject *wrap_Object(const Completion912PostingsFormat&);
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
