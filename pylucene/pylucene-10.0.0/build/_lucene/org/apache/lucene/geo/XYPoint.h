#ifndef org_apache_lucene_geo_XYPoint_H
#define org_apache_lucene_geo_XYPoint_H

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

        class XYPoint : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_cb7687d0612879b8,
            mid_equals_00d17418847797d4,
            mid_getX_8b62236f0e4d0dbc,
            mid_getY_8b62236f0e4d0dbc,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_toComponent2D_826bc66e4432f11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYPoint(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYPoint(const XYPoint& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          XYPoint(jfloat, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          jfloat getX() const;
          jfloat getY() const;
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
        extern PyType_Def PY_TYPE_DEF(XYPoint);
        extern PyTypeObject *PY_TYPE(XYPoint);

        class t_XYPoint {
        public:
          PyObject_HEAD
          XYPoint object;
          static PyObject *wrap_Object(const XYPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
