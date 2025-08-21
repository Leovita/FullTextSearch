#ifndef org_apache_lucene_spatial3d_geom_PlanetObject_H
#define org_apache_lucene_spatial3d_geom_PlanetObject_H

#include "org/apache/lucene/spatial3d/geom/SerializableObject.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class PlanetObject : public ::org::apache::lucene::spatial3d::geom::SerializableObject {
           public:
            enum {
              mid_getPlanetModel_34d67eb8d4783247,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PlanetObject(jobject obj) : ::org::apache::lucene::spatial3d::geom::SerializableObject(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PlanetObject(const PlanetObject& obj) : ::org::apache::lucene::spatial3d::geom::SerializableObject(obj) {}

            ::org::apache::lucene::spatial3d::geom::PlanetModel getPlanetModel() const;
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
          extern PyType_Def PY_TYPE_DEF(PlanetObject);
          extern PyTypeObject *PY_TYPE(PlanetObject);

          class t_PlanetObject {
          public:
            PyObject_HEAD
            PlanetObject object;
            static PyObject *wrap_Object(const PlanetObject&);
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
