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

        class XYRectangle : public ::org::apache::lucene::geo::XYGeometry {
         public:
          enum {
            mid_init$_9bb03c2190964870,
            mid_equals_00d17418847797d4,
            mid_fromPointDistance_2547f71f0fe5cf8d,
            mid_hashCode_bd89ce15dad49192,
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
