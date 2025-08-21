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
            mid_add_6bacb6e220725ab1,
            mid_checkFinite_2f2336a2f4b2ecf2,
            mid_cosine_1c5889ce893868f9,
            mid_cosine_f618322cb97748d7,
            mid_dotProduct_15d7e5623d88e7f9,
            mid_dotProduct_f618322cb97748d7,
            mid_dotProductScore_1c5889ce893868f9,
            mid_int4DotProduct_15d7e5623d88e7f9,
            mid_int4DotProductPacked_15d7e5623d88e7f9,
            mid_isUnitVector_a2332b2a7b13511c,
            mid_l2normalize_2f2336a2f4b2ecf2,
            mid_l2normalize_50c07035de1f689c,
            mid_scaleMaxInnerProductScore_8fa359a2bc20a127,
            mid_squareDistance_15d7e5623d88e7f9,
            mid_squareDistance_f618322cb97748d7,
            mid_xorBitCount_15d7e5623d88e7f9,
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
