#ifndef org_apache_lucene_spatial3d_geom_NormalSquaredDistance_H
#define org_apache_lucene_spatial3d_geom_NormalSquaredDistance_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class Membership;
          class PlanetModel;
          class GeoPoint;
          class NormalSquaredDistance;
          class DistanceStyle;
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

          class NormalSquaredDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_computeDistance_97409bb87de4c9a0,
              mid_computeDistance_d8675cf55f7dec82,
              mid_computeDistance_b67d61432be7c023,
              mid_computeDistance_559a2c9e62383d56,
              mid_findDistancePoints_97a6c272c9b4c6da,
              mid_findMaximumArcDistance_6fd816b79f68b774,
              mid_findMinimumArcDistance_6fd816b79f68b774,
              mid_fromAggregationForm_8fff3d7dcb9fddc5,
              mid_toAggregationForm_8fff3d7dcb9fddc5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NormalSquaredDistance(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NormalSquaredDistance(const NormalSquaredDistance& obj) : ::java::lang::Object(obj) {}

            static NormalSquaredDistance *INSTANCE;

            NormalSquaredDistance();

            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::GeoPoint &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::Plane &, jdouble, jdouble, jdouble, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > findDistancePoints(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, const ::org::apache::lucene::spatial3d::geom::GeoPoint &, const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble findMaximumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble findMinimumArcDistance(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble) const;
            jdouble fromAggregationForm(jdouble) const;
            jdouble toAggregationForm(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(NormalSquaredDistance);
          extern PyTypeObject *PY_TYPE(NormalSquaredDistance);

          class t_NormalSquaredDistance {
          public:
            PyObject_HEAD
            NormalSquaredDistance object;
            static PyObject *wrap_Object(const NormalSquaredDistance&);
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
