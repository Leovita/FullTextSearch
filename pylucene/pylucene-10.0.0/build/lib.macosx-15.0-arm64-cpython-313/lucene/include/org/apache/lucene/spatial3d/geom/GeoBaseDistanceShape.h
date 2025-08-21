#ifndef org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseDistanceShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class PlanetModel;
          class GeoPoint;
          class Bounds;
          class DistanceStyle;
          class GeoDistanceShape;
        }
      }
    }
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
              mid_init$_b88e4aded392c9f4,
              mid_computeDeltaDistance_6635ccfc1ffc6db7,
              mid_computeDeltaDistance_843fc02405cdd09d,
              mid_computeDistance_6635ccfc1ffc6db7,
              mid_computeDistance_843fc02405cdd09d,
              mid_getDistanceBounds_c5f285fb01660151,
              mid_isWithin_d2545ca8f40aaba4,
              mid_deltaDistance_843fc02405cdd09d,
              mid_distanceBounds_c5f285fb01660151,
              mid_distance_843fc02405cdd09d,
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
