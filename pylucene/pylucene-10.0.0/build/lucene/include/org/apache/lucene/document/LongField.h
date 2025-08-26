#ifndef org_apache_lucene_document_LongField_H
#define org_apache_lucene_document_LongField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class StoredValue;
        class Field$Store;
      }
      namespace search {
        class Query;
        class SortedNumericSelector$Type;
        class SortField;
      }
      namespace util {
        class BytesRef;
      }
    }
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
            mid_init$_7c430675c6632d47,
            mid_binaryValue_adbedbc1fa61c358,
            mid_newDistanceFeatureQuery_1ad6f1bc3c7f80e0,
            mid_newExactQuery_98e0283bae36d37a,
            mid_newRangeQuery_d24bb07db2b1e6e7,
            mid_newSetQuery_bf074e07e7c212d7,
            mid_newSortField_0edd70834183cd64,
            mid_setLongValue_1d3149fac12f2af3,
            mid_storedValue_71ce58210dba1993,
            mid_toString_e7df854526d67fa3,
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
