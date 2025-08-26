#ifndef org_apache_lucene_document_ShapeField$DecodedTriangle_H
#define org_apache_lucene_document_ShapeField$DecodedTriangle_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class ShapeField$DecodedTriangle$TYPE;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class ShapeField$DecodedTriangle : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_setValues_aa60a36f06e4343f,
            max_mid
          };

          enum {
            fid_aX,
            fid_aY,
            fid_ab,
            fid_bX,
            fid_bY,
            fid_bc,
            fid_cX,
            fid_cY,
            fid_ca,
            fid_type,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ShapeField$DecodedTriangle(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ShapeField$DecodedTriangle(const ShapeField$DecodedTriangle& obj) : ::java::lang::Object(obj) {}

          jint _get_aX() const;
          void _set_aX(jint) const;
          jint _get_aY() const;
          void _set_aY(jint) const;
          jboolean _get_ab() const;
          void _set_ab(jboolean) const;
          jint _get_bX() const;
          void _set_bX(jint) const;
          jint _get_bY() const;
          void _set_bY(jint) const;
          jboolean _get_bc() const;
          void _set_bc(jboolean) const;
          jint _get_cX() const;
          void _set_cX(jint) const;
          jint _get_cY() const;
          void _set_cY(jint) const;
          jboolean _get_ca() const;
          void _set_ca(jboolean) const;
          ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE _get_type() const;
          void _set_type(const ::org::apache::lucene::document::ShapeField$DecodedTriangle$TYPE &) const;

          ShapeField$DecodedTriangle();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(ShapeField$DecodedTriangle);
        extern PyTypeObject *PY_TYPE(ShapeField$DecodedTriangle);

        class t_ShapeField$DecodedTriangle {
        public:
          PyObject_HEAD
          ShapeField$DecodedTriangle object;
          static PyObject *wrap_Object(const ShapeField$DecodedTriangle&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
