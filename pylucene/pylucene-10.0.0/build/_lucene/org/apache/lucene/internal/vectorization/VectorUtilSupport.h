#ifndef org_apache_lucene_internal_vectorization_VectorUtilSupport_H
#define org_apache_lucene_internal_vectorization_VectorUtilSupport_H

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
      namespace internal {
        namespace vectorization {

          class VectorUtilSupport : public ::java::lang::Object {
           public:
            enum {
              mid_cosine_10c0ed906c8dd379,
              mid_cosine_8cc5908f35d75428,
              mid_dotProduct_75b7f528788b10ee,
              mid_dotProduct_8cc5908f35d75428,
              mid_int4DotProduct_a63f35bcf77fad79,
              mid_squareDistance_75b7f528788b10ee,
              mid_squareDistance_8cc5908f35d75428,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VectorUtilSupport(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VectorUtilSupport(const VectorUtilSupport& obj) : ::java::lang::Object(obj) {}

            jfloat cosine(const JArray< jbyte > &, const JArray< jbyte > &) const;
            jfloat cosine(const JArray< jfloat > &, const JArray< jfloat > &) const;
            jint dotProduct(const JArray< jbyte > &, const JArray< jbyte > &) const;
            jfloat dotProduct(const JArray< jfloat > &, const JArray< jfloat > &) const;
            jint int4DotProduct(const JArray< jbyte > &, jboolean, const JArray< jbyte > &, jboolean) const;
            jint squareDistance(const JArray< jbyte > &, const JArray< jbyte > &) const;
            jfloat squareDistance(const JArray< jfloat > &, const JArray< jfloat > &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {
          extern PyType_Def PY_TYPE_DEF(VectorUtilSupport);
          extern PyTypeObject *PY_TYPE(VectorUtilSupport);

          class t_VectorUtilSupport {
          public:
            PyObject_HEAD
            VectorUtilSupport object;
            static PyObject *wrap_Object(const VectorUtilSupport&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
