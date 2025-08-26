#ifndef org_apache_lucene_classification_SimpleNaiveBayesClassifier_H
#define org_apache_lucene_classification_SimpleNaiveBayesClassifier_H

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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class SimpleNaiveBayesClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_94ea461eba29b3f5,
            mid_assignClass_f41729c7a04388b4,
            mid_getClasses_49920ced44282529,
            mid_getClasses_de45d3d1e8012f87,
            mid_assignClassNormalizedList_49920ced44282529,
            mid_tokenize_7b34cb521ce5d8ff,
            mid_countDocsWithClass_bd89ce15dad49192,
            mid_normClassificationResults_398768262d403ff6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleNaiveBayesClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleNaiveBayesClassifier(const SimpleNaiveBayesClassifier& obj) : ::java::lang::Object(obj) {}

          SimpleNaiveBayesClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleNaiveBayesClassifier);
        extern PyTypeObject *PY_TYPE(SimpleNaiveBayesClassifier);

        class t_SimpleNaiveBayesClassifier {
        public:
          PyObject_HEAD
          SimpleNaiveBayesClassifier object;
          static PyObject *wrap_Object(const SimpleNaiveBayesClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
