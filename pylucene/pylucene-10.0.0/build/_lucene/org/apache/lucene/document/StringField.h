#ifndef org_apache_lucene_document_StringField_H
#define org_apache_lucene_document_StringField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType;
        class InvertableType;
        class StoredValue;
        class Field$Store;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StringField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_4668a15176c0aebf,
            mid_init$_660b532f87158510,
            mid_binaryValue_9740fddd1c7df148,
            mid_invertableType_72515c0beb0174e7,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setStringValue_0d82408c6e55bc30,
            mid_storedValue_c117239a18be2fcb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringField(const StringField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          StringField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &);
          StringField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::Field$Store &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::document::InvertableType invertableType() const;
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
        extern PyType_Def PY_TYPE_DEF(StringField);
        extern PyTypeObject *PY_TYPE(StringField);

        class t_StringField {
        public:
          PyObject_HEAD
          StringField object;
          static PyObject *wrap_Object(const StringField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
