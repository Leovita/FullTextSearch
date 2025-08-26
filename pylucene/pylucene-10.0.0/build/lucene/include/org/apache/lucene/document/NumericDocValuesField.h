#ifndef org_apache_lucene_document_NumericDocValuesField_H
#define org_apache_lucene_document_NumericDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class Long;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class NumericDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_f7a1d153300f52f0,
            mid_init$_eff9bbbaf264de7f,
            mid_indexedField_16e6e1cc2967e4d9,
            mid_newSlowExactQuery_98e0283bae36d37a,
            mid_newSlowRangeQuery_d24bb07db2b1e6e7,
            mid_newSlowSetQuery_bf074e07e7c212d7,
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
