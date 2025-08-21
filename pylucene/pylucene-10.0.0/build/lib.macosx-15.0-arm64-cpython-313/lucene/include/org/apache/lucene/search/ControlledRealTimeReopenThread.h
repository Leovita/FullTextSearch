#ifndef org_apache_lucene_search_ControlledRealTimeReopenThread_H
#define org_apache_lucene_search_ControlledRealTimeReopenThread_H

#include "java/lang/Thread.h"

namespace java {
  namespace lang {
    class Class;
    class InterruptedException;
  }
  namespace io {
    class Closeable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ReferenceManager;
      }
      namespace index {
        class IndexWriter;
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
            mid_init$_18ab418a069ea482,
            mid_close_3720c61b0679eb3e,
            mid_getSearchingGen_16939d9d0a9a9721,
            mid_run_3720c61b0679eb3e,
            mid_waitForGeneration_8b3d46852b435a94,
            mid_waitForGeneration_42bb0fb87803ccf8,
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
