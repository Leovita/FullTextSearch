#ifndef org_apache_lucene_util_SloppyMath_H
#define org_apache_lucene_util_SloppyMath_H

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

        class SloppyMath : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_asin_8fff3d7dcb9fddc5,
            mid_cos_8fff3d7dcb9fddc5,
            mid_haversinMeters_8fff3d7dcb9fddc5,
            mid_haversinMeters_d4ea21cd79dbad71,
            mid_haversinSortKey_d4ea21cd79dbad71,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SloppyMath(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SloppyMath(const SloppyMath& obj) : ::java::lang::Object(obj) {}

          SloppyMath();

          static jdouble asin(jdouble);
          static jdouble cos(jdouble);
          static jdouble haversinMeters(jdouble);
          static jdouble haversinMeters(jdouble, jdouble, jdouble, jdouble);
          static jdouble haversinSortKey(jdouble, jdouble, jdouble, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(SloppyMath);
        extern PyTypeObject *PY_TYPE(SloppyMath);

        class t_SloppyMath {
        public:
          PyObject_HEAD
          SloppyMath object;
          static PyObject *wrap_Object(const SloppyMath&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
