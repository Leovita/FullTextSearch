#ifndef org_apache_lucene_search_suggest_document_CompletionPostingsFormat$FSTLoadMode_H
#define org_apache_lucene_search_suggest_document_CompletionPostingsFormat$FSTLoadMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class CompletionPostingsFormat$FSTLoadMode : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_61f37d32874ff423,
                mid_values_2b2e6481d92c38df,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CompletionPostingsFormat$FSTLoadMode(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CompletionPostingsFormat$FSTLoadMode(const CompletionPostingsFormat$FSTLoadMode& obj) : ::java::lang::Enum(obj) {}

              static CompletionPostingsFormat$FSTLoadMode *AUTO;
              static CompletionPostingsFormat$FSTLoadMode *OFF_HEAP;
              static CompletionPostingsFormat$FSTLoadMode *ON_HEAP;

              static CompletionPostingsFormat$FSTLoadMode valueOf(const ::java::lang::String &);
              static JArray< CompletionPostingsFormat$FSTLoadMode > values();
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
            extern PyType_Def PY_TYPE_DEF(CompletionPostingsFormat$FSTLoadMode);
            extern PyTypeObject *PY_TYPE(CompletionPostingsFormat$FSTLoadMode);

            class t_CompletionPostingsFormat$FSTLoadMode {
            public:
              PyObject_HEAD
              CompletionPostingsFormat$FSTLoadMode object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CompletionPostingsFormat$FSTLoadMode *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CompletionPostingsFormat$FSTLoadMode&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CompletionPostingsFormat$FSTLoadMode&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
