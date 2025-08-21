#ifndef org_apache_lucene_classification_document_DocumentClassifier_H
#define org_apache_lucene_classification_document_DocumentClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        class ClassificationResult;
      }
      namespace document {
        class Document;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace document {

          class DocumentClassifier : public ::java::lang::Object {
           public:
            enum {
              mid_assignClass_e9d448768a8cb51a,
              mid_getClasses_d828968791cef3d9,
              mid_getClasses_cd00ee8af1e542bb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DocumentClassifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DocumentClassifier(const DocumentClassifier& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::classification::ClassificationResult assignClass(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &) const;
            ::java::util::List getClasses(const ::org::apache::lucene::document::Document &, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(DocumentClassifier);
          extern PyTypeObject *PY_TYPE(DocumentClassifier);

          class t_DocumentClassifier {
          public:
            PyObject_HEAD
            DocumentClassifier object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_DocumentClassifier *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const DocumentClassifier&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const DocumentClassifier&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
