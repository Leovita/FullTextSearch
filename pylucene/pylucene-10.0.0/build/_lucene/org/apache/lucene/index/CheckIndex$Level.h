#ifndef org_apache_lucene_index_CheckIndex$Level_H
#define org_apache_lucene_index_CheckIndex$Level_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalArgumentException;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$Level : public ::java::lang::Object {
         public:
          enum {
            mid_checkIfLevelInBounds_540b2b23d51b1efd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$Level(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$Level(const CheckIndex$Level& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_VALUE;
          static jint MAX_VALUE;
          static jint MIN_LEVEL_FOR_CHECKSUM_CHECKS;
          static jint MIN_LEVEL_FOR_INTEGRITY_CHECKS;
          static jint MIN_LEVEL_FOR_SLOW_CHECKS;
          static jint MIN_VALUE;

          static void checkIfLevelInBounds(jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(CheckIndex$Level);
        extern PyTypeObject *PY_TYPE(CheckIndex$Level);

        class t_CheckIndex$Level {
        public:
          PyObject_HEAD
          CheckIndex$Level object;
          static PyObject *wrap_Object(const CheckIndex$Level&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
