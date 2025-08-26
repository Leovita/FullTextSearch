#ifndef org_apache_lucene_spatial3d_geom_Plane_H
#define org_apache_lucene_spatial3d_geom_Plane_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class LatLonBounds;
          class Plane;
          class Membership;
          class XYZBounds;
          class PlanetModel;
          class GeoPoint;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class Plane : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_a6625e83dca6462b,
              mid_init$_b1edd451bf29f524,
              mid_init$_fc65cfed9a758957,
              mid_init$_35179f8386e0356c,
              mid_init$_fa06324555fd7858,
              mid_init$_975cde7205bb1ed3,
              mid_init$_c9622524895ed2c0,
              mid_arcDistance_67b05144a727eb93,
              mid_arcDistance_703d97178efeaccd,
              mid_arePointsCoplanar_0c02afb4a9edcac5,
              mid_constructNormalizedXPlane_1a4c2560cf277876,
              mid_constructNormalizedXPlane_3b1333c27fb37be4,
              mid_constructNormalizedYPlane_1a4c2560cf277876,
              mid_constructNormalizedYPlane_3b1333c27fb37be4,
              mid_constructNormalizedZPlane_1a4c2560cf277876,
              mid_constructNormalizedZPlane_3542de7e1cd52f75,
              mid_constructPerpendicularCenterPlaneOnePoint_f85e597bc92328be,
              mid_constructPerpendicularCenterPlaneTwoPoints_a86787fbe8d74046,
              mid_crosses_ea6b9b3d66754561,
              mid_equals_00d17418847797d4,
              mid_evaluate_f4eb7dd53b5bdffc,
              mid_evaluate_1b083e8094adc19b,
              mid_evaluateIsZero_f78acf28287584e8,
              mid_evaluateIsZero_7ff1eb501b1de7c2,
              mid_findArcDistancePoints_c8672cc26ee6e8fb,
              mid_findCrossings_0cf25ad772fa98d5,
              mid_findIntersections_0cf25ad772fa98d5,
              mid_getSampleIntersectionPoint_91d9f25ab42d530d,
              mid_hashCode_bd89ce15dad49192,
              mid_interpolate_e083e3e49780eb2a,
              mid_intersects_ea6b9b3d66754561,
              mid_isFunctionallyIdentical_32e946df015b9319,
              mid_isNumericallyIdentical_32e946df015b9319,
              mid_linearDistance_67b05144a727eb93,
              mid_linearDistance_703d97178efeaccd,
              mid_linearDistanceSquared_67b05144a727eb93,
              mid_linearDistanceSquared_703d97178efeaccd,
              mid_normalDistance_57306f7030028fac,
              mid_normalDistance_24f7c49a40f5b075,
              mid_normalDistanceSquared_57306f7030028fac,
              mid_normalDistanceSquared_24f7c49a40f5b075,
              mid_normalize_6cc2348c5318a68b,
              mid_recordBounds_741543009286dbf7,
              mid_recordBounds_0b5059fe19ff3b62,
              mid_recordBounds_26aa0aede5629f1a,
              mid_recordBounds_3325149121961d57,
              mid_toString_e7df854526d67fa3,
              mid_findIntersections_b74c0c6a1d91c1c0,
              mid_reverseModify_b849aeec7ecaac22,
              mid_findCrossings_b74c0c6a1d91c1c0,
              mid_findIntersectionBounds_79ba7d76ca184e59,
              mid_modify_c6981c2798a6c248,
              max_mid
            };

            enum {
              fid_D,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Plane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Plane(const Plane& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            static JArray< ::org::apache::lucene::spatial3d::geom::Membership > *NO_BOUNDS;
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > *NO_POINTS;
            static Plane *normalXPlane;
            static Plane *normalYPlane;
            static Plane *normalZPlane;

            jdouble _get_D() const;

            Plane(const Plane &, jboolean);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            Plane(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            Plane(jdouble, jdouble);
            Plane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            Plane(jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            static jboolean arePointsCoplanar(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &);
            static Plane constructNormalizedXPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedXPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedYPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedYPlane(jdouble, jdouble, jdouble);
            static Plane constructNormalizedZPlane(const JArray< ::org::apache::lucene::spatial3d::geom::Vector > &);
            static Plane constructNormalizedZPlane(jdouble, jdouble);
            static Plane constructPerpendicularCenterPlaneOnePoint(const Plane &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static Plane constructPerpendicularCenterPlaneTwoPoints(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            jboolean crosses(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jdouble evaluate(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble evaluate(jdouble, jdouble, jdouble) const;
            jboolean evaluateIsZero(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean evaluateIsZero(jdouble, jdouble, jdouble) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findArcDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findCrossings(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findIntersections(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getSampleIntersectionPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &) const;
            jint hashCode() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > interpolate(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< jdouble > &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isFunctionallyIdentical(const Plane &) const;
            jboolean isNumericallyIdentical(const Plane &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistanceSquared(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(const ::org::apache::lucene::spatial3d::geom::Vector &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            Plane normalize() const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::LatLonBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            void recordBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &, const Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
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
          extern PyType_Def PY_TYPE_DEF(Plane);
          extern PyTypeObject *PY_TYPE(Plane);

          class t_Plane {
          public:
            PyObject_HEAD
            Plane object;
            static PyObject *wrap_Object(const Plane&);
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
