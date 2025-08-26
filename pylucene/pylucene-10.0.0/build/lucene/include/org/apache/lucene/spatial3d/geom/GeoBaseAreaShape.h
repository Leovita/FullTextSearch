#ifndef org_apache_lucene_spatial3d_geom_GeoBaseAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseMembershipShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class GeoAreaShape;
          class PlanetModel;
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

          class GeoBaseAreaShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseMembershipShape {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_getRelationship_45c244038f50cef7,
              mid_isShapeInsideGeoAreaShape_45c244038f50cef7,
              mid_isGeoAreaShapeInsideShape_45c244038f50cef7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseAreaShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseMembershipShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseAreaShape(const GeoBaseAreaShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseMembershipShape(obj) {}

            GeoBaseAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseAreaShape);
          extern PyTypeObject *PY_TYPE(GeoBaseAreaShape);

          class t_GeoBaseAreaShape {
          public:
            PyObject_HEAD
            GeoBaseAreaShape object;
            static PyObject *wrap_Object(const GeoBaseAreaShape&);
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
