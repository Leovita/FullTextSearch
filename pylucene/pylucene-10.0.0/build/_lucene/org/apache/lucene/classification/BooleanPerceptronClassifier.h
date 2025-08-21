#ifndef org_apache_lucene_classification_BooleanPerceptronClassifier_H
#define org_apache_lucene_classification_BooleanPerceptronClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
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
  namespace lang {
    class Integer;
    class Boolean;
    class Class;
    class Double;
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

        class BooleanPerceptronClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_839e530b7221917b,
            mid_assignClass_d43a29c6c576ed5d,
            mid_getClasses_8eaa545bb5a79de3,
            mid_getClasses_844be75dc1eb0e33,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanPerceptronClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanPerceptronClassifier(const BooleanPerceptronClassifier& obj) : ::java::lang::Object(obj) {}

          BooleanPerceptronClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, const ::java::lang::Integer &, const ::java::lang::Double &, const ::java::lang::String &, const ::java::lang::String &);

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
        extern PyType_Def PY_TYPE_DEF(BooleanPerceptronClassifier);
        extern PyTypeObject *PY_TYPE(BooleanPerceptronClassifier);

        class t_BooleanPerceptronClassifier {
        public:
          PyObject_HEAD
          BooleanPerceptronClassifier object;
          static PyObject *wrap_Object(const BooleanPerceptronClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
