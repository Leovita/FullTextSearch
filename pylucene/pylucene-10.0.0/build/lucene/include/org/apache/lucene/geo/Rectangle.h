#ifndef org_apache_lucene_geo_Rectangle_H
#define org_apache_lucene_geo_Rectangle_H

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
        class Rectangle;
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

        class Rectangle : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_c9622524895ed2c0,
            mid_axisLat_9314817161e40a7e,
            mid_containsPoint_69c138b7b2573e2f,
            mid_crossesDateline_9aa4f33e82ea333f,
            mid_equals_00d17418847797d4,
            mid_fromPointDistance_7eaa13cfd9927dfd,
            mid_fromPolygon_122b3201ea13e8e1,
            mid_hashCode_bd89ce15dad49192,
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

          explicit Rectangle(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Rectangle(const Rectangle& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          static jdouble AXISLAT_ERROR;

          jdouble _get_maxLat() const;
          jdouble _get_maxLon() const;
          jdouble _get_minLat() const;
          jdouble _get_minLon() const;

          Rectangle(jdouble, jdouble, jdouble, jdouble);

          static jdouble axisLat(jdouble, jdouble);
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean crossesDateline() const;
          jboolean equals(const ::java::lang::Object &) const;
          static Rectangle fromPointDistance(jdouble, jdouble, jdouble);
          static Rectangle fromPolygon(const JArray< ::org::apache::lucene::geo::Polygon > &);
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(Rectangle);
        extern PyTypeObject *PY_TYPE(Rectangle);

        class t_Rectangle {
        public:
          PyObject_HEAD
          Rectangle object;
          static PyObject *wrap_Object(const Rectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
