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
            mid_init$_13cb7e72f513d797,
            mid_equals_570b5248a6da3ef6,
            mid_getX_9b6c3480dac00edf,
            mid_getY_9b6c3480dac00edf,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_toComponent2D_2671ab2559e4bc09,
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
