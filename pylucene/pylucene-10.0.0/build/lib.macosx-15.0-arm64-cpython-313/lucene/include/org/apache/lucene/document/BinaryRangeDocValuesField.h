#ifndef org_apache_lucene_document_BinaryRangeDocValuesField_H
#define org_apache_lucene_document_BinaryRangeDocValuesField_H

#include "org/apache/lucene/document/BinaryDocValuesField.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class BinaryRangeDocValuesField : public ::org::apache::lucene::document::BinaryDocValuesField {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryRangeDocValuesField(jobject obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryRangeDocValuesField(const BinaryRangeDocValuesField& obj) : ::org::apache::lucene::document::BinaryDocValuesField(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(BinaryRangeDocValuesField);
        extern PyTypeObject *PY_TYPE(BinaryRangeDocValuesField);

        class t_BinaryRangeDocValuesField {
        public:
          PyObject_HEAD
          BinaryRangeDocValuesField object;
          static PyObject *wrap_Object(const BinaryRangeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
