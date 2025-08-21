#ifndef org_apache_lucene_geo_Polygon_H
#define org_apache_lucene_geo_Polygon_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class GeoUtils$WindingOrder;
        class Polygon;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Polygon : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_8d2d8002630b56f6,
            mid_equals_570b5248a6da3ef6,
            mid_fromGeoJSON_d2082644696a7f42,
            mid_getHoles_59070f617e4e2cdc,
            mid_getPolyLat_788f636887bfcb79,
            mid_getPolyLats_165feea9de2d0727,
            mid_getPolyLon_788f636887bfcb79,
            mid_getPolyLons_165feea9de2d0727,
            mid_getWindingOrder_e9ee6e52ae142ea4,
            mid_hashCode_20fbf7565993c3d7,
            mid_numHoles_20fbf7565993c3d7,
            mid_numPoints_20fbf7565993c3d7,
            mid_toGeoJSON_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
            mid_verticesToGeoJSON_abb3aad431ae880e,
            mid_toComponent2D_2671ab2559e4bc09,
            max_mid
          };

          enum {
            fid_maxLat,
            fid_maxLon,
            fid_minLat,
            fid_minLon,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Polygon(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Polygon(const Polygon& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Polygon(const JArray< jdouble > &, const JArray< jdouble > &, const JArray< Polygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          static JArray< Polygon > fromGeoJSON(const ::java::lang::String &);
          JArray< Polygon > getHoles() const;
          jdouble getPolyLat(jint) const;
          JArray< jdouble > getPolyLats() const;
          jdouble getPolyLon(jint) const;
          JArray< jdouble > getPolyLons() const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
          ::java::lang::String toGeoJSON() const;
          ::java::lang::String toString() const;
          static ::java::lang::String verticesToGeoJSON(const JArray< jdouble > &, const JArray< jdouble > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Polygon);
        extern PyTypeObject *PY_TYPE(Polygon);

        class t_Polygon {
        public:
          PyObject_HEAD
          Polygon object;
          static PyObject *wrap_Object(const Polygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
