#ifndef org_apache_lucene_spatial3d_geom_GeoDistance_H
#define org_apache_lucene_spatial3d_geom_GeoDistance_H

#include "org/apache/lucene/spatial3d/geom/Membership.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPoint;
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

          class GeoDistance : public ::org::apache::lucene::spatial3d::geom::Membership {
           public:
            enum {
              mid_computeDeltaDistance_c279193319e1a46c,
              mid_computeDeltaDistance_79a34b4fe77da1ae,
              mid_computeDistance_c279193319e1a46c,
              mid_computeDistance_79a34b4fe77da1ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoDistance(jobject obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoDistance(const GeoDistance& obj) : ::org::apache::lucene::spatial3d::geom::Membership(obj) {}

            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDeltaDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoDistance);
          extern PyTypeObject *PY_TYPE(GeoDistance);

          class t_GeoDistance {
          public:
            PyObject_HEAD
            GeoDistance object;
            static PyObject *wrap_Object(const GeoDistance&);
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
