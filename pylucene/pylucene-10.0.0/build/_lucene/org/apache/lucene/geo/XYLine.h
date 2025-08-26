#ifndef org_apache_lucene_geo_XYLine_H
#define org_apache_lucene_geo_XYLine_H

#include "org/apache/lucene/geo/XYGeometry.h"

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

        class XYLine : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_d0e5c7ca8f69d543,
            mid_equals_00d17418847797d4,
            mid_getX_67d89dc3894661ff,
            mid_getX_5873a23b935a9d49,
            mid_getY_67d89dc3894661ff,
            mid_getY_5873a23b935a9d49,
            mid_hashCode_bd89ce15dad49192,
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

          explicit XYLine(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYLine(const XYLine& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYLine(const JArray< jfloat > &, const JArray< jfloat > &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< jfloat > getX() const;
          jfloat getX(jint) const;
          JArray< jfloat > getY() const;
          jfloat getY(jint) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(XYLine);
        extern PyTypeObject *PY_TYPE(XYLine);

        class t_XYLine {
        public:
          PyObject_HEAD
          XYLine object;
          static PyObject *wrap_Object(const XYLine&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
