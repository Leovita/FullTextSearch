#ifndef org_apache_lucene_geo_XYPolygon_H
#define org_apache_lucene_geo_XYPolygon_H

#include "org/apache/lucene/geo/XYGeometry.h"

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
            mid_init$_9ac79418eb7485af,
            mid_equals_00d17418847797d4,
            mid_getHoles_6383c061db339f3c,
            mid_getPolyX_67d89dc3894661ff,
            mid_getPolyX_5873a23b935a9d49,
            mid_getPolyY_67d89dc3894661ff,
            mid_getPolyY_5873a23b935a9d49,
            mid_getWindingOrder_838b38b4e8121696,
            mid_hashCode_bd89ce15dad49192,
            mid_numHoles_bd89ce15dad49192,
            mid_numPoints_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_toComponent2D_826bc66e4432f11e,
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
