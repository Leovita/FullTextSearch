#ifndef org_apache_lucene_document_KeywordField_H
#define org_apache_lucene_document_KeywordField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class SortedSetSelector$Type;
        class SortField;
      }
      namespace util {
        class BytesRef;
      }
      namespace document {
        class InvertableType;
        class StoredValue;
        class Field$Store;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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

        class KeywordField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_4668a15176c0aebf,
            mid_init$_660b532f87158510,
            mid_binaryValue_9740fddd1c7df148,
            mid_invertableType_72515c0beb0174e7,
            mid_newExactQuery_9c67907ed0ac8b67,
            mid_newExactQuery_1d6b931a26bb0724,
            mid_newSetQuery_9484176e9ce4ba1f,
            mid_newSortField_0ef22962f380ac1f,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setStringValue_0d82408c6e55bc30,
            mid_storedValue_c117239a18be2fcb,
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
