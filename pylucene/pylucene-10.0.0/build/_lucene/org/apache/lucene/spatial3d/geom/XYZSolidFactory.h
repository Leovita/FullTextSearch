#ifndef org_apache_lucene_spatial3d_geom_XYZSolidFactory_H
#define org_apache_lucene_spatial3d_geom_XYZSolidFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class XYZSolid;
          class PlanetModel;
          class XYZBounds;
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

          class XYZSolidFactory : public ::java::lang::Object {
           public:
            enum {
              mid_makeXYZSolid_8fab01200afec168,
              mid_makeXYZSolid_d06332948485f19f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit XYZSolidFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            XYZSolidFactory(const XYZSolidFactory& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::spatial3d::geom::XYZSolid makeXYZSolid(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::org::apache::lucene::spatial3d::geom::XYZBounds &);
            static ::org::apache::lucene::spatial3d::geom::XYZSolid makeXYZSolid(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
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
          extern PyType_Def PY_TYPE_DEF(XYZSolidFactory);
          extern PyTypeObject *PY_TYPE(XYZSolidFactory);

          class t_XYZSolidFactory {
          public:
            PyObject_HEAD
            XYZSolidFactory object;
            static PyObject *wrap_Object(const XYZSolidFactory&);
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
