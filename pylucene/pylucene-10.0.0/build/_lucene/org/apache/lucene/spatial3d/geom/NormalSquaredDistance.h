#ifndef org_apache_lucene_spatial3d_geom_NormalSquaredDistance_H
#define org_apache_lucene_spatial3d_geom_NormalSquaredDistance_H

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
          class NormalSquaredDistance;
          class Membership;
          class GeoPoint;
          class PlanetModel;
          class DistanceStyle;
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

          class NormalSquaredDistance : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_computeDistance_4ab96a6c4b0435ce,
              mid_computeDistance_fc30b57eb4c12ea6,
              mid_computeDistance_9cf10f8736fcb192,
              mid_computeDistance_0bdc88d319dba30a,
              mid_findDistancePoints_cc634546b674efc4,
              mid_findMaximumArcDistance_bea881a5e2da0112,
              mid_findMinimumArcDistance_bea881a5e2da0112,
              mid_fromAggregationForm_8493a5edcb36d651,
              mid_toAggregationForm_8493a5edcb36d651,
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
