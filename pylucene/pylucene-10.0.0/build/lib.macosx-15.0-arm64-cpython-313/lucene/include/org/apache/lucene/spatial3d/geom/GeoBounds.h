#ifndef org_apache_lucene_spatial3d_geom_GeoBounds_H
#define org_apache_lucene_spatial3d_geom_GeoBounds_H

#include "org/apache/lucene/spatial3d/geom/Bounded.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Membership;
          class PlanetObject;
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

          class GeoBounds : public ::org::apache::lucene::spatial3d::geom::Bounded {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoBounds(jobject obj) : ::org::apache::lucene::spatial3d::geom::Bounded(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoBounds(const GeoBounds& obj) : ::org::apache::lucene::spatial3d::geom::Bounded(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(GeoBounds);
          extern PyTypeObject *PY_TYPE(GeoBounds);

          class t_GeoBounds {
          public:
            PyObject_HEAD
            GeoBounds object;
            static PyObject *wrap_Object(const GeoBounds&);
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
