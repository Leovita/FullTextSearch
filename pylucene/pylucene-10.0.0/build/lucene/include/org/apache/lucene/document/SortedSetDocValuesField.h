#ifndef org_apache_lucene_document_SortedSetDocValuesField_H
#define org_apache_lucene_document_SortedSetDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class SortedSetDocValuesField;
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

        class SortedSetDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_a9a308f8485c52c9,
            mid_indexedField_176c16f42f7bce89,
            mid_newSlowExactQuery_d00347c545665303,
            mid_newSlowRangeQuery_0c1bb46a77606d9e,
            mid_newSlowSetQuery_525d6c1fce01d552,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedSetDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedSetDocValuesField(const SortedSetDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          SortedSetDocValuesField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

          static SortedSetDocValuesField indexedField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
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
        extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesField);
        extern PyTypeObject *PY_TYPE(SortedSetDocValuesField);

        class t_SortedSetDocValuesField {
        public:
          PyObject_HEAD
          SortedSetDocValuesField object;
          static PyObject *wrap_Object(const SortedSetDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
