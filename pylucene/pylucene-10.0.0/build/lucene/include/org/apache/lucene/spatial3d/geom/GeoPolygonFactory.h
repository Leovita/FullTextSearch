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
          class GeoPolygonFactory$PolygonDescription;
          class PlanetModel;
          class GeoPolygon;
          class GeoPoint;
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
              mid_makeGeoConcavePolygon_4f8d641bc3623530,
              mid_makeGeoConcavePolygon_ac71432694a12484,
              mid_makeGeoConvexPolygon_4f8d641bc3623530,
              mid_makeGeoConvexPolygon_ac71432694a12484,
              mid_makeGeoPolygon_f30a181160dcfcba,
              mid_makeGeoPolygon_4f8d641bc3623530,
              mid_makeGeoPolygon_407673fc40889432,
              mid_makeGeoPolygon_ac71432694a12484,
              mid_makeGeoPolygon_798184a5bbb6d3f3,
              mid_makeLargeGeoPolygon_4f8d641bc3623530,
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
