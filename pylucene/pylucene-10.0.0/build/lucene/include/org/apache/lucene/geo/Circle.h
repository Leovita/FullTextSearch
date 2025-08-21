#ifndef org_apache_lucene_geo_Circle_H
#define org_apache_lucene_geo_Circle_H

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

        class Circle : public ::org::apache::lucene::geo::LatLonGeometry {
         public:
          enum {
            mid_init$_4d2b38be0e1337a3,
            mid_equals_570b5248a6da3ef6,
            mid_getLat_32caabaad86c508b,
            mid_getLon_32caabaad86c508b,
            mid_getRadius_32caabaad86c508b,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_toComponent2D_2671ab2559e4bc09,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Circle(jobject obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Circle(const Circle& obj) : ::org::apache::lucene::geo::LatLonGeometry(obj) {}

          Circle(jdouble, jdouble, jdouble);

          jboolean equals(const ::java::lang::Object &) const;
          jdouble getLat() const;
          jdouble getLon() const;
          jdouble getRadius() const;
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
        extern PyType_Def PY_TYPE_DEF(Circle);
        extern PyTypeObject *PY_TYPE(Circle);

        class t_Circle {
        public:
          PyObject_HEAD
          Circle object;
          static PyObject *wrap_Object(const Circle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
