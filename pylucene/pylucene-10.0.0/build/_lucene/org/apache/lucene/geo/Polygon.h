#ifndef org_apache_lucene_geo_Polygon_H
#define org_apache_lucene_geo_Polygon_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Polygon;
        class GeoUtils$WindingOrder;
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
            mid_init$_ba5ad671e850a778,
            mid_equals_00d17418847797d4,
            mid_fromGeoJSON_1354f05d57e302dc,
            mid_getHoles_03652cd067cf5d0e,
            mid_getPolyLat_3bb466f769ef1c7f,
            mid_getPolyLats_1d737fde75f82f40,
            mid_getPolyLon_3bb466f769ef1c7f,
            mid_getPolyLons_1d737fde75f82f40,
            mid_getWindingOrder_838b38b4e8121696,
            mid_hashCode_bd89ce15dad49192,
            mid_numHoles_bd89ce15dad49192,
            mid_numPoints_bd89ce15dad49192,
            mid_toGeoJSON_e7df854526d67fa3,
            mid_toString_e7df854526d67fa3,
            mid_verticesToGeoJSON_e6e7c537f13f6311,
            mid_toComponent2D_826bc66e4432f11e,
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
