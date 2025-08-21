#ifndef org_apache_lucene_util_IORunnable_H
#define org_apache_lucene_util_IORunnable_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IORunnable : public ::java::lang::Object {
         public:
          enum {
            mid_run_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IORunnable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IORunnable(const IORunnable& obj) : ::java::lang::Object(obj) {}

          void run() const;
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
        extern PyType_Def PY_TYPE_DEF(IORunnable);
        extern PyTypeObject *PY_TYPE(IORunnable);

        class t_IORunnable {
        public:
          PyObject_HEAD
          IORunnable object;
          static PyObject *wrap_Object(const IORunnable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
