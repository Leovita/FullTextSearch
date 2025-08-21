#ifndef org_apache_lucene_document_LatLonPoint_H
#define org_apache_lucene_document_LatLonPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class TopFieldDocs;
        class IndexSearcher;
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
  namespace io {
    class IOException;
  }
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

        class LatLonPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_2095eaca19a2819d,
            mid_nearest_0ba98da3e65d1255,
            mid_newBoxQuery_e637eb4fbb66cd45,
            mid_newDistanceFeatureQuery_a269370a13b47888,
            mid_newDistanceQuery_d21aad6385d42f8d,
            mid_newGeometryQuery_cb622dfcc773fe50,
            mid_newPolygonQuery_59d6d1af2cb8e8f8,
            mid_setLocationValue_e57e4ffd06f0f841,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonPoint(const LatLonPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          static jint BYTES;
          static ::org::apache::lucene::document::FieldType *TYPE;

          LatLonPoint(const ::java::lang::String &, jdouble, jdouble);

          static ::org::apache::lucene::search::TopFieldDocs nearest(const ::org::apache::lucene::search::IndexSearcher &, const ::java::lang::String &, jdouble, jdouble, jint);
          static ::org::apache::lucene::search::Query newBoxQuery(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceFeatureQuery(const ::java::lang::String &, jfloat, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newDistanceQuery(const ::java::lang::String &, jdouble, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::org::apache::lucene::geo::LatLonGeometry > &);
          static ::org::apache::lucene::search::Query newPolygonQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::geo::Polygon > &);
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
        extern PyType_Def PY_TYPE_DEF(LatLonPoint);
        extern PyTypeObject *PY_TYPE(LatLonPoint);

        class t_LatLonPoint {
        public:
          PyObject_HEAD
          LatLonPoint object;
          static PyObject *wrap_Object(const LatLonPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
