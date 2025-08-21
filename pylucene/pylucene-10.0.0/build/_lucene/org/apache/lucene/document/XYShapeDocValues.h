#ifndef org_apache_lucene_document_XYShapeDocValues_H
#define org_apache_lucene_document_XYShapeDocValues_H

#include "org/apache/lucene/document/ShapeDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {
        class XYRectangle;
        class XYPoint;
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

        class XYShapeDocValues : public ::org::apache::lucene::document::ShapeDocValues {
         public:
          enum {
            mid_getBoundingBox_fbe4b6db47628467,
            mid_getCentroid_cb5630cc429dbfc7,
            mid_getEncoder_ebb8e14a479901b7,
            mid_computeBoundingBox_fbe4b6db47628467,
            mid_computeCentroid_cb5630cc429dbfc7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYShapeDocValues(jobject obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYShapeDocValues(const XYShapeDocValues& obj) : ::org::apache::lucene::document::ShapeDocValues(obj) {}

          ::org::apache::lucene::geo::XYRectangle getBoundingBox() const;
          ::org::apache::lucene::geo::XYPoint getCentroid() const;
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
        extern PyType_Def PY_TYPE_DEF(XYShapeDocValues);
        extern PyTypeObject *PY_TYPE(XYShapeDocValues);

        class t_XYShapeDocValues {
        public:
          PyObject_HEAD
          XYShapeDocValues object;
          static PyObject *wrap_Object(const XYShapeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
