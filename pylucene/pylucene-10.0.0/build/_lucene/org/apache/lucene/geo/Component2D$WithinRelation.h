#ifndef org_apache_lucene_geo_Component2D$WithinRelation_H
#define org_apache_lucene_geo_Component2D$WithinRelation_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Component2D$WithinRelation;
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
      namespace geo {

        class Component2D$WithinRelation : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_bf43fe9594701b0a,
            mid_values_d8c914f3912cf9c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Component2D$WithinRelation(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Component2D$WithinRelation(const Component2D$WithinRelation& obj) : ::java::lang::Enum(obj) {}

          static Component2D$WithinRelation *CANDIDATE;
          static Component2D$WithinRelation *DISJOINT;
          static Component2D$WithinRelation *NOTWITHIN;

          static Component2D$WithinRelation valueOf(const ::java::lang::String &);
          static JArray< Component2D$WithinRelation > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Component2D$WithinRelation);
        extern PyTypeObject *PY_TYPE(Component2D$WithinRelation);

        class t_Component2D$WithinRelation {
        public:
          PyObject_HEAD
          Component2D$WithinRelation object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Component2D$WithinRelation *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Component2D$WithinRelation&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Component2D$WithinRelation&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
