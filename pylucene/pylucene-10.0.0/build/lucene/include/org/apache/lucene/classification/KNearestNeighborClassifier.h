#ifndef org_apache_lucene_classification_KNearestNeighborClassifier_H
#define org_apache_lucene_classification_KNearestNeighborClassifier_H

#include "java/lang/Object.h"

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
        class Classifier;
      }
      namespace index {
        class IndexReader;
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
            mid_init$_f3cffec5729fb0b0,
            mid_assignClass_d43a29c6c576ed5d,
            mid_getClasses_8eaa545bb5a79de3,
            mid_getClasses_844be75dc1eb0e33,
            mid_toString_09a7afff1868fc5e,
            mid_classifyFromTopDocs_d9b61ecf6e9d478b,
            mid_buildListFromTopDocs_b6fda125860c49b5,
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
