#ifndef org_apache_lucene_index_StoredFieldVisitor_H
#define org_apache_lucene_index_StoredFieldVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
      }
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StoredFieldVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_binaryField_60cae6b96c4b3d24,
            mid_binaryField_9153e2511ce70f07,
            mid_doubleField_a4548d4d49fe5baf,
            mid_floatField_2e0b4786b01c00c5,
            mid_intField_7da17ba798519794,
            mid_longField_4573144ea666abda,
            mid_needsField_e8318e220f0d744b,
            mid_stringField_23bd4f2f5dbee707,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldVisitor(const StoredFieldVisitor& obj) : ::java::lang::Object(obj) {}

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::store::DataInput &, jint) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          void intField(const ::org::apache::lucene::index::FieldInfo &, jint) const;
          void longField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
          ::org::apache::lucene::index::StoredFieldVisitor$Status needsField(const ::org::apache::lucene::index::FieldInfo &) const;
          void stringField(const ::org::apache::lucene::index::FieldInfo &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(StoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(StoredFieldVisitor);

        class t_StoredFieldVisitor {
        public:
          PyObject_HEAD
          StoredFieldVisitor object;
          static PyObject *wrap_Object(const StoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
