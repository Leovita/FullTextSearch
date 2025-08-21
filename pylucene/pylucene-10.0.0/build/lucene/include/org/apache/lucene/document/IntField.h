#ifndef org_apache_lucene_document_IntField_H
#define org_apache_lucene_document_IntField_H

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

        class IntField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_aadce0a34c4b8fb2,
            mid_binaryValue_9740fddd1c7df148,
            mid_newExactQuery_f6c055cd1516634d,
            mid_newRangeQuery_7938124443e4ab73,
            mid_newSetQuery_abd436110bd94118,
            mid_newSortField_5b850b28323a3ff9,
            mid_setIntValue_540b2b23d51b1efd,
            mid_storedValue_c117239a18be2fcb,
            mid_toString_09a7afff1868fc5e,
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
