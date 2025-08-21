#ifndef org_apache_lucene_spatial3d_geom_Plane_H
#define org_apache_lucene_spatial3d_geom_Plane_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class LatLonBounds;
          class XYZBounds;
          class Membership;
          class PlanetModel;
          class GeoPoint;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
              mid_init$_4936543f4a396356,
              mid_init$_4e6f5223a38e955e,
              mid_init$_8390149cc79b91d3,
              mid_init$_0a1ff0a1f8665913,
              mid_init$_e57e4ffd06f0f841,
              mid_init$_c2145957f9ec8fcc,
              mid_init$_e61e485ff70a664a,
              mid_arcDistance_05e08e9d172068f6,
              mid_arcDistance_ae710394a11f58a7,
              mid_arePointsCoplanar_3388eeea3ab4672e,
              mid_constructNormalizedXPlane_ef23be558671ff69,
              mid_constructNormalizedXPlane_95146b8e82270eb4,
              mid_constructNormalizedYPlane_ef23be558671ff69,
              mid_constructNormalizedYPlane_95146b8e82270eb4,
              mid_constructNormalizedZPlane_ef23be558671ff69,
              mid_constructNormalizedZPlane_61ce9d64bfc06043,
              mid_constructPerpendicularCenterPlaneOnePoint_31c1193191cae8c7,
              mid_constructPerpendicularCenterPlaneTwoPoints_bf4709f4658720df,
              mid_crosses_13aabb7ba28b382b,
              mid_equals_570b5248a6da3ef6,
              mid_evaluate_80a11677b239f4fb,
              mid_evaluate_19200a6b63234ec9,
              mid_evaluateIsZero_d2545ca8f40aaba4,
              mid_evaluateIsZero_5f47c01c69ca9460,
              mid_findArcDistancePoints_8a0f8e41a52a3564,
              mid_findCrossings_70a60ebeea626d25,
              mid_findIntersections_70a60ebeea626d25,
              mid_getSampleIntersectionPoint_615464ab4d9f9819,
              mid_hashCode_20fbf7565993c3d7,
              mid_interpolate_2c333f16c0ae648e,
              mid_intersects_13aabb7ba28b382b,
              mid_isFunctionallyIdentical_491e03dded74c3d7,
              mid_isNumericallyIdentical_491e03dded74c3d7,
              mid_linearDistance_05e08e9d172068f6,
              mid_linearDistance_ae710394a11f58a7,
              mid_linearDistanceSquared_05e08e9d172068f6,
              mid_linearDistanceSquared_ae710394a11f58a7,
              mid_normalDistance_12ad5a3c08664b79,
              mid_normalDistance_b3d00a581e9886ea,
              mid_normalDistanceSquared_12ad5a3c08664b79,
              mid_normalDistanceSquared_b3d00a581e9886ea,
              mid_normalize_60a3451ea1660c06,
              mid_recordBounds_d5d3df84e38d9b2f,
              mid_recordBounds_56f25fb2c8a5063c,
              mid_recordBounds_6a788b0ddc885724,
              mid_recordBounds_9ce2dcddd6d21fac,
              mid_toString_09a7afff1868fc5e,
              mid_reverseModify_0a06e6112b17aabd,
              mid_findIntersections_beae0f3734292d01,
              mid_modify_1fa27ccd6b06a108,
              mid_findCrossings_beae0f3734292d01,
              mid_findIntersectionBounds_8cf629dd9bb8dd55,
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
