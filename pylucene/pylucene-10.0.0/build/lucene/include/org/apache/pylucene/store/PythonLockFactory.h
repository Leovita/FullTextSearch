#ifndef org_apache_pylucene_store_PythonLockFactory_H
#define org_apache_pylucene_store_PythonLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class Lock;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_obtainLock_b179764a098b8915,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonLockFactory(const PythonLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          PythonLockFactory();

          ::org::apache::lucene::store::Lock obtainLock(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonLockFactory);
        extern PyTypeObject *PY_TYPE(PythonLockFactory);

        class t_PythonLockFactory {
        public:
          PyObject_HEAD
          PythonLockFactory object;
          static PyObject *wrap_Object(const PythonLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
