#ifndef org_apache_lucene_document_LatLonPoint_H
#define org_apache_lucene_document_LatLonPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopFieldDocs;
        class Query;
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
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
            mid_init$_21693830df0f9110,
            mid_nearest_5d53a92befd27ab6,
            mid_newBoxQuery_4b9e2246d9254f26,
            mid_newDistanceFeatureQuery_d7529a91b008a28b,
            mid_newDistanceQuery_0c73b5e361524dd7,
            mid_newGeometryQuery_011f4a02e303334b,
            mid_newPolygonQuery_88e3f68b51f65edb,
            mid_setLocationValue_fa06324555fd7858,
            mid_toString_e7df854526d67fa3,
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
