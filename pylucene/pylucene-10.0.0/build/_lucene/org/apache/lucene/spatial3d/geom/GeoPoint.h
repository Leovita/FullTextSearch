#ifndef org_apache_lucene_spatial3d_geom_GeoPoint_H
#define org_apache_lucene_spatial3d_geom_GeoPoint_H

#include "org/apache/lucene/spatial3d/geom/Vector.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoPoint;
          class SerializableObject;
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
              mid_init$_37e23ef4361d4c28,
              mid_init$_0ce6bc2f42b874f2,
              mid_init$_176592fb3884de21,
              mid_init$_4d2b38be0e1337a3,
              mid_init$_e61e485ff70a664a,
              mid_init$_212152a93c4564a9,
              mid_init$_6da2e5c228e8cf15,
              mid_init$_51413c97926d5204,
              mid_init$_a8031a2aa5227629,
              mid_arcDistance_80a11677b239f4fb,
              mid_arcDistance_19200a6b63234ec9,
              mid_getLatitude_32caabaad86c508b,
              mid_getLongitude_32caabaad86c508b,
              mid_isIdentical_015808fe2c49222d,
              mid_isIdentical_5f47c01c69ca9460,
              mid_magnitude_32caabaad86c508b,
              mid_toString_09a7afff1868fc5e,
              mid_write_84831c9725b47eae,
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
