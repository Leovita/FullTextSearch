#ifndef org_apache_lucene_geo_XYGeometry_H
#define org_apache_lucene_geo_XYGeometry_H

#include "org/apache/lucene/geo/Geometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Component2D;
        class XYGeometry;
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
      namespace geo {

        class XYGeometry : public ::org::apache::lucene::geo::Geometry {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_create_8088ec2f530db546,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYGeometry(jobject obj) : ::org::apache::lucene::geo::Geometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYGeometry(const XYGeometry& obj) : ::org::apache::lucene::geo::Geometry(obj) {}

          XYGeometry();

          static ::org::apache::lucene::geo::Component2D create(const JArray< XYGeometry > &);
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
        extern PyType_Def PY_TYPE_DEF(XYGeometry);
        extern PyTypeObject *PY_TYPE(XYGeometry);

        class t_XYGeometry {
        public:
          PyObject_HEAD
          XYGeometry object;
          static PyObject *wrap_Object(const XYGeometry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
