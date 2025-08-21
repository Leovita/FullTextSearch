#ifndef org_apache_lucene_spatial3d_Geo3DPoint_H
#define org_apache_lucene_spatial3d_Geo3DPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class FieldType;
      }
      namespace spatial3d {
        namespace geom {
          class PlanetModel;
          class GeoShape;
        }
      }
      namespace geo {
        class Polygon;
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
            mid_init$_2095eaca19a2819d,
            mid_init$_9c9e3683eff4eeeb,
            mid_init$_589699ccf9019f69,
            mid_init$_d9bd7b6db3184e36,
            mid_decodeDimension_ff47a941f428e4d4,
            mid_encodeDimension_16829905d72ac7d9,
            mid_newBoxQuery_95e417d10cdb8136,
            mid_newDistanceQuery_c1fa2089f7f526f1,
            mid_newLargePolygonQuery_93c4a3c306a83343,
            mid_newPathQuery_547ae09ca713d30d,
            mid_newPolygonQuery_93c4a3c306a83343,
            mid_newShapeQuery_41ae9699e5edaffd,
            mid_toString_09a7afff1868fc5e,
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
