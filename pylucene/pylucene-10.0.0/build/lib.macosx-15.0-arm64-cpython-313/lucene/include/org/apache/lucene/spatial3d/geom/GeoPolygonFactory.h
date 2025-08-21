#ifndef org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H
#define org_apache_lucene_spatial3d_geom_GeoPolygonFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class GeoPolygonFactory$PolygonDescription;
          class GeoPolygon;
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

          class GeoPolygonFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeGeoConcavePolygon_d93df3c12a7479c7,
              mid_makeGeoConcavePolygon_b4675796919cad83,
              mid_makeGeoConvexPolygon_d93df3c12a7479c7,
              mid_makeGeoConvexPolygon_b4675796919cad83,
              mid_makeGeoPolygon_4eb73a9dbb935adf,
              mid_makeGeoPolygon_d93df3c12a7479c7,
              mid_makeGeoPolygon_55b928cbd30d5428,
              mid_makeGeoPolygon_b4675796919cad83,
              mid_makeGeoPolygon_3f92737ed26ab22c,
              mid_makeLargeGeoPolygon_d93df3c12a7479c7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPolygonFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPolygonFactory(const GeoPolygonFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConcavePolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoConvexPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::GeoPolygonFactory$PolygonDescription &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &, const ::java::util::List &, jdouble);
            static ::org::apache::lucene::spatial3d::geom::GeoPolygon makeLargeGeoPolygon(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::util::List &);
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
          extern PyType_Def PY_TYPE_DEF(GeoPolygonFactory);
          extern PyTypeObject *PY_TYPE(GeoPolygonFactory);

          class t_GeoPolygonFactory {
          public:
            PyObject_HEAD
            GeoPolygonFactory object;
            static PyObject *wrap_Object(const GeoPolygonFactory&);
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
