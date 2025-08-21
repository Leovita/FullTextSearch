#ifndef org_apache_lucene_document_ShapeField$DecodedTriangle$TYPE_H
#define org_apache_lucene_document_ShapeField$DecodedTriangle$TYPE_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeField$DecodedTriangle$TYPE : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_580de747d2f30fac,
            mid_values_bf8c3e27268d45ab,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeField$DecodedTriangle$TYPE(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeField$DecodedTriangle$TYPE(const ShapeField$DecodedTriangle$TYPE& obj) : ::java::lang::Enum(obj) {}

          static ShapeField$DecodedTriangle$TYPE *LINE;
          static ShapeField$DecodedTriangle$TYPE *POINT;
          static ShapeField$DecodedTriangle$TYPE *TRIANGLE;

          static ShapeField$DecodedTriangle$TYPE valueOf(const ::java::lang::String &);
          static JArray< ShapeField$DecodedTriangle$TYPE > values();
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
        extern PyType_Def PY_TYPE_DEF(ShapeField$DecodedTriangle$TYPE);
        extern PyTypeObject *PY_TYPE(ShapeField$DecodedTriangle$TYPE);

        class t_ShapeField$DecodedTriangle$TYPE {
        public:
          PyObject_HEAD
          ShapeField$DecodedTriangle$TYPE object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ShapeField$DecodedTriangle$TYPE *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ShapeField$DecodedTriangle$TYPE&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ShapeField$DecodedTriangle$TYPE&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
