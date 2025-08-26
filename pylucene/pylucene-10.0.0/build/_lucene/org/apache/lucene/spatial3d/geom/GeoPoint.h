#ifndef org_apache_lucene_spatial3d_geom_GeoPoint_H
#define org_apache_lucene_spatial3d_geom_GeoPoint_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class OutputStream;
    class InputStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class SerializableObject;
          class PlanetModel;
          class GeoPoint;
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

          class GeoPoint : public ::org::apache::lucene::spatial3d::geom::Vector {
           public:
            enum {
              mid_init$_da97eaa7d893a93a,
              mid_init$_2684d3cfbf647435,
              mid_init$_343ef47e55f98b41,
              mid_init$_643492163a564694,
              mid_init$_c9622524895ed2c0,
              mid_init$_da71cf588f580a7f,
              mid_init$_d9a4e61ca6fa57ba,
              mid_init$_1e0330d38bb81163,
              mid_init$_cc773a243e4751d8,
              mid_arcDistance_f4eb7dd53b5bdffc,
              mid_arcDistance_1b083e8094adc19b,
              mid_getLatitude_6fb37e123fed7a1f,
              mid_getLongitude_6fb37e123fed7a1f,
              mid_isIdentical_7af8bc7985ed2239,
              mid_isIdentical_7ff1eb501b1de7c2,
              mid_magnitude_6fb37e123fed7a1f,
              mid_toString_e7df854526d67fa3,
              mid_write_fbdd420d6e3d48b2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GeoPoint(jobject obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GeoPoint(const GeoPoint& obj) : ::org::apache::lucene::spatial3d::geom::Vector(obj) {}

            GeoPoint(const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
            GeoPoint(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            jdouble arcDistance(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jdouble arcDistance(jdouble, jdouble, jdouble) const;
            jdouble getLatitude() const;
            jdouble getLongitude() const;
            jboolean isIdentical(const GeoPoint &) const;
            jboolean isIdentical(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
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
          extern PyType_Def PY_TYPE_DEF(GeoPoint);
          extern PyTypeObject *PY_TYPE(GeoPoint);

          class t_GeoPoint {
          public:
            PyObject_HEAD
            GeoPoint object;
            static PyObject *wrap_Object(const GeoPoint&);
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
