#ifndef org_apache_lucene_geo_Line_H
#define org_apache_lucene_geo_Line_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Line : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_2ab7019da1ed085a,
            mid_equals_00d17418847797d4,
            mid_getLat_3bb466f769ef1c7f,
            mid_getLats_1d737fde75f82f40,
            mid_getLon_3bb466f769ef1c7f,
            mid_getLons_1d737fde75f82f40,
            mid_hashCode_bd89ce15dad49192,
            mid_numPoints_bd89ce15dad49192,
            mid_toGeoJSON_e7df854526d67fa3,
            mid_toString_e7df854526d67fa3,
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

          explicit Line(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Line(const Line& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Line(const JArray< jdouble > &, const JArray< jdouble > &);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat(jint) const;
          JArray< jdouble > getLats() const;
          jdouble getLon(jint) const;
          JArray< jdouble > getLons() const;
          jint hashCode() const;
          jint numPoints() const;
          ::java::lang::String toGeoJSON() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Line);
        extern PyTypeObject *PY_TYPE(Line);

        class t_Line {
        public:
          PyObject_HEAD
          Line object;
          static PyObject *wrap_Object(const Line&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
