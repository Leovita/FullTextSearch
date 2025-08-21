#ifndef org_apache_lucene_document_LatLonShape_H
#define org_apache_lucene_document_LatLonShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Line;
        class Polygon;
        class LatLonGeometry;
        class Circle;
      }
      namespace search {
        class Query;
      }
      namespace document {
        class ShapeField$QueryRelation;
        class Field;
        class LatLonShapeDocValues;
        class ShapeField$DecodedTriangle;
        class LatLonShapeDocValuesField;
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
            mid_createDocValueField_f847f14236f4b2c6,
            mid_createDocValueField_3111b1686d9d8e96,
            mid_createDocValueField_360436f93fc32283,
            mid_createDocValueField_d54d6c4d69e08cbe,
            mid_createDocValueField_7c168ccdec8b1c03,
            mid_createDocValueField_054b9bc1e7ec8cba,
            mid_createDocValueField_3c18f513beecace4,
            mid_createIndexableFields_f156fd3849aa708d,
            mid_createIndexableFields_dd32b9a0e6e01136,
            mid_createIndexableFields_250ffe29ef52ee10,
            mid_createIndexableFields_f9b327790697b7a6,
            mid_createLatLonShapeDocValues_ddf4df05092625fc,
            mid_newBoxQuery_26674fb13918304d,
            mid_newDistanceQuery_44d98c00bf72e618,
            mid_newGeometryQuery_cb622dfcc773fe50,
            mid_newLineQuery_3ec7f79ecf5e7dc8,
            mid_newPointQuery_40096e14966c4a16,
            mid_newPolygonQuery_8dbe9b614c7a91c2,
            mid_newSlowDocValuesBoxQuery_26674fb13918304d,
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
