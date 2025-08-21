#ifndef org_apache_lucene_store_VerifyingLockFactory_H
#define org_apache_lucene_store_VerifyingLockFactory_H

#include "org/apache/lucene/store/LockFactory.h"

namespace java {
  namespace io {
    class InputStream;
    class IOException;
    class OutputStream;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class VerifyingLockFactory : public ::org::apache::lucene::store::LockFactory {
         public:
          enum {
            mid_init$_24369f0de2e77980,
            mid_obtainLock_4348646d24d7b2f6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VerifyingLockFactory(jobject obj) : ::org::apache::lucene::store::LockFactory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VerifyingLockFactory(const VerifyingLockFactory& obj) : ::org::apache::lucene::store::LockFactory(obj) {}

          static jint MSG_LOCK_ACQUIRED;
          static jint MSG_LOCK_RELEASED;

          VerifyingLockFactory(const ::org::apache::lucene::store::LockFactory &, const ::java::io::InputStream &, const ::java::io::OutputStream &);

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
        extern PyType_Def PY_TYPE_DEF(VerifyingLockFactory);
        extern PyTypeObject *PY_TYPE(VerifyingLockFactory);

        class t_VerifyingLockFactory {
        public:
          PyObject_HEAD
          VerifyingLockFactory object;
          static PyObject *wrap_Object(const VerifyingLockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
