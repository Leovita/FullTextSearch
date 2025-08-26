#ifndef org_apache_lucene_spatial3d_geom_PlanetModel_H
#define org_apache_lucene_spatial3d_geom_PlanetModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class PlanetModel$DocValueEncoder;
          class SerializableObject;
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
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
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
              mid_init$_da97eaa7d893a93a,
              mid_init$_fa06324555fd7858,
              mid_bisection_21fe0855a1f93d95,
              mid_createSurfacePoint_b0d46e16dff8fd08,
              mid_createSurfacePoint_26ad82a2c50a65df,
              mid_decodeValue_3bb466f769ef1c7f,
              mid_encodeValue_3f0c00a187968ea1,
              mid_equals_00d17418847797d4,
              mid_getDocValueEncoder_14581037477373b0,
              mid_getMaximumMagnitude_6fb37e123fed7a1f,
              mid_getMaximumXValue_6fb37e123fed7a1f,
              mid_getMaximumYValue_6fb37e123fed7a1f,
              mid_getMaximumZValue_6fb37e123fed7a1f,
              mid_getMeanRadius_6fb37e123fed7a1f,
              mid_getMinimumMagnitude_6fb37e123fed7a1f,
              mid_getMinimumXValue_6fb37e123fed7a1f,
              mid_getMinimumYValue_6fb37e123fed7a1f,
              mid_getMinimumZValue_6fb37e123fed7a1f,
              mid_hashCode_bd89ce15dad49192,
              mid_isSphere_9aa4f33e82ea333f,
              mid_pointOnSurface_f78acf28287584e8,
              mid_pointOnSurface_7ff1eb501b1de7c2,
              mid_pointOutside_f78acf28287584e8,
              mid_pointOutside_7ff1eb501b1de7c2,
              mid_surfaceDistance_4ab96a6c4b0435ce,
              mid_surfacePointOnBearing_8fcf2805dab3b396,
              mid_toString_e7df854526d67fa3,
              mid_write_fbdd420d6e3d48b2,
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
