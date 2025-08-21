#ifndef org_apache_lucene_spatial3d_geom_Vector_H
#define org_apache_lucene_spatial3d_geom_Vector_H

#include "java/lang/Object.h"

namespace java {
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
          class Vector;
          class Membership;
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

          class Vector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4e6f5223a38e955e,
              mid_init$_4d2b38be0e1337a3,
              mid_init$_c2145957f9ec8fcc,
              mid_init$_51413c97926d5204,
              mid_crossProductEvaluateIsZero_1d6ca20184690755,
              mid_dotProduct_80a11677b239f4fb,
              mid_dotProduct_19200a6b63234ec9,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_isNumericallyIdentical_d2545ca8f40aaba4,
              mid_isNumericallyIdentical_5f47c01c69ca9460,
              mid_isParallel_d2545ca8f40aaba4,
              mid_isParallel_5f47c01c69ca9460,
              mid_isWithin_a2812c30ee54b64b,
              mid_linearDistance_80a11677b239f4fb,
              mid_linearDistance_19200a6b63234ec9,
              mid_linearDistanceSquared_80a11677b239f4fb,
              mid_linearDistanceSquared_19200a6b63234ec9,
              mid_magnitude_32caabaad86c508b,
              mid_magnitude_19200a6b63234ec9,
              mid_normalDistance_80a11677b239f4fb,
              mid_normalDistance_19200a6b63234ec9,
              mid_normalDistanceSquared_80a11677b239f4fb,
              mid_normalDistanceSquared_19200a6b63234ec9,
              mid_normalize_9514e55ae79ad2fa,
              mid_rotateXY_57751a161cebb400,
              mid_rotateXY_832539ebac8497cf,
              mid_rotateXZ_57751a161cebb400,
              mid_rotateXZ_832539ebac8497cf,
              mid_rotateZY_57751a161cebb400,
              mid_rotateZY_832539ebac8497cf,
              mid_toString_09a7afff1868fc5e,
              mid_translate_4ed796d68b1fe651,
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
