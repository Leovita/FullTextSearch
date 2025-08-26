#ifndef org_apache_lucene_document_LatLonShape_H
#define org_apache_lucene_document_LatLonShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class LatLonGeometry;
        class Circle;
        class Polygon;
        class Line;
      }
      namespace document {
        class LatLonShapeDocValuesField;
        class ShapeField$QueryRelation;
        class LatLonShapeDocValues;
        class ShapeField$DecodedTriangle;
        class Field;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LatLonShape : public ::java::lang::Object {
         public:
          enum {
            mid_createDocValueField_040253fbbacf3a38,
            mid_createDocValueField_e518b36dc03af7d7,
            mid_createDocValueField_418f6c62e806d636,
            mid_createDocValueField_f6ba1f0a7bc8f877,
            mid_createDocValueField_6a0b8ae895657ef2,
            mid_createDocValueField_7810dd7bb3d7ea01,
            mid_createDocValueField_93fa3c8185e3489c,
            mid_createIndexableFields_c8337a271958170a,
            mid_createIndexableFields_a4e0c5a133bb9952,
            mid_createIndexableFields_b39478eced22eb4d,
            mid_createIndexableFields_06e45285b86d45b7,
            mid_createLatLonShapeDocValues_026504099aa11be8,
            mid_newBoxQuery_b3e580956f2801fd,
            mid_newDistanceQuery_84d62a6be6a31507,
            mid_newGeometryQuery_011f4a02e303334b,
            mid_newLineQuery_231db809c5b46353,
            mid_newPointQuery_c25fae0b117dc04e,
            mid_newPolygonQuery_e58bbb83018eacfa,
            mid_newSlowDocValuesBoxQuery_b3e580956f2801fd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonShape(const LatLonShape& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Line &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const JArray< ::org::apache::lucene::document::Field > &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::java::util::List &);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &, jboolean);
          static ::org::apache::lucene::document::LatLonShapeDocValuesField createDocValueField(const ::java::lang::String &, jdouble, jdouble);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Line &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::Polygon &, jboolean);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::document::LatLonShapeDocValues createLatLonShapeDocValues(const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Circle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Line > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jdouble > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          static ::org::apache::lucene::search::Query newSlowDocValuesBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jdouble, jdouble, jdouble, jdouble);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LatLonShape);
        extern PyTypeObject *PY_TYPE(LatLonShape);

        class t_LatLonShape {
        public:
          PyObject_HEAD
          LatLonShape object;
          static PyObject *wrap_Object(const LatLonShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
