#ifndef org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H
#define org_apache_lucene_classification_document_SimpleNaiveBayesDocumentClassifier_H

#include "org/apache/lucene/classification/SimpleNaiveBayesClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace document {
        class Document;
      }
      namespace classification {
        namespace document {
          class DocumentClassifier;
        }
        class ClassificationResult;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class List;
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
              mid_init$_fb5d6d95f29afe47,
              mid_assignClass_dfa6ad443c74742e,
              mid_getClasses_0fc9fb2d5c6e9925,
              mid_getClasses_0b358d24f3316d10,
              mid_getTokenArray_018515f8ced59ea4,
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
