#ifndef org_apache_lucene_geo_XYRectangle_H
#define org_apache_lucene_geo_XYRectangle_H

#include "org/apache/lucene/geo/XYGeometry.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYRectangle;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class XYRectangle : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_b464fbf7627ff1ea,
            mid_equals_570b5248a6da3ef6,
            mid_fromPointDistance_241303afc8d0b26e,
            mid_hashCode_20fbf7565993c3d7,
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

          explicit XYRectangle(jobject obj) : ::org::apache::lucene::geo::XYGeometry(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYRectangle(const XYRectangle& obj) : ::org::apache::lucene::geo::XYGeometry(obj) {}

          jfloat _get_maxX() const;
          jfloat _get_maxY() const;
          jfloat _get_minX() const;
          jfloat _get_minY() const;

          XYRectangle(jfloat, jfloat, jfloat, jfloat);

          jboolean equals(const ::java::lang::Object &) const;
          static XYRectangle fromPointDistance(jfloat, jfloat, jfloat);
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
        extern PyType_Def PY_TYPE_DEF(XYRectangle);
        extern PyTypeObject *PY_TYPE(XYRectangle);

        class t_XYRectangle {
        public:
          PyObject_HEAD
          XYRectangle object;
          static PyObject *wrap_Object(const XYRectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
