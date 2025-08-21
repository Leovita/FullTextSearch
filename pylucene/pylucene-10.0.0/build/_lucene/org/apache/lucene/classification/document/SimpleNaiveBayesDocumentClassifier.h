#ifndef org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H
#define org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H

#include "org/apache/lucene/classification/SimpleNaiveBayesClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace classification {
        class ClassificationResult;
        namespace document {
          class DocumentClassifier;
        }
      }
      namespace index {
        class IndexReader;
      }
      namespace document {
        class Document;
      }
      namespace analysis {
        class Analyzer;
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
    class String;
  }
  namespace util {
    class List;
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace document {

          class SimpleNaiveBayesDocumentClassifier : public ::org::apache::lucene::classification::SimpleNaiveBayesClassifier {
           public:
            enum {
              mid_init$_d2bf52ae52de9852,
              mid_assignClass_e9d448768a8cb51a,
              mid_getClasses_d828968791cef3d9,
              mid_getClasses_cd00ee8af1e542bb,
              mid_getTokenArray_355759f260d7ba9a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleNaiveBayesDocumentClassifier(jobject obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleNaiveBayesDocumentClassifier(const SimpleNaiveBayesDocumentClassifier& obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {}

            SimpleNaiveBayesDocumentClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::java::util::Map &, const JArray< ::java::lang::String > &);

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
          extern PyType_Def PY_TYPE_DEF(SimpleNaiveBayesDocumentClassifier);
          extern PyTypeObject *PY_TYPE(SimpleNaiveBayesDocumentClassifier);

          class t_SimpleNaiveBayesDocumentClassifier {
          public:
            PyObject_HEAD
            SimpleNaiveBayesDocumentClassifier object;
            static PyObject *wrap_Object(const SimpleNaiveBayesDocumentClassifier&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
