#ifndef org_apache_lucene_spatial3d_geom_LatLonBounds_H
#define org_apache_lucene_spatial3d_geom_LatLonBounds_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Double;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Membership;
          class Bounds;
          class GeoPoint;
          class PlanetModel;
          class Plane;
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

          class LatLonBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_addHorizontalPlane_745d4f480071b0dc,
              mid_addIntersection_b47fb6a0917837bb,
              mid_addPlane_2d8ce33354f55c61,
              mid_addPoint_0b65f1ac399500f3,
              mid_addVerticalPlane_745d4f480071b0dc,
              mid_addXValue_0b65f1ac399500f3,
              mid_addYValue_0b65f1ac399500f3,
              mid_addZValue_0b65f1ac399500f3,
              mid_checkNoBottomLatitudeBound_9aa4f33e82ea333f,
              mid_checkNoLongitudeBound_9aa4f33e82ea333f,
              mid_checkNoTopLatitudeBound_9aa4f33e82ea333f,
              mid_getLeftLongitude_4708af7d5ba009e9,
              mid_getMaxLatitude_4708af7d5ba009e9,
              mid_getMinLatitude_4708af7d5ba009e9,
              mid_getRightLongitude_4708af7d5ba009e9,
              mid_isWide_57bc77a77a7927f9,
              mid_noBottomLatitudeBound_57bc77a77a7927f9,
              mid_noBound_2b87fb506197c30d,
              mid_noLongitudeBound_57bc77a77a7927f9,
              mid_noTopLatitudeBound_57bc77a77a7927f9,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LatLonBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LatLonBounds(const LatLonBounds& obj) : ::java::lang::Object(obj) {}

            LatLonBounds();

            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jboolean checkNoBottomLatitudeBound() const;
            jboolean checkNoLongitudeBound() const;
            jboolean checkNoTopLatitudeBound() const;
            ::java::lang::Double getLeftLongitude() const;
            ::java::lang::Double getMaxLatitude() const;
            ::java::lang::Double getMinLatitude() const;
            ::java::lang::Double getRightLongitude() const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(LatLonBounds);
          extern PyTypeObject *PY_TYPE(LatLonBounds);

          class t_LatLonBounds {
          public:
            PyObject_HEAD
            LatLonBounds object;
            static PyObject *wrap_Object(const LatLonBounds&);
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
