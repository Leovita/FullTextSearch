#ifndef org_apache_lucene_document_ShapeField$Triangle_H
#define org_apache_lucene_document_ShapeField$Triangle_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeField$Triangle : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_setTriangleValue_e173cfb41df648d9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeField$Triangle(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeField$Triangle(const ShapeField$Triangle& obj) : ::org::apache::lucene::document::Field(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(ShapeField$Triangle);
        extern PyTypeObject *PY_TYPE(ShapeField$Triangle);

        class t_ShapeField$Triangle {
        public:
          PyObject_HEAD
          ShapeField$Triangle object;
          static PyObject *wrap_Object(const ShapeField$Triangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
