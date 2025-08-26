#ifndef org_apache_lucene_document_DoubleField_H
#define org_apache_lucene_document_DoubleField_H

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

        class DoubleField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_c132e8f4becf7aa6,
            mid_binaryValue_adbedbc1fa61c358,
            mid_newExactQuery_38d35640db112494,
            mid_newRangeQuery_ff2ac9f72c2e19d4,
            mid_newSetQuery_64540f129849c16a,
            mid_newSortField_0edd70834183cd64,
            mid_setDoubleValue_a03f734ddaeb69b4,
            mid_setLongValue_1d3149fac12f2af3,
            mid_storedValue_71ce58210dba1993,
            mid_toString_e7df854526d67fa3,
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
