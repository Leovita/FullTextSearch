#ifndef org_apache_lucene_store_LockFactory_H
#define org_apache_lucene_store_LockFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
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

        class LockFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_obtainLock_4348646d24d7b2f6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockFactory(const LockFactory& obj) : ::java::lang::Object(obj) {}

          LockFactory();

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
        extern PyType_Def PY_TYPE_DEF(LockFactory);
        extern PyTypeObject *PY_TYPE(LockFactory);

        class t_LockFactory {
        public:
          PyObject_HEAD
          LockFactory object;
          static PyObject *wrap_Object(const LockFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
