#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeShape_H

#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Plane;
          class Vector;
          class Membership;
          class GeoShape;
          class PlanetModel;
          class GeoPoint;
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
    class Object;
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
              mid_init$_b88e4aded392c9f4,
              mid_init$_05079111a134d0e5,
              mid_addShape_e092afae31c1f78c,
              mid_equals_570b5248a6da3ef6,
              mid_getBounds_d23bdea549cf3849,
              mid_getEdgePoints_05087e5d605ddc41,
              mid_getShape_044961e50afd1c16,
              mid_getShapes_36830460e10839eb,
              mid_hashCode_20fbf7565993c3d7,
              mid_intersects_2e010e50159965c2,
              mid_isWithin_d2545ca8f40aaba4,
              mid_isWithin_5f47c01c69ca9460,
              mid_size_20fbf7565993c3d7,
              mid_write_84831c9725b47eae,
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
