#ifndef org_apache_lucene_spatial3d_geom_LatLonBounds_H
#define org_apache_lucene_spatial3d_geom_LatLonBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class Membership;
          class GeoPoint;
          class PlanetModel;
          class Bounds;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Double;
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
              mid_init$_3720c61b0679eb3e,
              mid_addHorizontalPlane_a7e4b546e597b400,
              mid_addIntersection_35219b12859162fe,
              mid_addPlane_15a21c9a9d113d9d,
              mid_addPoint_7d64811057c15b25,
              mid_addVerticalPlane_a7e4b546e597b400,
              mid_addXValue_7d64811057c15b25,
              mid_addYValue_7d64811057c15b25,
              mid_addZValue_7d64811057c15b25,
              mid_checkNoBottomLatitudeBound_947277eca0748c4e,
              mid_checkNoLongitudeBound_947277eca0748c4e,
              mid_checkNoTopLatitudeBound_947277eca0748c4e,
              mid_getLeftLongitude_3427789f502c230e,
              mid_getMaxLatitude_3427789f502c230e,
              mid_getMinLatitude_3427789f502c230e,
              mid_getRightLongitude_3427789f502c230e,
              mid_isWide_9df9bcb078900198,
              mid_noBottomLatitudeBound_9df9bcb078900198,
              mid_noBound_44b667a391f02bb2,
              mid_noLongitudeBound_9df9bcb078900198,
              mid_noTopLatitudeBound_9df9bcb078900198,
              mid_toString_09a7afff1868fc5e,
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
