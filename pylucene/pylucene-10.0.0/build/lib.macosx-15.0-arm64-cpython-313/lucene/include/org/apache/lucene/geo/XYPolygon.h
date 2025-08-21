#ifndef org_apache_lucene_geo_XYPolygon_H
#define org_apache_lucene_geo_XYPolygon_H

#include "org/apache/lucene/geo/XYGeometry.h"

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
        class XYPolygon;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class XYPolygon : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_37cd993dce427826,
            mid_equals_570b5248a6da3ef6,
            mid_getHoles_884863faefccc468,
            mid_getPolyX_808165844ea67079,
            mid_getPolyX_29cfa01aaad92564,
            mid_getPolyY_808165844ea67079,
            mid_getPolyY_29cfa01aaad92564,
            mid_getWindingOrder_e9ee6e52ae142ea4,
            mid_hashCode_20fbf7565993c3d7,
            mid_numHoles_20fbf7565993c3d7,
            mid_numPoints_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_toComponent2D_2671ab2559e4bc09,
            max_mid
          };

          enum {
            fid_maxX,
            fid_maxY,
            fid_minX,
            fid_minY,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYPolygon(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYPolygon(const XYPolygon& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYPolygon(const JArray< jfloat > &, const JArray< jfloat > &, const JArray< XYPolygon > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< XYPolygon > getHoles() const;
          JArray< jfloat > getPolyX() const;
          jfloat getPolyX(jint) const;
          JArray< jfloat > getPolyY() const;
          jfloat getPolyY(jint) const;
          ::org::apache::lucene::geo::GeoUtils$WindingOrder getWindingOrder() const;
          jint hashCode() const;
          jint numHoles() const;
          jint numPoints() const;
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
        extern PyType_Def PY_TYPE_DEF(XYPolygon);
        extern PyTypeObject *PY_TYPE(XYPolygon);

        class t_XYPolygon {
        public:
          PyObject_HEAD
          XYPolygon object;
          static PyObject *wrap_Object(const XYPolygon&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
