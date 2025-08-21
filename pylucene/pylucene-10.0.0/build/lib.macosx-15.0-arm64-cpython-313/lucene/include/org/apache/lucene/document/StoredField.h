#ifndef org_apache_lucene_document_StoredField_H
#define org_apache_lucene_document_StoredField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class FieldType;
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
    class CharSequence;
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
            mid_init$_385c741f3858c842,
            mid_init$_3d104da0b5c75e64,
            mid_init$_45ab94acb6ed83e4,
            mid_init$_8c2de08a6e50677a,
            mid_init$_6dcb8454f5b3a033,
            mid_init$_a5140b013bba694a,
            mid_init$_97897a260b413071,
            mid_init$_3d80e49c849e130d,
            mid_init$_c6efcf6eeead5d14,
            mid_init$_9533b3433dece9c3,
            mid_init$_524c03444ef7868a,
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
