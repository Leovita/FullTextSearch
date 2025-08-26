#ifndef org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H
#define org_apache_lucene_spatial3d_geom_GeoDegenerateVerticalLine_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseBBox.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class GeoBBox;
          class Plane;
          class Membership;
          class Bounds;
          class PlanetModel;
          class GeoPoint;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
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
              mid_init$_2684d3cfbf647435,
              mid_init$_680cb48169defb63,
              mid_equals_00d17418847797d4,
              mid_expand_fc16670221639d8c,
              mid_getBounds_92d81e4ba71a8653,
              mid_getCenter_a531918020d448c7,
              mid_getEdgePoints_95d1cb3266b24052,
              mid_getRadius_6fb37e123fed7a1f,
              mid_getRelationship_45c244038f50cef7,
              mid_hashCode_bd89ce15dad49192,
              mid_intersects_f6f461ab5889e14d,
              mid_intersects_3db773112fd2ab99,
              mid_isWithin_7ff1eb501b1de7c2,
              mid_toString_e7df854526d67fa3,
              mid_write_fbdd420d6e3d48b2,
              mid_outsideDistance_79a34b4fe77da1ae,
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
