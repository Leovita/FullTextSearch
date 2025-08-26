#ifndef org_apache_lucene_util_MathUtil_H
#define org_apache_lucene_util_MathUtil_H

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

        class MathUtil : public ::java::lang::Object {
         public:
          enum {
            mid_acosh_8493a5edcb36d651,
            mid_asinh_8493a5edcb36d651,
            mid_atanh_8493a5edcb36d651,
            mid_gcd_5804bd1c01b59205,
            mid_log_9314817161e40a7e,
            mid_log_d6152e1dadfddcdb,
            mid_sumRelativeErrorBound_3bb466f769ef1c7f,
            mid_sumUpperBound_8a3524cbdc43563c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MathUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MathUtil(const MathUtil& obj) : ::java::lang::Object(obj) {}

          static jdouble acosh(jdouble);
          static jdouble asinh(jdouble);
          static jdouble atanh(jdouble);
          static jlong gcd(jlong, jlong);
          static jdouble log(jdouble, jdouble);
          static jint log(jlong, jint);
          static jdouble sumRelativeErrorBound(jint);
          static jdouble sumUpperBound(jdouble, jint);
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
        extern PyType_Def PY_TYPE_DEF(MathUtil);
        extern PyTypeObject *PY_TYPE(MathUtil);

        class t_MathUtil {
        public:
          PyObject_HEAD
          MathUtil object;
          static PyObject *wrap_Object(const MathUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
