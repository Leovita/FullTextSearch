#ifndef org_apache_lucene_geo_Point_H
#define org_apache_lucene_geo_Point_H

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

        class Point : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_fa06324555fd7858,
            mid_equals_00d17418847797d4,
            mid_getLat_6fb37e123fed7a1f,
            mid_getLon_6fb37e123fed7a1f,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_toComponent2D_826bc66e4432f11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Point(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Point(const Point& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          Point(jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat() const;
          jdouble getLon() const;
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
        extern PyType_Def PY_TYPE_DEF(Point);
        extern PyTypeObject *PY_TYPE(Point);

        class t_Point {
        public:
          PyObject_HEAD
          Point object;
          static PyObject *wrap_Object(const Point&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
