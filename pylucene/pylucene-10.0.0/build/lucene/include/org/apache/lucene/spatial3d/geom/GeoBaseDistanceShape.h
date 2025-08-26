#ifndef org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class GeoDistanceShape;
          class Bounds;
          class PlanetModel;
          class DistanceStyle;
          class GeoPoint;
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

          class GeoBaseDistanceShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_computeDeltaDistance_c279193319e1a46c,
              mid_computeDeltaDistance_79a34b4fe77da1ae,
              mid_computeDistance_c279193319e1a46c,
              mid_computeDistance_79a34b4fe77da1ae,
              mid_getDistanceBounds_13d4518d2e258a7e,
              mid_isWithin_f78acf28287584e8,
              mid_deltaDistance_79a34b4fe77da1ae,
              mid_distanceBounds_13d4518d2e258a7e,
              mid_distance_79a34b4fe77da1ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseDistanceShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseDistanceShape(const GeoBaseDistanceShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseAreaShape(obj) {}

            GeoBaseDistanceShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            void getDistanceBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &, const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseDistanceShape);
          extern PyTypeObject *PY_TYPE(GeoBaseDistanceShape);

          class t_GeoBaseDistanceShape {
          public:
            PyObject_HEAD
            GeoBaseDistanceShape object;
            static PyObject *wrap_Object(const GeoBaseDistanceShape&);
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
