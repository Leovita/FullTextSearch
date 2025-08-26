#ifndef org_apache_lucene_search_ControlledRealTimeReopenThread_H
#define org_apache_lucene_search_ControlledRealTimeReopenThread_H

#include "java/lang/Thread.h"

namespace java {
  namespace lang {
    class InterruptedException;
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriter;
      }
      namespace search {
        class ReferenceManager;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ControlledRealTimeReopenThread : public ::java::lang::Thread {
         public:
          enum {
            mid_init$_3cba3497e873b5dc,
            mid_close_e7bdbe105ce1bafb,
            mid_getSearchingGen_0f176418e3e16541,
            mid_run_e7bdbe105ce1bafb,
            mid_waitForGeneration_1d3149fac12f2af3,
            mid_waitForGeneration_7f4975b815f68db8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ControlledRealTimeReopenThread(jobject obj) : ::java::lang::Thread(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ControlledRealTimeReopenThread(const ControlledRealTimeReopenThread& obj) : ::java::lang::Thread(obj) {}

          ControlledRealTimeReopenThread(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::ReferenceManager &, jdouble, jdouble);

          void close() const;
          jlong getSearchingGen() const;
          void run() const;
          void waitForGeneration(jlong) const;
          jboolean waitForGeneration(jlong, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ControlledRealTimeReopenThread);
        extern PyTypeObject *PY_TYPE(ControlledRealTimeReopenThread);

        class t_ControlledRealTimeReopenThread {
        public:
          PyObject_HEAD
          ControlledRealTimeReopenThread object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ControlledRealTimeReopenThread *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ControlledRealTimeReopenThread&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ControlledRealTimeReopenThread&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
