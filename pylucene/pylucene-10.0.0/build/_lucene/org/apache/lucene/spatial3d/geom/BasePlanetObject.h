#ifndef org_apache_lucene_spatial3d_geom_BasePlanetObject_H
#define org_apache_lucene_spatial3d_geom_BasePlanetObject_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
    class OutputStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetObject;
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

          class BasePlanetObject : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ed6d55ea06962af0,
              mid_equals_00d17418847797d4,
              mid_getPlanetModel_43dd43afc5796af5,
              mid_hashCode_bd89ce15dad49192,
              mid_write_fbdd420d6e3d48b2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasePlanetObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasePlanetObject(const BasePlanetObject& obj) : ::java::lang::Object(obj) {}

            BasePlanetObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::spatial3d::geom::PlanetModel getPlanetModel() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(BasePlanetObject);
          extern PyTypeObject *PY_TYPE(BasePlanetObject);

          class t_BasePlanetObject {
          public:
            PyObject_HEAD
            BasePlanetObject object;
            static PyObject *wrap_Object(const BasePlanetObject&);
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
