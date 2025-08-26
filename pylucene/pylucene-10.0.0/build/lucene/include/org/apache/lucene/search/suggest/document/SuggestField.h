#ifndef org_apache_lucene_search_suggest_document_SuggestField_H
#define org_apache_lucene_search_suggest_document_SuggestField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace document {
        class FieldType;
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

            class SuggestField : public ::org::apache::lucene::document::Field {
             public:
              enum {
                mid_init$_07e7ca25e157e1c2,
                mid_tokenStream_c33c4c82a743c93e,
                mid_wrapTokenStream_108465ffdab65656,
                mid_type_1456044a01a5c9bf,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestField(const SuggestField& obj) : ::org::apache::lucene::document::Field(obj) {}

              static ::org::apache::lucene::document::FieldType *FIELD_TYPE;

              SuggestField(const ::java::lang::String &, const ::java::lang::String &, jint);

              ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
            extern PyType_Def PY_TYPE_DEF(SuggestField);
            extern PyTypeObject *PY_TYPE(SuggestField);

            class t_SuggestField {
            public:
              PyObject_HEAD
              SuggestField object;
              static PyObject *wrap_Object(const SuggestField&);
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
