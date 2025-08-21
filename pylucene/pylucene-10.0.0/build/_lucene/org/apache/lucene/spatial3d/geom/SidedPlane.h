#ifndef org_apache_lucene_spatial3d_geom_SidedPlane_H
#define org_apache_lucene_spatial3d_geom_SidedPlane_H

#include "org/apache/lucene/spatial3d/geom/Plane.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class SidedPlane;
          class Vector;
          class Membership;
          class PlanetModel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SidedPlane : public ::org::apache::lucene::spatial3d::geom::Plane {
           public:
            enum {
              mid_init$_4e6f5223a38e955e,
              mid_init$_909cc085c0ff5373,
              mid_init$_7655b9b54c546625,
              mid_init$_048abc0ee5f5b16f,
              mid_init$_936f91b4d4860536,
              mid_init$_94f55fda0fdcc156,
              mid_init$_81baefb1f38a6c3c,
              mid_init$_671b05993acfb2c5,
              mid_init$_d65a60daae1ea27c,
              mid_init$_5f5dc7669369f74d,
              mid_constructNormalizedPerpendicularSidedPlane_d630b97ee76c8cf9,
              mid_constructNormalizedThreePointSidedPlane_d630b97ee76c8cf9,
              mid_constructSidedPlaneFromOnePoint_90104cdac895afea,
              mid_constructSidedPlaneFromTwoPoints_1f7f6743dab0c6f4,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_isWithin_5f47c01c69ca9460,
              mid_strictlyWithin_d2545ca8f40aaba4,
              mid_strictlyWithin_5f47c01c69ca9460,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_sigNum,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SidedPlane(jobject obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SidedPlane(const SidedPlane& obj) : ::org::apache::lucene::spatial3d::geom::Plane(obj) {}

            jdouble _get_sigNum() const;

            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jboolean, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble);
            SidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble, jdouble, jdouble, jdouble);
            SidedPlane(jdouble, jdouble, jdouble, const ::org::apache::lucene::spatial3d::geom::Vector &, jdouble);

            static SidedPlane constructNormalizedPerpendicularSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructNormalizedThreePointSidedPlane(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructSidedPlaneFromOnePoint(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Plane &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            static SidedPlane constructSidedPlaneFromTwoPoints(const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &, const ::org::apache::lucene::spatial3d::geom::Vector &);
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isWithin(jdouble, jdouble, jdouble) const;
            jboolean strictlyWithin(const ::org::apache::lucene::spatial3d::geom::Vector &) const;
            jboolean strictlyWithin(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(SidedPlane);
          extern PyTypeObject *PY_TYPE(SidedPlane);

          class t_SidedPlane {
          public:
            PyObject_HEAD
            SidedPlane object;
            static PyObject *wrap_Object(const SidedPlane&);
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
