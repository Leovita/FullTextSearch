#ifndef org_apache_lucene_spatial3d_geom_GeoPath_H
#define org_apache_lucene_spatial3d_geom_GeoPath_H

#include "org/apache/lucene/spatial3d/geom/GeoDistanceShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class DistanceStyle;
          class GeoPoint;
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

          class GeoPath : public ::org::apache::lucene::spatial3d::geom::GeoDistanceShape {
           public:
            enum {
              mid_computeNearestDistance_6635ccfc1ffc6db7,
              mid_computeNearestDistance_843fc02405cdd09d,
              mid_computePathCenterDistance_6635ccfc1ffc6db7,
              mid_computePathCenterDistance_843fc02405cdd09d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPath(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoDistanceShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPath(const GeoPath& obj) : ::org::apache::lucene::spatial3d::geom::GeoDistanceShape(obj) {}

            jdouble computeNearestDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computeNearestDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
            jdouble computePathCenterDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, const ::org::apache::lucene::spatial3d::geom::GeoPoint &) const;
            jdouble computePathCenterDistance(const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoPath);
          extern PyTypeObject *PY_TYPE(GeoPath);

          class t_GeoPath {
          public:
            PyObject_HEAD
            GeoPath object;
            static PyObject *wrap_Object(const GeoPath&);
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
