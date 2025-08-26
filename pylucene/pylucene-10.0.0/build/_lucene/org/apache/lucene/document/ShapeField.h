#ifndef org_apache_lucene_document_ShapeField_H
#define org_apache_lucene_document_ShapeField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$DecodedTriangle;
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
      namespace document {

        class ShapeField : public ::java::lang::Object {
         public:
          enum {
            mid_decodeTriangle_2efa483d68cc77d6,
            mid_encodeTriangle_2599f6bf8fcfd992,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeField(const ShapeField& obj) : ::java::lang::Object(obj) {}

          static void decodeTriangle(const JArray< jbyte > &, const ::org::apache::lucene::document::ShapeField$DecodedTriangle &);
          static void encodeTriangle(const JArray< jbyte > &, jint, jint, jboolean, jint, jint, jboolean, jint, jint, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(ShapeField);
        extern PyTypeObject *PY_TYPE(ShapeField);

        class t_ShapeField {
        public:
          PyObject_HEAD
          ShapeField object;
          static PyObject *wrap_Object(const ShapeField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
