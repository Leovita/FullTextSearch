#ifndef org_apache_lucene_misc_document_LazyDocument_H
#define org_apache_lucene_misc_document_LazyDocument_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class FieldInfo;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace document {

          class LazyDocument : public ::java::lang::Object {
           public:
            enum {
              mid_init$_80cf64f87a30d001,
              mid_getField_df69c9938d2a264f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LazyDocument(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LazyDocument(const LazyDocument& obj) : ::java::lang::Object(obj) {}

            LazyDocument(const ::org::apache::lucene::index::IndexReader &, jint);

            ::org::apache::lucene::index::IndexableField getField(const ::org::apache::lucene::index::FieldInfo &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(LazyDocument);
          extern PyTypeObject *PY_TYPE(LazyDocument);

          class t_LazyDocument {
          public:
            PyObject_HEAD
            LazyDocument object;
            static PyObject *wrap_Object(const LazyDocument&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
