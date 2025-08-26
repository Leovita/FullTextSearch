#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class Vector;
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
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoBaseCompositeShape : public ::org::apache::lucene::spatial3d::geom::BasePlanetObject {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_init$_f0c441081bfdcfd8,
              mid_addShape_6561a5edf4dc2771,
              mid_equals_00d17418847797d4,
              mid_getBounds_92d81e4ba71a8653,
              mid_getEdgePoints_95d1cb3266b24052,
              mid_getShape_d3e412f4b42185fc,
              mid_getShapes_1387e1e2702ac173,
              mid_hashCode_bd89ce15dad49192,
              mid_intersects_3db773112fd2ab99,
              mid_isWithin_f78acf28287584e8,
              mid_isWithin_7ff1eb501b1de7c2,
              mid_size_bd89ce15dad49192,
              mid_write_fbdd420d6e3d48b2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeShape(const GeoBaseCompositeShape& obj) : ::org::apache::lucene::spatial3d::geom::BasePlanetObject(obj) {}

            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoBaseCompositeShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);

            void addShape(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean equals(const ::java::lang::Object &) const;
            void getBounds(const ::org::apache::lucene::spatial3d::geom::Bounds &) const;
            JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > getEdgePoints() const;
            ::org::apache::lucene::spatial3d::geom::GeoShape getShape(jint) const;
            ::java::util::List getShapes() const;
            jint hashCode() const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::Plane &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jboolean isWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeShape);

          class t_GeoBaseCompositeShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeShape&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
