#ifndef org_apache_lucene_document_FloatField_H
#define org_apache_lucene_document_FloatField_H

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

        class FloatField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_fa1421f114834385,
            mid_binaryValue_adbedbc1fa61c358,
            mid_newExactQuery_bde45c78fff9161d,
            mid_newRangeQuery_d4cf9dd160b804b6,
            mid_newSetQuery_65301ded65c7e90a,
            mid_newSortField_0edd70834183cd64,
            mid_setFloatValue_675f4cb9a2529ee0,
            mid_setLongValue_1d3149fac12f2af3,
            mid_storedValue_71ce58210dba1993,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatField(const FloatField& obj) : ::org::apache::lucene::document::Field(obj) {}

          FloatField(const ::java::lang::String &, jfloat, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setFloatValue(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatField);
        extern PyTypeObject *PY_TYPE(FloatField);

        class t_FloatField {
        public:
          PyObject_HEAD
          FloatField object;
          static PyObject *wrap_Object(const FloatField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
