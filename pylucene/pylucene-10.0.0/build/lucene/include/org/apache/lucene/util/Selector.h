#ifndef org_apache_lucene_util_Selector_H
#define org_apache_lucene_util_Selector_H

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

        class Selector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_select_20022b6d5e83c732,
            mid_swap_e13cff512ebda969,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Selector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Selector(const Selector& obj) : ::java::lang::Object(obj) {}

          Selector();

          void select(jint, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Selector);
        extern PyTypeObject *PY_TYPE(Selector);

        class t_Selector {
        public:
          PyObject_HEAD
          Selector object;
          static PyObject *wrap_Object(const Selector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
