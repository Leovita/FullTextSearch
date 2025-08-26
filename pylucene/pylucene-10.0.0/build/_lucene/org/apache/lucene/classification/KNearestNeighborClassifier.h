#ifndef org_apache_lucene_classification_KNearestNeighborClassifier_H
#define org_apache_lucene_classification_KNearestNeighborClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace classification {
        class Classifier;
        class ClassificationResult;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Query;
      }
      namespace analysis {
        class Analyzer;
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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class KNearestNeighborClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8051882e25e5607b,
            mid_assignClass_f41729c7a04388b4,
            mid_getClasses_49920ced44282529,
            mid_getClasses_de45d3d1e8012f87,
            mid_toString_e7df854526d67fa3,
            mid_classifyFromTopDocs_d02c9dd3436bb4b5,
            mid_buildListFromTopDocs_2bfdc0a755c5647c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KNearestNeighborClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KNearestNeighborClassifier(const KNearestNeighborClassifier& obj) : ::java::lang::Object(obj) {}

          KNearestNeighborClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, jint, jint, jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        extern PyType_Def PY_TYPE_DEF(KNearestNeighborClassifier);
        extern PyTypeObject *PY_TYPE(KNearestNeighborClassifier);

        class t_KNearestNeighborClassifier {
        public:
          PyObject_HEAD
          KNearestNeighborClassifier object;
          static PyObject *wrap_Object(const KNearestNeighborClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
