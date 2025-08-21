#ifndef org_apache_lucene_document_LatLonShapeDocValues_H
#define org_apache_lucene_document_LatLonShapeDocValues_H

#include "org/apache/lucene/document/ShapeDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class Rectangle;
        class Point;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LatLonShapeDocValues : public ::org::apache::lucene::document::ShapeDocValues {
         public:
          enum {
            mid_getBoundingBox_2bbbcbaa4373fc64,
            mid_getCentroid_f6aecef04297a8f2,
            mid_getEncoder_ebb8e14a479901b7,
            mid_computeBoundingBox_2bbbcbaa4373fc64,
            mid_computeCentroid_f6aecef04297a8f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonShapeDocValues(jobject obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonShapeDocValues(const LatLonShapeDocValues& obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {}

          ::org::apache::lucene::geo::Rectangle getBoundingBox() const;
          ::org::apache::lucene::geo::Point getCentroid() const;
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
        extern PyType_Def PY_TYPE_DEF(LatLonShapeDocValues);
        extern PyTypeObject *PY_TYPE(LatLonShapeDocValues);

        class t_LatLonShapeDocValues {
        public:
          PyObject_HEAD
          LatLonShapeDocValues object;
          static PyObject *wrap_Object(const LatLonShapeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
