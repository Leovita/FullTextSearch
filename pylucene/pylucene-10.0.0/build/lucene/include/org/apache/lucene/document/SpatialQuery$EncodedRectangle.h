#ifndef org_apache_lucene_document_SpatialQuery$EncodedRectangle_H
#define org_apache_lucene_document_SpatialQuery$EncodedRectangle_H

#include "java/lang/Object.h"

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

        class SpatialQuery$EncodedRectangle : public ::java::lang::Object {
         public:
          enum {
            mid_wrapsCoordinateSystem_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SpatialQuery$EncodedRectangle(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SpatialQuery$EncodedRectangle(const SpatialQuery$EncodedRectangle& obj) : ::java::lang::Object(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(SpatialQuery$EncodedRectangle);
        extern PyTypeObject *PY_TYPE(SpatialQuery$EncodedRectangle);

        class t_SpatialQuery$EncodedRectangle {
        public:
          PyObject_HEAD
          SpatialQuery$EncodedRectangle object;
          static PyObject *wrap_Object(const SpatialQuery$EncodedRectangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
