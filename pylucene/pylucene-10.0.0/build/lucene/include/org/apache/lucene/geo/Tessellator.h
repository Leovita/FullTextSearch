#ifndef org_apache_lucene_geo_Tessellator_H
#define org_apache_lucene_geo_Tessellator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Polygon;
        class Tessellator$Triangle;
        class Tessellator$Monitor;
        class XYPolygon;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator : public ::java::lang::Object {
         public:
          enum {
            mid_linesIntersect_c19892fdf37e3374,
            mid_pointInTriangle_c19892fdf37e3374,
            mid_tessellate_7f337b5b3d6ab1fe,
            mid_tessellate_a4cd6a3a7e2bd4ec,
            mid_tessellate_e5463b6f3090e92a,
            mid_tessellate_b53307d2fc28dc9c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator(const Tessellator& obj) : ::java::lang::Object(obj) {}

          static jboolean linesIntersect(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static jboolean pointInTriangle(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::Polygon &, jboolean);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::Polygon &, jboolean, const ::org::apache::lucene::geo::Tessellator$Monitor &);
          static ::java::util::List tessellate(const ::org::apache::lucene::geo::XYPolygon &, jboolean, const ::org::apache::lucene::geo::Tessellator$Monitor &);
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
        extern PyType_Def PY_TYPE_DEF(Tessellator);
        extern PyTypeObject *PY_TYPE(Tessellator);

        class t_Tessellator {
        public:
          PyObject_HEAD
          Tessellator object;
          static PyObject *wrap_Object(const Tessellator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
