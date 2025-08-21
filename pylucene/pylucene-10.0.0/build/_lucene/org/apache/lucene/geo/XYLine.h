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
            mid_init$_6bacb6e220725ab1,
            mid_equals_570b5248a6da3ef6,
            mid_getX_808165844ea67079,
            mid_getX_29cfa01aaad92564,
            mid_getY_808165844ea67079,
            mid_getY_29cfa01aaad92564,
            mid_hashCode_20fbf7565993c3d7,
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
