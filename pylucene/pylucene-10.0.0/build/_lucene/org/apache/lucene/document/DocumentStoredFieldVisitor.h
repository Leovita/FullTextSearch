#ifndef org_apache_lucene_document_DocumentStoredFieldVisitor_H
#define org_apache_lucene_document_DocumentStoredFieldVisitor_H

#include "org/apache/lucene/index/StoredFieldVisitor.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class FieldInfo;
        class StoredFieldVisitor$Status;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_ce41e621b30e91b1,
            mid_init$_1d5d4c6f11d1b2ab,
            mid_binaryField_81aec706077de3c8,
            mid_doubleField_15da8d9582fee97c,
            mid_floatField_013aff7dc250536b,
            mid_getDocument_942036688bffb03f,
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
