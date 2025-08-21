#ifndef org_apache_lucene_document_ShapeDocValues_H
#define org_apache_lucene_document_ShapeDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace document {
        class ShapeField$QueryRelation;
        class ShapeField$DecodedTriangle$TYPE;
      }
      namespace index {
        class PointValues$Relation;
      }
      namespace geo {
        class Component2D;
        class Geometry;
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

        class ShapeDocValues : public ::java::lang::Object {
         public:
          enum {
            mid_getBoundingBox_29c6d8aa930fea8d,
            mid_getCentroid_29c6d8aa930fea8d,
            mid_getEncodedMaxX_20fbf7565993c3d7,
            mid_getEncodedMaxY_20fbf7565993c3d7,
            mid_getEncodedMinX_20fbf7565993c3d7,
            mid_getEncodedMinY_20fbf7565993c3d7,
            mid_getHighestDimension_51afc60d7bb54a69,
            mid_newGeometryQuery_ae807bfca69d7107,
            mid_numberOfTerms_20fbf7565993c3d7,
            mid_relate_5ca96898777848d6,
            mid_getEncoder_ebb8e14a479901b7,
            mid_getEncodedCentroidY_20fbf7565993c3d7,
            mid_getEncodedCentroidX_20fbf7565993c3d7,
            mid_computeBoundingBox_29c6d8aa930fea8d,
            mid_computeCentroid_29c6d8aa930fea8d,
            mid_vLongSize_35c872f03f347c10,
            mid_vIntSize_3c9bba330f083871,
            mid_binaryValue_9740fddd1c7df148,
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
