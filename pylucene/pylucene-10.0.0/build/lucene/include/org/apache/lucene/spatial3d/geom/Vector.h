#ifndef org_apache_lucene_spatial3d_geom_Vector_H
#define org_apache_lucene_spatial3d_geom_Vector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class Vector;
          class Membership;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
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

          class Vector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_b1edd451bf29f524,
              mid_init$_643492163a564694,
              mid_init$_975cde7205bb1ed3,
              mid_init$_1e0330d38bb81163,
              mid_crossProductEvaluateIsZero_666cc1cddcda5946,
              mid_dotProduct_f4eb7dd53b5bdffc,
              mid_dotProduct_1b083e8094adc19b,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_isNumericallyIdentical_f78acf28287584e8,
              mid_isNumericallyIdentical_7ff1eb501b1de7c2,
              mid_isParallel_f78acf28287584e8,
              mid_isParallel_7ff1eb501b1de7c2,
              mid_isWithin_ddda32fd7791acb7,
              mid_linearDistance_f4eb7dd53b5bdffc,
              mid_linearDistance_1b083e8094adc19b,
              mid_linearDistanceSquared_f4eb7dd53b5bdffc,
              mid_linearDistanceSquared_1b083e8094adc19b,
              mid_magnitude_6fb37e123fed7a1f,
              mid_magnitude_1b083e8094adc19b,
              mid_normalDistance_f4eb7dd53b5bdffc,
              mid_normalDistance_1b083e8094adc19b,
              mid_normalDistanceSquared_f4eb7dd53b5bdffc,
              mid_normalDistanceSquared_1b083e8094adc19b,
              mid_normalize_1c1dffe79b300ffa,
              mid_rotateXY_a08c5a77d64ef63a,
              mid_rotateXY_96cea192d07f710d,
              mid_rotateXZ_a08c5a77d64ef63a,
              mid_rotateXZ_96cea192d07f710d,
              mid_rotateZY_a08c5a77d64ef63a,
              mid_rotateZY_96cea192d07f710d,
              mid_toString_e7df854526d67fa3,
              mid_translate_cfd40f7362e050cd,
              max_mid
            };

            enum {
              fid_x,
              fid_y,
              fid_z,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector(const Vector& obj) : ::java::lang::Object(obj) {}

            static jdouble MINIMUM_ANGULAR_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION;
            static jdouble MINIMUM_RESOLUTION_CUBED;
            static jdouble MINIMUM_RESOLUTION_SQUARED;

            jdouble _get_x() const;
            jdouble _get_y() const;
            jdouble _get_z() const;

            Vector(const Vector &, const Vector &);
            Vector(jdouble, jdouble, jdouble);
            Vector(const Vector &, jdouble, jdouble, jdouble);
            Vector(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

            static jboolean crossProductEvaluateIsZero(const Vector &, const Vector &, const Vector &);
            jdouble dotProduct(const Vector &) const;
            jdouble dotProduct(jdouble, jdouble, jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isNumericallyIdentical(const Vector &) const;
            jboolean isNumericallyIdentical(jdouble, jdouble, jdouble) const;
            jboolean isParallel(const Vector &) const;
            jboolean isParallel(jdouble, jdouble, jdouble) const;
            jboolean isWithin(const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &, const JArray< ::org::apache::lucene::spatial3d::geom::Membership > &) const;
            jdouble linearDistance(const Vector &) const;
            jdouble linearDistance(jdouble, jdouble, jdouble) const;
            jdouble linearDistanceSquared(const Vector &) const;
            jdouble linearDistanceSquared(jdouble, jdouble, jdouble) const;
            jdouble magnitude() const;
            static jdouble magnitude(jdouble, jdouble, jdouble);
            jdouble normalDistance(const Vector &) const;
            jdouble normalDistance(jdouble, jdouble, jdouble) const;
            jdouble normalDistanceSquared(const Vector &) const;
            jdouble normalDistanceSquared(jdouble, jdouble, jdouble) const;
            Vector normalize() const;
            Vector rotateXY(jdouble) const;
            Vector rotateXY(jdouble, jdouble) const;
            Vector rotateXZ(jdouble) const;
            Vector rotateXZ(jdouble, jdouble) const;
            Vector rotateZY(jdouble) const;
            Vector rotateZY(jdouble, jdouble) const;
            ::java::lang::String toString() const;
            Vector translate(jdouble, jdouble, jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(Vector);
          extern PyTypeObject *PY_TYPE(Vector);

          class t_Vector {
          public:
            PyObject_HEAD
            Vector object;
            static PyObject *wrap_Object(const Vector&);
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
