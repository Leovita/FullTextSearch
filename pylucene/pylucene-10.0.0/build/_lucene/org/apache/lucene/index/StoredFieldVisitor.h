#ifndef org_apache_lucene_index_StoredFieldVisitor_H
#define org_apache_lucene_index_StoredFieldVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
      namespace index {
        class FieldInfo;
        class StoredFieldVisitor$Status;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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
      namespace index {

        class StoredFieldVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_binaryField_81aec706077de3c8,
            mid_binaryField_92fc605968dd3891,
            mid_doubleField_15da8d9582fee97c,
            mid_floatField_013aff7dc250536b,
            mid_intField_484c149275e4150c,
            mid_longField_9d67b99cda581cf2,
            mid_needsField_669f7cdbb6cf6bde,
            mid_stringField_5c9f933456c04469,
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
