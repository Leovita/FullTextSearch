#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeMembershipShape.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class PlanetModel;
          class GeoAreaShape;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class GeoBaseCompositeAreaShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape {
           public:
            enum {
              mid_init$_b88e4aded392c9f4,
              mid_init$_05079111a134d0e5,
              mid_getRelationship_8f22277e6d81944f,
              mid_intersects_9d5b040d556fdb23,
              mid_isShapeInsideGeoAreaShape_8f22277e6d81944f,
              mid_isGeoAreaShapeInsideShape_8f22277e6d81944f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBaseCompositeAreaShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBaseCompositeAreaShape(const GeoBaseCompositeAreaShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeMembershipShape(obj) {}

            GeoBaseCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoBaseCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);

            jint getRelationship(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
            jboolean intersects(const ::org::apache::lucene::spatial3d::geom::GeoShape &) const;
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
          extern PyType_Def PY_TYPE_DEF(GeoBaseCompositeAreaShape);
          extern PyTypeObject *PY_TYPE(GeoBaseCompositeAreaShape);

          class t_GeoBaseCompositeAreaShape {
          public:
            PyObject_HEAD
            GeoBaseCompositeAreaShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoBaseCompositeAreaShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoBaseCompositeAreaShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoBaseCompositeAreaShape&, PyTypeObject *);
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
