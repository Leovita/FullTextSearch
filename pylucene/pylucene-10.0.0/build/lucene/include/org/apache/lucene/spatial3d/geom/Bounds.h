#ifndef org_apache_lucene_spatial3d_geom_Bounds_H
#define org_apache_lucene_spatial3d_geom_Bounds_H

#include "java/lang/Object.h"

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

          class Bounds : public ::java::lang::Object {
           public:
            enum {
              mid_addHorizontalPlane_745d4f480071b0dc,
              mid_addIntersection_b47fb6a0917837bb,
              mid_addPlane_2d8ce33354f55c61,
              mid_addPoint_0b65f1ac399500f3,
              mid_addVerticalPlane_745d4f480071b0dc,
              mid_addXValue_0b65f1ac399500f3,
              mid_addYValue_0b65f1ac399500f3,
              mid_addZValue_0b65f1ac399500f3,
              mid_isWide_57bc77a77a7927f9,
              mid_noBottomLatitudeBound_57bc77a77a7927f9,
              mid_noBound_2b87fb506197c30d,
              mid_noLongitudeBound_57bc77a77a7927f9,
              mid_noTopLatitudeBound_57bc77a77a7927f9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Bounds(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Bounds(const Bounds& obj) : ::java::lang::Object(obj) {}

            Bounds addHorizontalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addIntersection(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addPoint(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addVerticalPlane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Bounds addXValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addYValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds addZValue(const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            Bounds isWide() const;
            Bounds noBottomLatitudeBound() const;
            Bounds noBound(const ::org::apache::lucene::spatial3d::geom::PlanetModel &) const;
            Bounds noLongitudeBound() const;
            Bounds noTopLatitudeBound() const;
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
          extern PyType_Def PY_TYPE_DEF(Bounds);
          extern PyTypeObject *PY_TYPE(Bounds);

          class t_Bounds {
          public:
            PyObject_HEAD
            Bounds object;
            static PyObject *wrap_Object(const Bounds&);
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
