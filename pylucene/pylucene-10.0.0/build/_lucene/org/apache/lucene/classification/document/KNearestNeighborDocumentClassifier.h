#ifndef org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H
#define org_apache_lucene_classification_document_KNearestNeighborDocumentClassifier_H

#include "org/apache/lucene/classification/KNearestNeighborClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace similarities {
          class Similarity;
        }
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

          class KNearestNeighborDocumentClassifier : public ::org::apache::lucene::classification::KNearestNeighborClassifier {
           public:
            enum {
              mid_init$_8d21c1cddcb1efe6,
              mid_assignClass_e9d448768a8cb51a,
              mid_getClasses_d828968791cef3d9,
              mid_getClasses_cd00ee8af1e542bb,
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
