#ifndef org_apache_pylucene_store_PythonLock_H
#define org_apache_pylucene_store_PythonLock_H

#include "org/apache/lucene/store/Lock.h"

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
    namespace pylucene {
      namespace store {

        class PythonLock : public ::org::apache::lucene::store::Lock {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_ensureValid_e7bdbe105ce1bafb,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonLock(jobject obj) : ::org::apache::lucene::store::Lock(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonLock(const PythonLock& obj) : ::org::apache::lucene::store::Lock(obj) {}

          PythonLock();

          void close() const;
          void ensureValid() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonLock);
        extern PyTypeObject *PY_TYPE(PythonLock);

        class t_PythonLock {
        public:
          PyObject_HEAD
          PythonLock object;
          static PyObject *wrap_Object(const PythonLock&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
