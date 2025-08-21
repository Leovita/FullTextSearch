#ifndef org_apache_lucene_geo_Rectangle_H
#define org_apache_lucene_geo_Rectangle_H

#include "org/apache/lucene/geo/LatLonGeometry.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
    class Object;
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
            mid_init$_e61e485ff70a664a,
            mid_axisLat_351e9c3c9f2fa814,
            mid_containsPoint_76b9f452c8cc4e1e,
            mid_crossesDateline_947277eca0748c4e,
            mid_equals_570b5248a6da3ef6,
            mid_fromPointDistance_dc5047659fe8a580,
            mid_fromPolygon_f42747c7d4da4418,
            mid_hashCode_20fbf7565993c3d7,
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
