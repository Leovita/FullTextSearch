#ifndef org_apache_lucene_classification_BM25NBClassifier_H
#define org_apache_lucene_classification_BM25NBClassifier_H

#include "java/lang/Object.h"

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

        class BM25NBClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d7e8ccf515412af3,
            mid_assignClass_d43a29c6c576ed5d,
            mid_getClasses_8eaa545bb5a79de3,
            mid_getClasses_844be75dc1eb0e33,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BM25NBClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BM25NBClassifier(const BM25NBClassifier& obj) : ::java::lang::Object(obj) {}

          BM25NBClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const JArray< ::java::lang::String > &);

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
        extern PyType_Def PY_TYPE_DEF(BM25NBClassifier);
        extern PyTypeObject *PY_TYPE(BM25NBClassifier);

        class t_BM25NBClassifier {
        public:
          PyObject_HEAD
          BM25NBClassifier object;
          static PyObject *wrap_Object(const BM25NBClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
