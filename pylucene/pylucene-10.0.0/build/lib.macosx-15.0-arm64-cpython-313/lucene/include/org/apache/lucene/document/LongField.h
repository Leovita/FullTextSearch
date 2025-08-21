#ifndef org_apache_lucene_document_LongField_H
#define org_apache_lucene_document_LongField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class SortedNumericSelector$Type;
        class SortField;
      }
      namespace util {
        class BytesRef;
      }
      namespace document {
        class StoredValue;
        class Field$Store;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LongField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_e44bef3408dd7416,
            mid_binaryValue_9740fddd1c7df148,
            mid_newDistanceFeatureQuery_8e8f93a33e8b5295,
            mid_newExactQuery_cb577c99d891ea6f,
            mid_newRangeQuery_d94de4eddd72517b,
            mid_newSetQuery_b01e10398514ec4c,
            mid_newSortField_5b850b28323a3ff9,
            mid_setLongValue_8b3d46852b435a94,
            mid_storedValue_c117239a18be2fcb,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongField(const LongField& obj) : ::org::apache::lucene::document::Field(obj) {}

          LongField(const ::java::lang::String &, jlong, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jlong, jlong);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jlong > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setLongValue(jlong) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LongField);
        extern PyTypeObject *PY_TYPE(LongField);

        class t_LongField {
        public:
          PyObject_HEAD
          LongField object;
          static PyObject *wrap_Object(const LongField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
