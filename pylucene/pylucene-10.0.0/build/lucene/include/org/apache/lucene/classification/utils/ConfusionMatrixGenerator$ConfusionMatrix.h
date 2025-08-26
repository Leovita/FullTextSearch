#ifndef org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H
#define org_apache_lucene_classification_utils_ConfusionMatrixGenerator$ConfusionMatrix_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Long;
    class Class;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {

          class ConfusionMatrixGenerator$ConfusionMatrix : public ::java::lang::Object {
           public:
            enum {
              mid_getAccuracy_6fb37e123fed7a1f,
              mid_getAvgClassificationTime_6fb37e123fed7a1f,
              mid_getF1Measure_6fb37e123fed7a1f,
              mid_getF1Measure_168823f4bbdbe3fd,
              mid_getLinearizedMatrix_5004bdf19ed33453,
              mid_getNumberOfEvaluatedDocs_bd89ce15dad49192,
              mid_getPrecision_6fb37e123fed7a1f,
              mid_getPrecision_168823f4bbdbe3fd,
              mid_getRecall_6fb37e123fed7a1f,
              mid_getRecall_168823f4bbdbe3fd,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConfusionMatrixGenerator$ConfusionMatrix(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConfusionMatrixGenerator$ConfusionMatrix(const ConfusionMatrixGenerator$ConfusionMatrix& obj) : ::java::lang::Object(obj) {}

            jdouble getAccuracy() const;
            jdouble getAvgClassificationTime() const;
            jdouble getF1Measure() const;
            jdouble getF1Measure(const ::java::lang::String &) const;
            ::java::util::Map getLinearizedMatrix() const;
            jint getNumberOfEvaluatedDocs() const;
            jdouble getPrecision() const;
            jdouble getPrecision(const ::java::lang::String &) const;
            jdouble getRecall() const;
            jdouble getRecall(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {
          extern PyType_Def PY_TYPE_DEF(ConfusionMatrixGenerator$ConfusionMatrix);
          extern PyTypeObject *PY_TYPE(ConfusionMatrixGenerator$ConfusionMatrix);

          class t_ConfusionMatrixGenerator$ConfusionMatrix {
          public:
            PyObject_HEAD
            ConfusionMatrixGenerator$ConfusionMatrix object;
            static PyObject *wrap_Object(const ConfusionMatrixGenerator$ConfusionMatrix&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
