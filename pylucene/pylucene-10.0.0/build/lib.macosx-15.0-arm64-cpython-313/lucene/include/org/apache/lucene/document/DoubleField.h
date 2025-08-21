#ifndef org_apache_lucene_document_DoubleField_H
#define org_apache_lucene_document_DoubleField_H

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

        class DoubleField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a2e66b6478a3f3ad,
            mid_binaryValue_9740fddd1c7df148,
            mid_newExactQuery_c7a27db7697a3b7b,
            mid_newRangeQuery_af7ead373e629f65,
            mid_newSetQuery_d5601452d338b358,
            mid_newSortField_5b850b28323a3ff9,
            mid_setDoubleValue_b5bc1a2fb9ff9e90,
            mid_setLongValue_8b3d46852b435a94,
            mid_storedValue_c117239a18be2fcb,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoubleField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoubleField(const DoubleField& obj) : ::org::apache::lucene::document::Field(obj) {}

          DoubleField(const ::java::lang::String &, jdouble, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jdouble);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setDoubleValue(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(DoubleField);
        extern PyTypeObject *PY_TYPE(DoubleField);

        class t_DoubleField {
        public:
          PyObject_HEAD
          DoubleField object;
          static PyObject *wrap_Object(const DoubleField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
