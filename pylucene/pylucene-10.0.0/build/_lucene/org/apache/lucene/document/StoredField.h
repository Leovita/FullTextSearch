#ifndef org_apache_lucene_document_StoredField_H
#define org_apache_lucene_document_StoredField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
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

        class StoredField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_fab4d66163274131,
            mid_init$_0dd012a11c3f389b,
            mid_init$_a9a308f8485c52c9,
            mid_init$_dbeaa7d1faf6f28f,
            mid_init$_de2cd726ee164772,
            mid_init$_49e27e98009acf15,
            mid_init$_eff9bbbaf264de7f,
            mid_init$_babb726437518956,
            mid_init$_da5bb9d63a7ae89c,
            mid_init$_8b9d08c3ef034572,
            mid_init$_2adea7b4f952819b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredField(const StoredField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          StoredField(const ::java::lang::String &, const JArray< jbyte > &);
          StoredField(const ::java::lang::String &, const ::java::lang::String &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          StoredField(const ::java::lang::String &, jdouble);
          StoredField(const ::java::lang::String &, jfloat);
          StoredField(const ::java::lang::String &, jint);
          StoredField(const ::java::lang::String &, jlong);
          StoredField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::document::FieldType &);
          StoredField(const ::java::lang::String &, const JArray< jbyte > &, jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(StoredField);
        extern PyTypeObject *PY_TYPE(StoredField);

        class t_StoredField {
        public:
          PyObject_HEAD
          StoredField object;
          static PyObject *wrap_Object(const StoredField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
