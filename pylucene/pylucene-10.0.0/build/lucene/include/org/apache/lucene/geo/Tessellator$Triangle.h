#ifndef org_apache_lucene_geo_Tessellator$Triangle_H
#define org_apache_lucene_geo_Tessellator$Triangle_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {

        class Tessellator$Triangle : public ::java::lang::Object {
         public:
          enum {
            mid_getEncodedX_a3904e10f5bb9437,
            mid_getEncodedY_a3904e10f5bb9437,
            mid_getX_3bb466f769ef1c7f,
            mid_getY_3bb466f769ef1c7f,
            mid_isEdgefromPolygon_a8281eb3b9d9672d,
            mid_toString_e7df854526d67fa3,
            mid_containsPoint_ca47176ba6c35fb2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tessellator$Triangle(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tessellator$Triangle(const Tessellator$Triangle& obj) : ::java::lang::Object(obj) {}

          jint getEncodedX(jint) const;
          jint getEncodedY(jint) const;
          jdouble getX(jint) const;
          jdouble getY(jint) const;
          jboolean isEdgefromPolygon(jint) const;
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
      namespace geo {
        extern PyType_Def PY_TYPE_DEF(Tessellator$Triangle);
        extern PyTypeObject *PY_TYPE(Tessellator$Triangle);

        class t_Tessellator$Triangle {
        public:
          PyObject_HEAD
          Tessellator$Triangle object;
          static PyObject *wrap_Object(const Tessellator$Triangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
