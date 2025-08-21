#ifndef org_apache_lucene_geo_Component2D_H
#define org_apache_lucene_geo_Component2D_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$Relation;
      }
      namespace geo {
        class Component2D$WithinRelation;
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
            mid_contains_342fb7117d75ad7c,
            mid_containsLine_f2adb1f506660be3,
            mid_containsLine_aa991ddb006b2e24,
            mid_containsPoint_76b9f452c8cc4e1e,
            mid_containsTriangle_76b9f452c8cc4e1e,
            mid_containsTriangle_9c536bd438c08946,
            mid_disjoint_aa991ddb006b2e24,
            mid_getMaxX_32caabaad86c508b,
            mid_getMaxY_32caabaad86c508b,
            mid_getMinX_32caabaad86c508b,
            mid_getMinY_32caabaad86c508b,
            mid_intersectsLine_f2adb1f506660be3,
            mid_intersectsLine_aa991ddb006b2e24,
            mid_intersectsTriangle_76b9f452c8cc4e1e,
            mid_intersectsTriangle_9c536bd438c08946,
            mid_pointInTriangle_b3bef1855079e886,
            mid_relate_b35cd1a8a08327e7,
            mid_within_aa991ddb006b2e24,
            mid_withinLine_6f8e031cd30b2e04,
            mid_withinLine_ea24b0d81b88a140,
            mid_withinPoint_fe9874a30f09254f,
            mid_withinTriangle_a3fdd7eb90ca7744,
            mid_withinTriangle_c551708143c12441,
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
