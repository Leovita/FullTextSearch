#ifndef org_apache_lucene_search_ReferenceManager_H
#define org_apache_lucene_search_ReferenceManager_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_acquire_4819806f62f1360a,
            mid_addListener_bcc7de6c3774499a,
            mid_close_e7bdbe105ce1bafb,
            mid_maybeRefresh_9aa4f33e82ea333f,
            mid_maybeRefreshBlocking_e7bdbe105ce1bafb,
            mid_release_501c3eb890ff6d79,
            mid_removeListener_bcc7de6c3774499a,
            mid_decRef_501c3eb890ff6d79,
            mid_getRefCount_3b738b91667a06c2,
            mid_refreshIfNeeded_e2c45b124c12f4ec,
            mid_afterClose_e7bdbe105ce1bafb,
            mid_afterMaybeRefresh_e7bdbe105ce1bafb,
            mid_tryIncRef_00d17418847797d4,
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
