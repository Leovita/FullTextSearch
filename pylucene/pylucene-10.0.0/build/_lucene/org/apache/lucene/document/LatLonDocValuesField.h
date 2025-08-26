#ifndef org_apache_lucene_document_LatLonDocValuesField_H
#define org_apache_lucene_document_LatLonDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$QueryRelation;
        class FieldType;
      }
      namespace geo {
        class Polygon;
        class LatLonGeometry;
      }
      namespace search {
        class Query;
        class SortField;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LatLonDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_21693830df0f9110,
            mid_newDistanceSort_ace157fa9b64518a,
            mid_newSlowBoxQuery_4b9e2246d9254f26,
            mid_newSlowDistanceQuery_0c73b5e361524dd7,
            mid_newSlowGeometryQuery_011f4a02e303334b,
            mid_newSlowPolygonQuery_88e3f68b51f65edb,
            mid_setLocationValue_fa06324555fd7858,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonDocValuesField(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonDocValuesField(const LatLonDocValuesField& obj) : ::org::apache::lucene::document::Field(obj) {}

          static ::org::apache::lucene::document::FieldType *TYPE;

          LatLonDocValuesField(const ::java::lang::String &, jdouble, jdouble);

          static ::org::apache::lucene::search::SortField newDistanceSort(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowBoxQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowDistanceQuery(const ::java::lang::String &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSlowGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newSlowPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::Polygon > &);
          void setLocationValue(jdouble, jdouble) const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(LatLonDocValuesField);
        extern PyTypeObject *PY_TYPE(LatLonDocValuesField);

        class t_LatLonDocValuesField {
        public:
          PyObject_HEAD
          LatLonDocValuesField object;
          static PyObject *wrap_Object(const LatLonDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
