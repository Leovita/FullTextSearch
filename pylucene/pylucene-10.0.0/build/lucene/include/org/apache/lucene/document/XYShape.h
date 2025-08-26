#ifndef org_apache_lucene_document_XYShape_H
#define org_apache_lucene_document_XYShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class XYShapeDocValues;
        class XYShapeDocValuesField;
        class ShapeField$QueryRelation;
        class ShapeField$DecodedTriangle;
        class Field;
      }
      namespace geo {
        class XYLine;
        class XYGeometry;
        class XYCircle;
        class XYPolygon;
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

        class XYShape : public ::java::lang::Object {
         public:
          enum {
            mid_createDocValueField_b33c401271cbb62f,
            mid_createDocValueField_5799263643cbee07,
            mid_createDocValueField_97622250c8dd75e1,
            mid_createDocValueField_0d8191963f32d648,
            mid_createDocValueField_8bf569c5347dd757,
            mid_createDocValueField_d65613a1c89b6234,
            mid_createIndexableFields_8ddd0c69ac927d2d,
            mid_createIndexableFields_0b23e979978c6e80,
            mid_createIndexableFields_f7cb8b91607f98f9,
            mid_createIndexableFields_53f7c0f1dccda9cb,
            mid_createXYShapeDocValues_ba2bf1b6ef768db0,
            mid_newBoxQuery_5eaa191c05b24539,
            mid_newDistanceQuery_0550dbaf254d932d,
            mid_newGeometryQuery_f0fdbf85b03e6723,
            mid_newLineQuery_363e27c336c60df9,
            mid_newPointQuery_9a37adb4fe604e0f,
            mid_newPolygonQuery_6ed28e9e4017d45c,
            mid_newSlowDocValuesBoxQuery_5eaa191c05b24539,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShape(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShape(const XYShape& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYLine &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::java::util::List &);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static ::org::apache::lucene::document::XYShapeDocValuesField createDocValueField(const ::java::lang::String &, jfloat, jfloat);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYLine &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, const ::org::apache::lucene::geo::XYPolygon &, jboolean);
          static JArray< ::org::apache::lucene::document::Field > createIndexableFields(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::document::XYShapeDocValues createXYShapeDocValues(const ::org::apache::lucene::util::BytesRef &);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jfloat, jfloat, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYCircle > &);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYGeometry > &);
          static ::org::apache::lucene::search::Query newLineQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYLine > &);
          static ::org::apache::lucene::search::Query newPointQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< JArray< jfloat > > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::XYPolygon > &);
          static ::org::apache::lucene::search::Query newSlowDocValuesBoxQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, jfloat, jfloat, jfloat, jfloat);
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
        extern PyType_Def PY_TYPE_DEF(XYShape);
        extern PyTypeObject *PY_TYPE(XYShape);

        class t_XYShape {
        public:
          PyObject_HEAD
          XYShape object;
          static PyObject *wrap_Object(const XYShape&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
