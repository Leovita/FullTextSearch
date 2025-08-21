#ifndef org_apache_lucene_spatial3d_geom_PlanetModel_H
#define org_apache_lucene_spatial3d_geom_PlanetModel_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel$DocValueEncoder;
          class Vector;
          class GeoPoint;
          class PlanetModel;
          class SerializableObject;
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

          class PlanetModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_37e23ef4361d4c28,
              mid_init$_e57e4ffd06f0f841,
              mid_bisection_5148598fc7ffdccd,
              mid_createSurfacePoint_cd6d6d99fed8467e,
              mid_createSurfacePoint_86fd4b4310be9332,
              mid_decodeValue_788f636887bfcb79,
              mid_encodeValue_03c0863338a48004,
              mid_equals_570b5248a6da3ef6,
              mid_getDocValueEncoder_0b15faee5ca14503,
              mid_getMaximumMagnitude_32caabaad86c508b,
              mid_getMaximumXValue_32caabaad86c508b,
              mid_getMaximumYValue_32caabaad86c508b,
              mid_getMaximumZValue_32caabaad86c508b,
              mid_getMeanRadius_32caabaad86c508b,
              mid_getMinimumMagnitude_32caabaad86c508b,
              mid_getMinimumXValue_32caabaad86c508b,
              mid_getMinimumYValue_32caabaad86c508b,
              mid_getMinimumZValue_32caabaad86c508b,
              mid_hashCode_20fbf7565993c3d7,
              mid_isSphere_947277eca0748c4e,
              mid_pointOnSurface_d2545ca8f40aaba4,
              mid_pointOnSurface_5f47c01c69ca9460,
              mid_pointOutside_d2545ca8f40aaba4,
              mid_pointOutside_5f47c01c69ca9460,
              mid_surfaceDistance_97409bb87de4c9a0,
              mid_surfacePointOnBearing_c4ce6574acfdfc10,
              mid_toString_09a7afff1868fc5e,
              mid_write_84831c9725b47eae,
              max_mid
            };

            enum {
              fid_DECODE,
              fid_MAX_ENCODED_VALUE,
              fid_MAX_VALUE,
              fid_MAX_X_POLE,
              fid_MAX_Y_POLE,
              fid_MIN_ENCODED_VALUE,
              fid_MIN_X_POLE,
              fid_MIN_Y_POLE,
              fid_NORTH_POLE,
              fid_SOUTH_POLE,
              fid_a,
              fid_b,
              fid_docValueEncoder,
              fid_inverseScale,
              fid_inverseXYScaling,
              fid_inverseXYScalingSquared,
              fid_inverseZScaling,
              fid_inverseZScalingSquared,
              fid_meanRadius,
              fid_minimumPoleDistance,
              fid_scale,
              fid_scaledFlattening,
              fid_squareRatio,
              fid_xyScaling,
              fid_zScaling,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetModel(const PlanetModel& obj) : ::java::lang::Object(obj) {}

            static PlanetModel *CLARKE_1866;
            static PlanetModel *SPHERE;
            static PlanetModel *WGS84;

            jdouble _get_DECODE() const;
            jint _get_MAX_ENCODED_VALUE() const;
            jdouble _get_MAX_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MAX_Y_POLE() const;
            jint _get_MIN_ENCODED_VALUE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_X_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_MIN_Y_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_NORTH_POLE() const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint _get_SOUTH_POLE() const;
            jdouble _get_a() const;
            jdouble _get_b() const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder _get_docValueEncoder() const;
            jdouble _get_inverseScale() const;
            jdouble _get_inverseXYScaling() const;
            jdouble _get_inverseXYScalingSquared() const;
            jdouble _get_inverseZScaling() const;
            jdouble _get_inverseZScalingSquared() const;
            jdouble _get_meanRadius() const;
            jdouble _get_minimumPoleDistance() const;
            jdouble _get_scale() const;
            jdouble _get_scaledFlattening() const;
            jdouble _get_squareRatio() const;
            jdouble _get_xyScaling() const;
            jdouble _get_zScaling() const;

            PlanetModel(const ::java::io::InputStream &);
            PlanetModel(jdouble, jdouble);

            ::org::apache::lucene::spatial3d::geom::GeoPoint bisection(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint createSurfacePoint(jdouble, jdouble, jdouble) const;
            jdouble decodeValue(jint) const;
            jint encodeValue(jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel$DocValueEncoder getDocValueEncoder() const;
            jdouble getMaximumMagnitude() const;
            jdouble getMaximumXValue() const;
            jdouble getMaximumYValue() const;
            jdouble getMaximumZValue() const;
            jdouble getMeanRadius() const;
            jdouble getMinimumMagnitude() const;
            jdouble getMinimumXValue() const;
            jdouble getMinimumYValue() const;
            jdouble getMinimumZValue() const;
            jint hashCode() const;
            jboolean isSphere() const;
            jboolean pointOnSurface(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOnSurface(jdouble, jdouble, jdouble) const;
            jboolean pointOutside(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean pointOutside(jdouble, jdouble, jdouble) const;
            jdouble surfaceDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint surfacePointOnBearing(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble) const;
            ::java::lang::String toString() const;
            void write(const ::java::io::OutputStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(PlanetModel);
          extern PyTypeObject *PY_TYPE(PlanetModel);

          class t_PlanetModel {
          public:
            PyObject_HEAD
            PlanetModel object;
            static PyObject *wrap_Object(const PlanetModel&);
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
