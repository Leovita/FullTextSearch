#ifndef org_apache_lucene_spatial3d_geom_SidedPlane_H
#define org_apache_lucene_spatial3d_geom_SidedPlane_H

#include "org/apache/lucene/spatial3d/geom/Plane.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class SidedPlane;
          class Membership;
          class PlanetModel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
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
              mid_init$_b1edd451bf29f524,
              mid_init$_f2ac4859e4940723,
              mid_init$_a6dd507b8ffe1fb8,
              mid_init$_e5657c79236390c7,
              mid_init$_ca13ab03e6f1ace6,
              mid_init$_7d67a7c71c3bc95d,
              mid_init$_80feec4677023f2a,
              mid_init$_46cbe7fec55ec89b,
              mid_init$_f7eeb33db981fd47,
              mid_init$_339dca06cd3a5b03,
              mid_constructNormalizedPerpendicularSidedPlane_cd53e8e6be7509ee,
              mid_constructNormalizedThreePointSidedPlane_cd53e8e6be7509ee,
              mid_constructSidedPlaneFromOnePoint_d832cef8e0a5e282,
              mid_constructSidedPlaneFromTwoPoints_6bac049656052e80,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_isWithin_7ff1eb501b1de7c2,
              mid_strictlyWithin_f78acf28287584e8,
              mid_strictlyWithin_7ff1eb501b1de7c2,
              mid_toString_e7df854526d67fa3,
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
