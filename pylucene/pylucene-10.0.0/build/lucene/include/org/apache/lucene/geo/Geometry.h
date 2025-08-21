#ifndef org_apache_lucene_geo_Geometry_H
#define org_apache_lucene_geo_Geometry_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Geometry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_toComponent2D_2671ab2559e4bc09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geometry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geometry(const Geometry& obj) : ::java::lang::Object(obj) {}

          Geometry();
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
        extern PyType_Def PY_TYPE_DEF(Geometry);
        extern PyTypeObject *PY_TYPE(Geometry);

        class t_Geometry {
        public:
          PyObject_HEAD
          Geometry object;
          static PyObject *wrap_Object(const Geometry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
