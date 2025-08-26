#ifndef org_apache_lucene_search_suggest_document_Completion90PostingsFormat_H
#define org_apache_lucene_search_suggest_document_Completion90PostingsFormat_H

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

            class Completion90PostingsFormat : public ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat {
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

              explicit Completion90PostingsFormat(jobject obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Completion90PostingsFormat(const Completion90PostingsFormat& obj) : ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat(obj) {}

              Completion90PostingsFormat();
              Completion90PostingsFormat(const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);
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
            extern PyType_Def PY_TYPE_DEF(Completion90PostingsFormat);
            extern PyTypeObject *PY_TYPE(Completion90PostingsFormat);

            class t_Completion90PostingsFormat {
            public:
              PyObject_HEAD
              Completion90PostingsFormat object;
              static PyObject *wrap_Object(const Completion90PostingsFormat&);
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
