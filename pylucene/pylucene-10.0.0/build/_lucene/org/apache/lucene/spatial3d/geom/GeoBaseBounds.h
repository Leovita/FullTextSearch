#ifndef org_apache_lucene_spatial3d_geom_GeoBaseBounds_H
#define org_apache_lucene_spatial3d_geom_GeoBaseBounds_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoBounds;
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

          class GeoBaseBounds : public ::org::apache::lucene::spatial3d::geom::BasePlanetObject {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_getBounds_92d81e4ba71a8653,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseBounds(jobject obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseBounds(const GeoBaseBounds& obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {}

            GeoBaseBounds(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseBounds);
          extern PyTypeObject *PY_TYPE(GeoBaseBounds);

          class t_GeoBaseBounds {
          public:
            PyObject_HEAD
            GeoBaseBounds object;
            static PyObject *wrap_Object(const GeoBaseBounds&);
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
