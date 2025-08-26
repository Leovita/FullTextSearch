#ifndef org_apache_lucene_spatial3d_geom_GeoDistanceShape_H
#define org_apache_lucene_spatial3d_geom_GeoDistanceShape_H

#include "org/apache/lucene/spatial3d/geom/GeoAreaShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoDistance;
          class Bounds;
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

          class GeoDistanceShape : public ::org::apache::lucene::spatial3d::geom::GeoAreaShape {
           public:
            enum {
              mid_getDistanceBounds_13d4518d2e258a7e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoDistanceShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoDistanceShape(const GeoDistanceShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoAreaShape(obj) {}

            void getDistanceBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &, const ::org::apache::lucene::spatial3d::geom::DistanceStyle &, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoDistanceShape);
          extern PyTypeObject *PY_TYPE(GeoDistanceShape);

          class t_GeoDistanceShape {
          public:
            PyObject_HEAD
            GeoDistanceShape object;
            static PyObject *wrap_Object(const GeoDistanceShape&);
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
