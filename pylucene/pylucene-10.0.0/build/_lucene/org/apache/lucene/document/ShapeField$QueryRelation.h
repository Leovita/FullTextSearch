#ifndef org_apache_lucene_document_ShapeField$QueryRelation_H
#define org_apache_lucene_document_ShapeField$QueryRelation_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$QueryRelation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeField$QueryRelation : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_9b810472b9d901f1,
            mid_values_a2f86f3a95b2a2d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeField$QueryRelation(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeField$QueryRelation(const ShapeField$QueryRelation& obj) : ::java::lang::Enum(obj) {}

          static ShapeField$QueryRelation *CONTAINS;
          static ShapeField$QueryRelation *DISJOINT;
          static ShapeField$QueryRelation *INTERSECTS;
          static ShapeField$QueryRelation *WITHIN;

          static ShapeField$QueryRelation valueOf(const ::java::lang::String &);
          static JArray< ShapeField$QueryRelation > values();
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
        extern PyType_Def PY_TYPE_DEF(ShapeField$QueryRelation);
        extern PyTypeObject *PY_TYPE(ShapeField$QueryRelation);

        class t_ShapeField$QueryRelation {
        public:
          PyObject_HEAD
          ShapeField$QueryRelation object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ShapeField$QueryRelation *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ShapeField$QueryRelation&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ShapeField$QueryRelation&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
