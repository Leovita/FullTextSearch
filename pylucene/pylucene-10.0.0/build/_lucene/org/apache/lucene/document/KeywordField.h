#ifndef org_apache_lucene_document_KeywordField_H
#define org_apache_lucene_document_KeywordField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class StoredValue;
        class Field$Store;
        class InvertableType;
      }
      namespace search {
        class Query;
        class SortedSetSelector$Type;
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

        class KeywordField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_208c8c03d7588cd3,
            mid_init$_6d201cd5adc8c8a8,
            mid_binaryValue_adbedbc1fa61c358,
            mid_invertableType_6d1985fbf4a5f74d,
            mid_newExactQuery_550dcf54034665c0,
            mid_newExactQuery_d00347c545665303,
            mid_newSetQuery_525d6c1fce01d552,
            mid_newSortField_3a0a2bd2be182cfd,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setStringValue_ee46a189998009d6,
            mid_storedValue_71ce58210dba1993,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KeywordField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KeywordField(const KeywordField& obj) : ::org::apache::lucene::document::Field(obj) {}

          KeywordField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &);
          KeywordField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::document::InvertableType invertableType() const;
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const ::java::lang::String &);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static ::org::apache::lucene::search::SortField newSortField(const ::java::lang::String &, jboolean, const ::org::apache::lucene::search::SortedSetSelector$Type &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setStringValue(const ::java::lang::String &) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
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
        extern PyType_Def PY_TYPE_DEF(KeywordField);
        extern PyTypeObject *PY_TYPE(KeywordField);

        class t_KeywordField {
        public:
          PyObject_HEAD
          KeywordField object;
          static PyObject *wrap_Object(const KeywordField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
