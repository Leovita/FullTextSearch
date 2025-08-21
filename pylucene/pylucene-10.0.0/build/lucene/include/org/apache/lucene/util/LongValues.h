#ifndef org_apache_lucene_util_LongValues_H
#define org_apache_lucene_util_LongValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongValues;
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
      namespace util {

        class LongValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_get_91d66fa3ea476cea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValues(const LongValues& obj) : ::java::lang::Object(obj) {}

          static LongValues *IDENTITY;
          static LongValues *ZEROES;

          LongValues();

          jlong get(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(LongValues);
        extern PyTypeObject *PY_TYPE(LongValues);

        class t_LongValues {
        public:
          PyObject_HEAD
          LongValues object;
          static PyObject *wrap_Object(const LongValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
