#ifndef org_apache_lucene_classification_CachingNaiveBayesClassifier_H
#define org_apache_lucene_classification_CachingNaiveBayesClassifier_H

#include "org/apache/lucene/classification/SimpleNaiveBayesClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class CachingNaiveBayesClassifier : public ::org::apache::lucene::classification::SimpleNaiveBayesClassifier {
         public:
          enum {
            mid_init$_d7e8ccf515412af3,
            mid_reInitCache_2936d2706a18a684,
            mid_assignClassNormalizedList_8eaa545bb5a79de3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingNaiveBayesClassifier(jobject obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CachingNaiveBayesClassifier(const CachingNaiveBayesClassifier& obj) : ::org::apache::lucene::classification::SimpleNaiveBayesClassifier(obj) {}

          CachingNaiveBayesClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const JArray< ::java::lang::String > &);

          void reInitCache(jint, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(CachingNaiveBayesClassifier);
        extern PyTypeObject *PY_TYPE(CachingNaiveBayesClassifier);

        class t_CachingNaiveBayesClassifier {
        public:
          PyObject_HEAD
          CachingNaiveBayesClassifier object;
          static PyObject *wrap_Object(const CachingNaiveBayesClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
