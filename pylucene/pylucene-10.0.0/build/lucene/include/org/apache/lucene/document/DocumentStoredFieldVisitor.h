#ifndef org_apache_lucene_document_DocumentStoredFieldVisitor_H
#define org_apache_lucene_document_DocumentStoredFieldVisitor_H

#include "org/apache/lucene/index/StoredFieldVisitor.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor$Status;
        class FieldInfo;
      }
      namespace document {
        class Document;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DocumentStoredFieldVisitor : public ::org::apache::lucene::index::StoredFieldVisitor {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_1f90f2fcbe43e50d,
            mid_init$_478519f7d4301fc7,
            mid_binaryField_60cae6b96c4b3d24,
            mid_doubleField_a4548d4d49fe5baf,
            mid_floatField_2e0b4786b01c00c5,
            mid_getDocument_cc154206ff4e754b,
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

          explicit DocumentStoredFieldVisitor(jobject obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocumentStoredFieldVisitor(const DocumentStoredFieldVisitor& obj) : ::org::apache::lucene::index::StoredFieldVisitor(obj) {}

          DocumentStoredFieldVisitor();
          DocumentStoredFieldVisitor(const JArray< ::java::lang::String > &);
          DocumentStoredFieldVisitor(const ::java::util::Set &);

          void binaryField(const ::org::apache::lucene::index::FieldInfo &, const JArray< jbyte > &) const;
          void doubleField(const ::org::apache::lucene::index::FieldInfo &, jdouble) const;
          void floatField(const ::org::apache::lucene::index::FieldInfo &, jfloat) const;
          ::org::apache::lucene::document::Document getDocument() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DocumentStoredFieldVisitor);
        extern PyTypeObject *PY_TYPE(DocumentStoredFieldVisitor);

        class t_DocumentStoredFieldVisitor {
        public:
          PyObject_HEAD
          DocumentStoredFieldVisitor object;
          static PyObject *wrap_Object(const DocumentStoredFieldVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
