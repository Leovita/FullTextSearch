#ifndef org_apache_lucene_spatial3d_geom_XYZBounds_H
#define org_apache_lucene_spatial3d_geom_XYZBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class XYZBounds;
          class Vector;
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

          class XYZBounds : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_addBounds_eb94395ef689c590,
              mid_addHorizontalPlane_a7e4b546e597b400,
              mid_addIntersection_35219b12859162fe,
              mid_addPlane_15a21c9a9d113d9d,
              mid_addPoint_7d64811057c15b25,
              mid_addVerticalPlane_a7e4b546e597b400,
              mid_addXValue_7d64811057c15b25,
              mid_addXValue_d3c7115e9474656f,
              mid_addYValue_7d64811057c15b25,
              mid_addYValue_d3c7115e9474656f,
              mid_addZValue_7d64811057c15b25,
              mid_addZValue_d3c7115e9474656f,
              mid_getMaximumX_3427789f502c230e,
              mid_getMaximumY_3427789f502c230e,
              mid_getMaximumZ_3427789f502c230e,
              mid_getMinimumX_3427789f502c230e,
              mid_getMinimumY_3427789f502c230e,
              mid_getMinimumZ_3427789f502c230e,
              mid_isLargestMaxX_591bc2e0b2301d3a,
              mid_isLargestMaxY_591bc2e0b2301d3a,
              mid_isLargestMaxZ_591bc2e0b2301d3a,
              mid_isSmallestMinX_591bc2e0b2301d3a,
              mid_isSmallestMinY_591bc2e0b2301d3a,
              mid_isSmallestMinZ_591bc2e0b2301d3a,
              mid_isWide_9df9bcb078900198,
              mid_isWithin_d2545ca8f40aaba4,
              mid_isWithin_5f47c01c69ca9460,
              mid_noBottomLatitudeBound_9df9bcb078900198,
              mid_noBound_44b667a391f02bb2,
              mid_noLongitudeBound_9df9bcb078900198,
              mid_noTopLatitudeBound_9df9bcb078900198,
              mid_overlaps_4127ff56ce328b15,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XYZBounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XYZBounds(const XYZBounds& obj) : ::java::lang::Object(obj) {}

            XYZBounds();

            void addBounds(const XYZBounds &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addXValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addYValue(jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds addZValue(jdouble) const;
            ::java::lang::Double getMaximumX() const;
            ::java::lang::Double getMaximumY() const;
            ::java::lang::Double getMaximumZ() const;
            ::java::lang::Double getMinimumX() const;
            ::java::lang::Double getMinimumY() const;
            ::java::lang::Double getMinimumZ() const;
            jboolean isLargestMaxX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isLargestMaxZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinX(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinY(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            jboolean isSmallestMinZ(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds isWide() const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBottomLatitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            ::org::apache::lucene::spatial3d::geom::Bounds noLongitudeBound() const;
            ::org::apache::lucene::spatial3d::geom::Bounds noTopLatitudeBound() const;
            jboolean overlaps(const XYZBounds &) const;
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
          extern PyType_Def PY_TYPE_DEF(XYZBounds);
          extern PyTypeObject *PY_TYPE(XYZBounds);

          class t_XYZBounds {
          public:
            PyObject_HEAD
            XYZBounds object;
            static PyObject *wrap_Object(const XYZBounds&);
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
