#ifndef org_apache_lucene_classification_KNearestFuzzyClassifier_H
#define org_apache_lucene_classification_KNearestFuzzyClassifier_H

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

        class KNearestFuzzyClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_55b7a2a0540b9abc,
            mid_assignClass_d43a29c6c576ed5d,
            mid_getClasses_8eaa545bb5a79de3,
            mid_getClasses_844be75dc1eb0e33,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KNearestFuzzyClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KNearestFuzzyClassifier(const KNearestFuzzyClassifier& obj) : ::java::lang::Object(obj) {}

          KNearestFuzzyClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);

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
        extern PyType_Def PY_TYPE_DEF(KNearestFuzzyClassifier);
        extern PyTypeObject *PY_TYPE(KNearestFuzzyClassifier);

        class t_KNearestFuzzyClassifier {
        public:
          PyObject_HEAD
          KNearestFuzzyClassifier object;
          static PyObject *wrap_Object(const KNearestFuzzyClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
