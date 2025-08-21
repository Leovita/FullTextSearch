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
            mid_init$_e57e4ffd06f0f841,
            mid_equals_570b5248a6da3ef6,
            mid_getLat_32caabaad86c508b,
            mid_getLon_32caabaad86c508b,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_toComponent2D_2671ab2559e4bc09,
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
