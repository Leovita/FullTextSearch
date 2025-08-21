#ifndef org_apache_lucene_document_FloatField_H
#define org_apache_lucene_document_FloatField_H

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

        class FloatField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_d11653e5bc07d27a,
            mid_binaryValue_9740fddd1c7df148,
            mid_newExactQuery_bcda6f27d927f58d,
            mid_newRangeQuery_e6e7dae2179dd4df,
            mid_newSetQuery_6614d99324241fad,
            mid_newSortField_5b850b28323a3ff9,
            mid_setFloatValue_c771a95b0227fb6a,
            mid_setLongValue_8b3d46852b435a94,
            mid_storedValue_c117239a18be2fcb,
            mid_toString_09a7afff1868fc5e,
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
