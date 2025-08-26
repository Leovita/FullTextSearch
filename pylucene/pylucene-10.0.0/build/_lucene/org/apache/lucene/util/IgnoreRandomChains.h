#ifndef org_apache_lucene_util_IgnoreRandomChains_H
#define org_apache_lucene_util_IgnoreRandomChains_H

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
      namespace util {

        class IgnoreRandomChains : public ::java::lang::Object {
         public:
          enum {
            mid_reason_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IgnoreRandomChains(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IgnoreRandomChains(const IgnoreRandomChains& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String reason() const;
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
        extern PyType_Def PY_TYPE_DEF(IgnoreRandomChains);
        extern PyTypeObject *PY_TYPE(IgnoreRandomChains);

        class t_IgnoreRandomChains {
        public:
          PyObject_HEAD
          IgnoreRandomChains object;
          static PyObject *wrap_Object(const IgnoreRandomChains&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
