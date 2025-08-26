#ifndef org_apache_lucene_document_SortedDocValuesField_H
#define org_apache_lucene_document_SortedDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class SortedDocValuesField;
        class FieldType;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class SortedDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a9a308f8485c52c9,
            mid_indexedField_8ed6dccf3416b6c3,
            mid_newSlowExactQuery_d00347c545665303,
            mid_newSlowRangeQuery_0c1bb46a77606d9e,
            mid_newSlowSetQuery_525d6c1fce01d552,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedDocValuesField(const SortedDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          SortedDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

          static SortedDocValuesField indexedField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newSlowExactQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newSlowRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
          static ::org::apache::lucene::search::Query newSlowSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(SortedDocValuesField);
        extern PyTypeObject *PY_TYPE(SortedDocValuesField);

        class t_SortedDocValuesField {
        public:
          PyObject_HEAD
          SortedDocValuesField object;
          static PyObject *wrap_Object(const SortedDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
