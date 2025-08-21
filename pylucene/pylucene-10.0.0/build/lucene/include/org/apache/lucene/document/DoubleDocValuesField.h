#ifndef org_apache_lucene_document_DoubleDocValuesField_H
#define org_apache_lucene_document_DoubleDocValuesField_H

#include "org/apache/lucene/document/NumericDocValuesField.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DoubleDocValuesField : public ::org::apache::lucene::document::NumericDocValuesField {
         public:
          enum {
            mid_init$_8c2de08a6e50677a,
            mid_setDoubleValue_b5bc1a2fb9ff9e90,
            mid_setLongValue_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleDocValuesField(jobject obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleDocValuesField(const DoubleDocValuesField& obj) : ::org::apache::lucene::document::NumericDocValuesField(obj) {}

          DoubleDocValuesField(const ::java::lang::String &, jdouble);

          void setDoubleValue(jdouble) const;
          void setLongValue(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DoubleDocValuesField);
        extern PyTypeObject *PY_TYPE(DoubleDocValuesField);

        class t_DoubleDocValuesField {
        public:
          PyObject_HEAD
          DoubleDocValuesField object;
          static PyObject *wrap_Object(const DoubleDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
