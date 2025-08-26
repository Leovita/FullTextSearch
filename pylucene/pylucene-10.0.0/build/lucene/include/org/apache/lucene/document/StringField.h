#ifndef org_apache_lucene_document_StringField_H
#define org_apache_lucene_document_StringField_H

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
        class InvertableType;
        class FieldType;
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

        class StringField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_208c8c03d7588cd3,
            mid_init$_6d201cd5adc8c8a8,
            mid_binaryValue_adbedbc1fa61c358,
            mid_invertableType_6d1985fbf4a5f74d,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setStringValue_ee46a189998009d6,
            mid_storedValue_71ce58210dba1993,
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
