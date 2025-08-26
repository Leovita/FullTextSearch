#ifndef org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoBaseCompositeAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeMembershipShape.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class GeoAreaShape;
          class PlanetModel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class InputStream;
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
              mid_init$_ed6d55ea06962af0,
              mid_init$_f0c441081bfdcfd8,
              mid_getRelationship_45c244038f50cef7,
              mid_intersects_f6f461ab5889e14d,
              mid_isShapeInsideGeoAreaShape_45c244038f50cef7,
              mid_isGeoAreaShapeInsideShape_45c244038f50cef7,
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
