#ifndef org_apache_lucene_spatial3d_geom_GeoCircleFactory_H
#define org_apache_lucene_spatial3d_geom_GeoCircleFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoCircle;
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

          class GeoCircleFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeExactGeoCircle_3b55cf834aa6612e,
              mid_makeGeoCircle_b015fd07877d4bf4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoCircleFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoCircleFactory(const GeoCircleFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoCircle makeExactGeoCircle(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoCircle makeGeoCircle(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(GeoCircleFactory);
          extern PyTypeObject *PY_TYPE(GeoCircleFactory);

          class t_GeoCircleFactory {
          public:
            PyObject_HEAD
            GeoCircleFactory object;
            static PyObject *wrap_Object(const GeoCircleFactory&);
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
