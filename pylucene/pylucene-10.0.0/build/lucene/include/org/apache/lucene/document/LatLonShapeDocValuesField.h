#ifndef org_apache_lucene_document_LatLonShapeDocValuesField_H
#define org_apache_lucene_document_LatLonShapeDocValuesField_H

#include "org/apache/lucene/document/ShapeDocValuesField.h"

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

        class LatLonShapeDocValuesField : public ::org::apache::lucene::document::ShapeDocValuesField {
         public:
          enum {
            mid_getBoundingBox_2bbbcbaa4373fc64,
            mid_getCentroid_f6aecef04297a8f2,
            mid_decodeY_788f636887bfcb79,
            mid_decodeX_788f636887bfcb79,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LatLonShapeDocValuesField(jobject obj) : ::org::apache::lucene::document::ShapeDocValuesField(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LatLonShapeDocValuesField(const LatLonShapeDocValuesField& obj) : ::org::apache::lucene::document::ShapeDocValuesField(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(LatLonShapeDocValuesField);
        extern PyTypeObject *PY_TYPE(LatLonShapeDocValuesField);

        class t_LatLonShapeDocValuesField {
        public:
          PyObject_HEAD
          LatLonShapeDocValuesField object;
          static PyObject *wrap_Object(const LatLonShapeDocValuesField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
