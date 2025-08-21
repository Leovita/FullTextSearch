#ifndef org_apache_lucene_search_ReferenceManager_H
#define org_apache_lucene_search_ReferenceManager_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager$RefreshListener;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ReferenceManager : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_acquire_5655ed8670534604,
            mid_addListener_0043c104d69fdc13,
            mid_close_3720c61b0679eb3e,
            mid_maybeRefresh_947277eca0748c4e,
            mid_maybeRefreshBlocking_3720c61b0679eb3e,
            mid_release_eb61ef4d1db15d08,
            mid_removeListener_0043c104d69fdc13,
            mid_decRef_eb61ef4d1db15d08,
            mid_tryIncRef_570b5248a6da3ef6,
            mid_getRefCount_657656e6a597f732,
            mid_refreshIfNeeded_5fd81664d2d475e1,
            mid_afterClose_3720c61b0679eb3e,
            mid_afterMaybeRefresh_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReferenceManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReferenceManager(const ReferenceManager& obj) : ::java::lang::Object(obj) {}

          ReferenceManager();

          ::java::lang::Object acquire() const;
          void addListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
          void close() const;
          jboolean maybeRefresh() const;
          void maybeRefreshBlocking() const;
          void release(const ::java::lang::Object &) const;
          void removeListener(const ::org::apache::lucene::search::ReferenceManager$RefreshListener &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(ReferenceManager);
        extern PyTypeObject *PY_TYPE(ReferenceManager);

        class t_ReferenceManager {
        public:
          PyObject_HEAD
          ReferenceManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReferenceManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReferenceManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReferenceManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
