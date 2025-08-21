#ifndef org_apache_lucene_index_StoredFields_H
#define org_apache_lucene_index_StoredFields_H

#include "java/lang/Object.h"

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
      namespace document {
        class Document;
      }
      namespace index {
        class StoredFieldVisitor;
      }
    }
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
            mid_document_8c1712391a08c567,
            mid_document_94ed5009dd10cb1f,
            mid_document_514d263b59fa481e,
            mid_prefetch_540b2b23d51b1efd,
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
