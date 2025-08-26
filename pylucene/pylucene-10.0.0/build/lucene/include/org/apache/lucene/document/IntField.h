#ifndef org_apache_lucene_document_IntField_H
#define org_apache_lucene_document_IntField_H

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

        class IntField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_499dedbcbd4dbe04,
            mid_binaryValue_adbedbc1fa61c358,
            mid_newExactQuery_5b565b82a300465b,
            mid_newRangeQuery_68a5297c1fffb8f4,
            mid_newSetQuery_c38bda0e634d1eef,
            mid_newSortField_0edd70834183cd64,
            mid_setIntValue_8226bd0b0fc13dba,
            mid_storedValue_71ce58210dba1993,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntField(const IntField& obj) : ::org::apache::lucene::document::Field(obj) {}

          IntField(const ::java::lang::String &, jint, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jint);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jint, jint);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jint > &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedNumericSelector$Type &);
          void setIntValue(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntField);
        extern PyTypeObject *PY_TYPE(IntField);

        class t_IntField {
        public:
          PyObject_HEAD
          IntField object;
          static PyObject *wrap_Object(const IntField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
