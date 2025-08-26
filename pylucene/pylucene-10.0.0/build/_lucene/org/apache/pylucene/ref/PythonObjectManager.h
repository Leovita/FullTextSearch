#ifndef org_apache_pylucene_ref_PythonObjectManager_H
#define org_apache_pylucene_ref_PythonObjectManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {
        class PythonObject;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {

        class PythonObjectManager : public ::java::lang::Object {
         public:
          enum {
            mid_register_37b8ac1e3c12ed3d,
            mid_run_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonObjectManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonObjectManager(const PythonObjectManager& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::pylucene::ref::PythonObject register$(jlong);
          void run() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {
        extern PyType_Def PY_TYPE_DEF(PythonObjectManager);
        extern PyTypeObject *PY_TYPE(PythonObjectManager);

        class t_PythonObjectManager {
        public:
          PyObject_HEAD
          PythonObjectManager object;
          static PyObject *wrap_Object(const PythonObjectManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
