#ifndef org_apache_lucene_spatial3d_geom_GeoAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoMembershipShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class GeoArea;
        }
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
      namespace spatial3d {
        namespace geom {

          class GeoAreaShape : public ::org::apache::lucene::spatial3d::geom::GeoMembershipShape {
           public:
            enum {
              mid_intersects_9d5b040d556fdb23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoAreaShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoMembershipShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoAreaShape(const GeoAreaShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoMembershipShape(obj) {}

            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
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
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(GeoAreaShape);
          extern PyTypeObject *PY_TYPE(GeoAreaShape);

          class t_GeoAreaShape {
          public:
            PyObject_HEAD
            GeoAreaShape object;
            static PyObject *wrap_Object(const GeoAreaShape&);
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
