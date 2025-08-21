#ifndef org_apache_lucene_document_NumericDocValuesField_H
#define org_apache_lucene_document_NumericDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
        class NumericDocValuesField;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class NumericDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_2664307d783e499f,
            mid_init$_97897a260b413071,
            mid_indexedField_b379ff0552bb3c3a,
            mid_newSlowExactQuery_cb577c99d891ea6f,
            mid_newSlowRangeQuery_d94de4eddd72517b,
            mid_newSlowSetQuery_b01e10398514ec4c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NumericDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NumericDocValuesField(const NumericDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          NumericDocValuesField(const ::java::lang::String &, const ::java::lang::Long &);
          NumericDocValuesField(const ::java::lang::String &, jlong);

          static NumericDocValuesField indexedField(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newSlowExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newSlowRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSlowSetQuery(const ::java::lang::String &, const JArray< jlong > &);
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
        extern PyType_Def PY_TYPE_DEF(NumericDocValuesField);
        extern PyTypeObject *PY_TYPE(NumericDocValuesField);

        class t_NumericDocValuesField {
        public:
          PyObject_HEAD
          NumericDocValuesField object;
          static PyObject *wrap_Object(const NumericDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
