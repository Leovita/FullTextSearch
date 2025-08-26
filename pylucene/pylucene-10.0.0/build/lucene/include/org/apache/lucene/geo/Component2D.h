#ifndef org_apache_lucene_geo_Component2D_H
#define org_apache_lucene_geo_Component2D_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Component2D$WithinRelation;
      }
      namespace index {
        class PointValues$Relation;
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
      namespace geo {

        class Component2D : public ::java::lang::Object {
         public:
          enum {
            mid_contains_ca47176ba6c35fb2,
            mid_containsLine_bdecbaef54cee286,
            mid_containsLine_c19892fdf37e3374,
            mid_containsPoint_69c138b7b2573e2f,
            mid_containsTriangle_69c138b7b2573e2f,
            mid_containsTriangle_d162a1f8e196e635,
            mid_disjoint_c19892fdf37e3374,
            mid_getMaxX_6fb37e123fed7a1f,
            mid_getMaxY_6fb37e123fed7a1f,
            mid_getMinX_6fb37e123fed7a1f,
            mid_getMinY_6fb37e123fed7a1f,
            mid_intersectsLine_bdecbaef54cee286,
            mid_intersectsLine_c19892fdf37e3374,
            mid_intersectsTriangle_69c138b7b2573e2f,
            mid_intersectsTriangle_d162a1f8e196e635,
            mid_pointInTriangle_9a77746177d008b9,
            mid_relate_592b56788fde49b0,
            mid_within_c19892fdf37e3374,
            mid_withinLine_47e5597f0d7f6c5f,
            mid_withinLine_2b4b52fcbce2d2f3,
            mid_withinPoint_95df59ea5229ab1d,
            mid_withinTriangle_5bbd552b4e798df6,
            mid_withinTriangle_b0d8a1887a0f3276,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Component2D(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Component2D(const Component2D& obj) : ::java::lang::Object(obj) {}

          jboolean contains(jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean containsPoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean containsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean disjoint(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          jdouble getMaxX() const;
          jdouble getMaxY() const;
          jdouble getMinX() const;
          jdouble getMinY() const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          jboolean intersectsTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble) const;
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::index::PointValues$Relation relate(jdouble, jdouble, jdouble, jdouble) const;
          static jboolean within(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinLine(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinPoint(jdouble, jdouble) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
          ::org::apache::lucene::geo::Component2D$WithinRelation withinTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean, jdouble, jdouble, jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Component2D);
        extern PyTypeObject *PY_TYPE(Component2D);

        class t_Component2D {
        public:
          PyObject_HEAD
          Component2D object;
          static PyObject *wrap_Object(const Component2D&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
