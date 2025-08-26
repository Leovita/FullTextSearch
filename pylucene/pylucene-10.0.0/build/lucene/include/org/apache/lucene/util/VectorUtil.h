#ifndef org_apache_lucene_util_VectorUtil_H
#define org_apache_lucene_util_VectorUtil_H

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
      namespace util {

        class VectorUtil : public ::java::lang::Object {
         public:
          enum {
            mid_add_d0e5c7ca8f69d543,
            mid_checkFinite_f16239f6f31bef88,
            mid_cosine_10c0ed906c8dd379,
            mid_cosine_8cc5908f35d75428,
            mid_dotProduct_75b7f528788b10ee,
            mid_dotProduct_8cc5908f35d75428,
            mid_dotProductScore_10c0ed906c8dd379,
            mid_int4DotProduct_75b7f528788b10ee,
            mid_int4DotProductPacked_75b7f528788b10ee,
            mid_isUnitVector_e4c12c65c16928ef,
            mid_l2normalize_f16239f6f31bef88,
            mid_l2normalize_5b83e4f4f5762511,
            mid_scaleMaxInnerProductScore_760c23641efab431,
            mid_squareDistance_75b7f528788b10ee,
            mid_squareDistance_8cc5908f35d75428,
            mid_xorBitCount_75b7f528788b10ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorUtil(const VectorUtil& obj) : ::java::lang::Object(obj) {}

          static void add(const JArray< jfloat > &, const JArray< jfloat > &);
          static JArray< jfloat > checkFinite(const JArray< jfloat > &);
          static jfloat cosine(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat cosine(const JArray< jfloat > &, const JArray< jfloat > &);
          static jint dotProduct(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat dotProduct(const JArray< jfloat > &, const JArray< jfloat > &);
          static jfloat dotProductScore(const JArray< jbyte > &, const JArray< jbyte > &);
          static jint int4DotProduct(const JArray< jbyte > &, const JArray< jbyte > &);
          static jint int4DotProductPacked(const JArray< jbyte > &, const JArray< jbyte > &);
          static jboolean isUnitVector(const JArray< jfloat > &);
          static JArray< jfloat > l2normalize(const JArray< jfloat > &);
          static JArray< jfloat > l2normalize(const JArray< jfloat > &, jboolean);
          static jfloat scaleMaxInnerProductScore(jfloat);
          static jint squareDistance(const JArray< jbyte > &, const JArray< jbyte > &);
          static jfloat squareDistance(const JArray< jfloat > &, const JArray< jfloat > &);
          static jint xorBitCount(const JArray< jbyte > &, const JArray< jbyte > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(VectorUtil);
        extern PyTypeObject *PY_TYPE(VectorUtil);

        class t_VectorUtil {
        public:
          PyObject_HEAD
          VectorUtil object;
          static PyObject *wrap_Object(const VectorUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
