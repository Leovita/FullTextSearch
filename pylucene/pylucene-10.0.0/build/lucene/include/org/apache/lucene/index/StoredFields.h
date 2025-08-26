#ifndef org_apache_lucene_index_StoredFields_H
#define org_apache_lucene_index_StoredFields_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class StoredFieldVisitor;
      }
      namespace document {
        class Document;
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
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StoredFields : public ::java::lang::Object {
         public:
          enum {
            mid_document_9aa9737cef56c986,
            mid_document_78d5bbf2e2144955,
            mid_document_22bc9f12f0b49d38,
            mid_prefetch_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFields(const StoredFields& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::document::Document document(jint) const;
          void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
          ::org::apache::lucene::document::Document document(jint, const ::java::util::Set &) const;
          void prefetch(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(StoredFields);
        extern PyTypeObject *PY_TYPE(StoredFields);

        class t_StoredFields {
        public:
          PyObject_HEAD
          StoredFields object;
          static PyObject *wrap_Object(const StoredFields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
