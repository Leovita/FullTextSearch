#ifndef org_apache_lucene_store_SingleInstanceLockFactory_H
#define org_apache_lucene_store_SingleInstanceLockFactory_H

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
    namespace lucene {
      namespace store {

        class SingleInstanceLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_obtainLock_b179764a098b8915,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SingleInstanceLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SingleInstanceLockFactory(const SingleInstanceLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          SingleInstanceLockFactory();

          ::org::apache::lucene::store::Lock obtainLock(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(SingleInstanceLockFactory);
        extern PyTypeObject *PY_TYPE(SingleInstanceLockFactory);

        class t_SingleInstanceLockFactory {
        public:
          PyObject_HEAD
          SingleInstanceLockFactory object;
          static PyObject *wrap_Object(const SingleInstanceLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
