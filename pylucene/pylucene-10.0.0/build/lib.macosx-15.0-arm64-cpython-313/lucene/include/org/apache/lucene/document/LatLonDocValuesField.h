#ifndef org_apache_lucene_document_LatLonDocValuesField_H
#define org_apache_lucene_document_LatLonDocValuesField_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class SortField;
      }
      namespace document {
        class ShapeField$QueryRelation;
        class FieldType;
      }
      namespace geo {
        class Polygon;
        class LatLonGeometry;
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
      namespace document {

        class LatLonDocValuesField : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_2095eaca19a2819d,
            mid_newDistanceSort_91787bad138e62a7,
            mid_newSlowBoxQuery_e637eb4fbb66cd45,
            mid_newSlowDistanceQuery_d21aad6385d42f8d,
            mid_newSlowGeometryQuery_cb622dfcc773fe50,
            mid_newSlowPolygonQuery_59d6d1af2cb8e8f8,
            mid_setLocationValue_e57e4ffd06f0f841,
            mid_toString_09a7afff1868fc5e,
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
