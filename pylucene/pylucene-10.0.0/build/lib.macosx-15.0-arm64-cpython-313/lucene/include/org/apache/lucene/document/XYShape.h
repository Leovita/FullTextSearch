#ifndef org_apache_lucene_document_XYShape_H
#define org_apache_lucene_document_XYShape_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class XYShapeDocValuesField;
        class ShapeField$QueryRelation;
        class Field;
        class XYShapeDocValues;
        class ShapeField$DecodedTriangle;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace geo {
        class XYGeometry;
        class XYPolygon;
        class XYLine;
        class XYCircle;
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
            mid_createDocValueField_42cfc2ffb764a397,
            mid_createDocValueField_d379cbe3773a838a,
            mid_createDocValueField_f2c07a221f6de352,
            mid_createDocValueField_498908dbd4ef33ef,
            mid_createDocValueField_e3da5ee390efd7dc,
            mid_createDocValueField_03a820ac5bb8d6e9,
            mid_createIndexableFields_1cc30e26a11dd2f9,
            mid_createIndexableFields_031785421d657824,
            mid_createIndexableFields_a648dd098b598ed1,
            mid_createIndexableFields_7ca925534b661f3f,
            mid_createXYShapeDocValues_d1a32179f5e5289a,
            mid_newBoxQuery_28676c3d0fdda8e0,
            mid_newDistanceQuery_5d98fa66dfe20a02,
            mid_newGeometryQuery_33da00007dbf578d,
            mid_newLineQuery_688c1e9eb7e69fcc,
            mid_newPointQuery_29c817adabc2eded,
            mid_newPolygonQuery_cc084ef4800e75b5,
            mid_newSlowDocValuesBoxQuery_28676c3d0fdda8e0,
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
