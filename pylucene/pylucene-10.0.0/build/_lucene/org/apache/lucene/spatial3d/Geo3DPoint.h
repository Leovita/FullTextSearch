#ifndef org_apache_lucene_spatial3d_Geo3DPoint_H
#define org_apache_lucene_spatial3d_Geo3DPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoShape;
          class PlanetModel;
        }
      }
      namespace geo {
        class Polygon;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
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

        class Geo3DPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_21693830df0f9110,
            mid_init$_f125438b32dc5e11,
            mid_init$_b9aea55ce7dd073b,
            mid_init$_dd57dbbef986029c,
            mid_decodeDimension_a99c8357b510cd8e,
            mid_encodeDimension_1f2ecfe2b7a6f3ee,
            mid_newBoxQuery_b791db651c9974c8,
            mid_newDistanceQuery_14a5df2bcd228f82,
            mid_newLargePolygonQuery_a567819e53fca1a9,
            mid_newPathQuery_b9ec0bdc90688ac0,
            mid_newPolygonQuery_a567819e53fca1a9,
            mid_newShapeQuery_eea38c53d8b6564d,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Geo3DPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Geo3DPoint(const Geo3DPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, jdouble, jdouble, jdouble);
          Geo3DPoint(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);

          static jdouble decodeDimension(const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newLargePolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newPathQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &, jdouble, const ::org::apache::lucene::spatial3d::geom::PlanetModel &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newShapeQuery(const ::java::lang::String &, const ::org::apache::lucene::spatial3d::geom::GeoShape &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        extern PyType_Def PY_TYPE_DEF(Geo3DPoint);
        extern PyTypeObject *PY_TYPE(Geo3DPoint);

        class t_Geo3DPoint {
        public:
          PyObject_HEAD
          Geo3DPoint object;
          static PyObject *wrap_Object(const Geo3DPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
