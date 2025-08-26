#ifndef org_apache_lucene_document_TextField_H
#define org_apache_lucene_document_TextField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace document {
        class StoredValue;
        class Field$Store;
        class FieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class TextField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_695328e8af0f010c,
            mid_init$_26d653cae6fc9deb,
            mid_init$_208c8c03d7588cd3,
            mid_setStringValue_ee46a189998009d6,
            mid_storedValue_71ce58210dba1993,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TextField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TextField(const TextField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE_NOT_STORED;
          static ::org::apache::lucene::document::FieldType *TYPE_STORED;

          TextField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &);
          TextField(const ::java::lang::String &, const ::java::io::Reader &);
          TextField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::Field$Store &);

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
        extern PyType_Def PY_TYPE_DEF(TextField);
        extern PyTypeObject *PY_TYPE(TextField);

        class t_TextField {
        public:
          PyObject_HEAD
          TextField object;
          static PyObject *wrap_Object(const TextField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
