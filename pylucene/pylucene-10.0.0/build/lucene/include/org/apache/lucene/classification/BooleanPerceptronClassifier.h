#ifndef org_apache_lucene_classification_BooleanPerceptronClassifier_H
#define org_apache_lucene_classification_BooleanPerceptronClassifier_H

#include "java/lang/Object.h"

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
    }
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
            mid_init$_7ff14172d66e7911,
            mid_assignClass_f41729c7a04388b4,
            mid_getClasses_49920ced44282529,
            mid_getClasses_de45d3d1e8012f87,
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
