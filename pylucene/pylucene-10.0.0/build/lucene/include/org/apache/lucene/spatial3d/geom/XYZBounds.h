#ifndef org_apache_lucene_spatial3d_geom_XYZBounds_H
#define org_apache_lucene_spatial3d_geom_XYZBounds_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class Membership;
          class XYZBounds;
          class Bounds;
          class GeoPoint;
          class PlanetModel;
          class Plane;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Double;
    class String;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_addBounds_35eccb05435de8ff,
              mid_addHorizontalPlane_745d4f480071b0dc,
              mid_addIntersection_b47fb6a0917837bb,
              mid_addPlane_2d8ce33354f55c61,
              mid_addPoint_0b65f1ac399500f3,
              mid_addVerticalPlane_745d4f480071b0dc,
              mid_addXValue_0b65f1ac399500f3,
              mid_addXValue_994740db6f30e34b,
              mid_addYValue_0b65f1ac399500f3,
              mid_addYValue_994740db6f30e34b,
              mid_addZValue_0b65f1ac399500f3,
              mid_addZValue_994740db6f30e34b,
              mid_getMaximumX_4708af7d5ba009e9,
              mid_getMaximumY_4708af7d5ba009e9,
              mid_getMaximumZ_4708af7d5ba009e9,
              mid_getMinimumX_4708af7d5ba009e9,
              mid_getMinimumY_4708af7d5ba009e9,
              mid_getMinimumZ_4708af7d5ba009e9,
              mid_isLargestMaxX_084d831d65bcb675,
              mid_isLargestMaxY_084d831d65bcb675,
              mid_isLargestMaxZ_084d831d65bcb675,
              mid_isSmallestMinX_084d831d65bcb675,
              mid_isSmallestMinY_084d831d65bcb675,
              mid_isSmallestMinZ_084d831d65bcb675,
              mid_isWide_57bc77a77a7927f9,
              mid_isWithin_f78acf28287584e8,
              mid_isWithin_7ff1eb501b1de7c2,
              mid_noBottomLatitudeBound_57bc77a77a7927f9,
              mid_noBound_2b87fb506197c30d,
              mid_noLongitudeBound_57bc77a77a7927f9,
              mid_noTopLatitudeBound_57bc77a77a7927f9,
              mid_overlaps_d70f9bd695c033f6,
              mid_toString_e7df854526d67fa3,
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
