#ifndef org_apache_lucene_spatial3d_geom_GeoCompositeAreaShape_H
#define org_apache_lucene_spatial3d_geom_GeoCompositeAreaShape_H

#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeAreaShape.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class InputStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoAreaShape;
          class PlanetModel;
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

          class GeoCompositeAreaShape : public ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_init$_2684d3cfbf647435,
              mid_equals_00d17418847797d4,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoCompositeAreaShape(jobject obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoCompositeAreaShape(const GeoCompositeAreaShape& obj) : ::org::apache::lucene::spatial3d::geom::GeoBaseCompositeAreaShape(obj) {}

            GeoCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
            GeoCompositeAreaShape(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);

            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoCompositeAreaShape);
          extern PyTypeObject *PY_TYPE(GeoCompositeAreaShape);

          class t_GeoCompositeAreaShape {
          public:
            PyObject_HEAD
            GeoCompositeAreaShape object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GeoCompositeAreaShape *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GeoCompositeAreaShape&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GeoCompositeAreaShape&, PyTypeObject *);
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
