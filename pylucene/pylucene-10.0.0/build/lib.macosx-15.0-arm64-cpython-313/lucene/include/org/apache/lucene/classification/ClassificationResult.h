#ifndef org_apache_lucene_classification_ClassificationResult_H
#define org_apache_lucene_classification_ClassificationResult_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        class ClassificationResult;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class ClassificationResult : public ::java::lang::Record {
         public:
          enum {
            mid_init$_211272ae737a1203,
            mid_assignedClass_5655ed8670534604,
            mid_compareTo_6c9be2345d5f5289,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_score_32caabaad86c508b,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ClassificationResult(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ClassificationResult(const ClassificationResult& obj) : ::java::lang::Record(obj) {}

          ClassificationResult(const ::java::lang::Object &, jdouble);

          ::java::lang::Object assignedClass() const;
          jint compareTo(const ClassificationResult &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jdouble score() const;
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
        extern PyType_Def PY_TYPE_DEF(ClassificationResult);
        extern PyTypeObject *PY_TYPE(ClassificationResult);

        class t_ClassificationResult {
        public:
          PyObject_HEAD
          ClassificationResult object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ClassificationResult *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ClassificationResult&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ClassificationResult&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
