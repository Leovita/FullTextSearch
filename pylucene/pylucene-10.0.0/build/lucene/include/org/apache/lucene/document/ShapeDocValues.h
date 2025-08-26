#ifndef org_apache_lucene_document_ShapeDocValues_H
#define org_apache_lucene_document_ShapeDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
        class ShapeField$QueryRelation;
      }
      namespace search {
        class Query;
      }
      namespace geo {
        class Component2D;
        class Geometry;
      }
      namespace index {
        class PointValues$Relation;
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

        class ShapeDocValues : public ::java::lang::Object {
         public:
          enum {
            mid_getBoundingBox_76f13cb944295f5f,
            mid_getCentroid_76f13cb944295f5f,
            mid_getEncodedMaxX_bd89ce15dad49192,
            mid_getEncodedMaxY_bd89ce15dad49192,
            mid_getEncodedMinX_bd89ce15dad49192,
            mid_getEncodedMinY_bd89ce15dad49192,
            mid_getHighestDimension_b3356d9fb10d4eb7,
            mid_newGeometryQuery_87a659bded1931ca,
            mid_numberOfTerms_bd89ce15dad49192,
            mid_relate_9f610275a05364dc,
            mid_computeCentroid_76f13cb944295f5f,
            mid_computeBoundingBox_76f13cb944295f5f,
            mid_vLongSize_7af44747c1921bd4,
            mid_vIntSize_a3904e10f5bb9437,
            mid_getEncodedCentroidX_bd89ce15dad49192,
            mid_getEncodedCentroidY_bd89ce15dad49192,
            mid_getEncoder_914ecc1b33d6ab21,
            mid_binaryValue_adbedbc1fa61c358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeDocValues(const ShapeDocValues& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::geo::Geometry getBoundingBox() const;
          ::org::apache::lucene::geo::Geometry getCentroid() const;
          jint getEncodedMaxX() const;
          jint getEncodedMaxY() const;
          jint getEncodedMinX() const;
          jint getEncodedMinY() const;
          ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE getHighestDimension() const;
          static ::org::apache::lucene::search::Query newGeometryQuery(const ::java::lang::String &, const ::org::apache::lucene::document::ShapeField$QueryRelation &, const JArray< ::java::lang::Object > &);
          jint numberOfTerms() const;
          ::org::apache::lucene::index::PointValues$Relation relate(const ::org::apache::lucene::geo::Component2D &) const;
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
        extern PyType_Def PY_TYPE_DEF(ShapeDocValues);
        extern PyTypeObject *PY_TYPE(ShapeDocValues);

        class t_ShapeDocValues {
        public:
          PyObject_HEAD
          ShapeDocValues object;
          static PyObject *wrap_Object(const ShapeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
