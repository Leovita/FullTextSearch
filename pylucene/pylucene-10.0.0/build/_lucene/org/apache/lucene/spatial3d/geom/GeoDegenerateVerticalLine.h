#ifndef org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H
#define org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseBBox.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class Membership;
          class GeoShape;
          class PlanetModel;
          class GeoPoint;
          class GeoBBox;
          class Bounds;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoDegenerateVerticalLine : public ::org::apache::lucene::spatial3d::geom::GeoBaseBBox {
           public:
            enum {
              mid_init$_0ce6bc2f42b874f2,
              mid_init$_0d995a30fc6ae903,
              mid_equals_570b5248a6da3ef6,
              mid_expand_618c6b01c5366197,
              mid_getBounds_d23bdea549cf3849,
              mid_getCenter_d361626f39bd8d0c,
              mid_getEdgePoints_05087e5d605ddc41,
              mid_getRadius_32caabaad86c508b,
              mid_getRelationship_8f22277e6d81944f,
              mid_hashCode_20fbf7565993c3d7,
              mid_intersects_9d5b040d556fdb23,
              mid_intersects_2e010e50159965c2,
              mid_isWithin_5f47c01c69ca9460,
              mid_toString_09a7afff1868fc5e,
              mid_write_84831c9725b47eae,
              mid_outsideDistance_843fc02405cdd09d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoDegenerateVerticalLine(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoDegenerateVerticalLine(const GeoDegenerateVerticalLine& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseBBox(obj) {}

            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoDegenerateVerticalLine(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::GeoBBox expand(jdouble) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            ::org::apache::lucene::spatial3d::geom::GeoPoint getCenter() const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            jdouble getRadius() const;
            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            ::java::lang::String toString() const;
            void write(const ::java::io::OutputStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(GeoDegenerateVerticalLine);
          extern PyTypeObject *PY_TYPE(GeoDegenerateVerticalLine);

          class t_GeoDegenerateVerticalLine {
          public:
            PyObject_HEAD
            GeoDegenerateVerticalLine object;
            static PyObject *wrap_Object(const GeoDegenerateVerticalLine&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
