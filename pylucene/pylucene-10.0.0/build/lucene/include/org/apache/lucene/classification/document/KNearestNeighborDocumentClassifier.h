#ifndef org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H
#define org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H

#include "org/apache/lucene/classification/KNearestNeighborClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Query;
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
      namespace document {
        class Document;
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

          class KNearestNeighborDocumentClassifier : public ::org::apache::lucene::classification::KNearestNeighborClassifier {
           public:
            enum {
              mid_init$_c42061c264f62b98,
              mid_assignClass_dfa6ad443c74742e,
              mid_getClasses_0fc9fb2d5c6e9925,
              mid_getClasses_0b358d24f3316d10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KNearestNeighborDocumentClassifier(jobject obj) : ::org::apache::lucene::classification::KNearestNeighborClassifier(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KNearestNeighborDocumentClassifier(const KNearestNeighborDocumentClassifier& obj) : ::org::apache::lucene::classification::KNearestNeighborClassifier(obj) {}

            KNearestNeighborDocumentClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::search::Query &, jint, jint, jint, const ::java::lang::String &, const ::java::util::Map &, const JArray< ::java::lang::String > &);

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
          extern PyType_Def PY_TYPE_DEF(KNearestNeighborDocumentClassifier);
          extern PyTypeObject *PY_TYPE(KNearestNeighborDocumentClassifier);

          class t_KNearestNeighborDocumentClassifier {
          public:
            PyObject_HEAD
            KNearestNeighborDocumentClassifier object;
            static PyObject *wrap_Object(const KNearestNeighborDocumentClassifier&);
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
