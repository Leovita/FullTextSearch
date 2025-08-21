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
            mid_init$_ad2d0338280f2fc5,
            mid_equals_570b5248a6da3ef6,
            mid_getLat_788f636887bfcb79,
            mid_getLats_165feea9de2d0727,
            mid_getLon_788f636887bfcb79,
            mid_getLons_165feea9de2d0727,
            mid_hashCode_20fbf7565993c3d7,
            mid_numPoints_20fbf7565993c3d7,
            mid_toGeoJSON_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
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
