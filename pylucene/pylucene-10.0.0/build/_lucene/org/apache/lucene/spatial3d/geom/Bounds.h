#ifndef org_apache_lucene_spatial3d_geom_Bounds_H
#define org_apache_lucene_spatial3d_geom_Bounds_H

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
              mid_addHorizontalPlane_a7e4b546e597b400,
              mid_addIntersection_35219b12859162fe,
              mid_addPlane_15a21c9a9d113d9d,
              mid_addPoint_7d64811057c15b25,
              mid_addVerticalPlane_a7e4b546e597b400,
              mid_addXValue_7d64811057c15b25,
              mid_addYValue_7d64811057c15b25,
              mid_addZValue_7d64811057c15b25,
              mid_isWide_9df9bcb078900198,
              mid_noBottomLatitudeBound_9df9bcb078900198,
              mid_noBound_44b667a391f02bb2,
              mid_noLongitudeBound_9df9bcb078900198,
              mid_noTopLatitudeBound_9df9bcb078900198,
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
