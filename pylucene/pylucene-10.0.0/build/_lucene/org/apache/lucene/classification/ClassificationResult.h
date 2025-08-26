#ifndef org_apache_lucene_classification_ClassificationResult_H
#define org_apache_lucene_classification_ClassificationResult_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
    class Comparable;
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
            mid_init$_f15492e1b629b7a6,
            mid_assignedClass_4819806f62f1360a,
            mid_compareTo_1978019f1be667e7,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_score_6fb37e123fed7a1f,
            mid_toString_e7df854526d67fa3,
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
