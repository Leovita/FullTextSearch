#ifndef org_apache_lucene_monitor_ConcurrentQueryLoader_H
#define org_apache_lucene_monitor_ConcurrentQueryLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class InterruptedException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorQuery;
        class Monitor;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class ConcurrentQueryLoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c23fa34ea0d42acd,
            mid_init$_55b8b01ceb8807de,
            mid_add_23495b004c551f45,
            mid_close_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConcurrentQueryLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConcurrentQueryLoader(const ConcurrentQueryLoader& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_QUEUE_SIZE;

          ConcurrentQueryLoader(const ::org::apache::lucene::monitor::Monitor &);
          ConcurrentQueryLoader(const ::org::apache::lucene::monitor::Monitor &, jint, jint);

          void add(const ::org::apache::lucene::monitor::MonitorQuery &) const;
          void close() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(ConcurrentQueryLoader);
        extern PyTypeObject *PY_TYPE(ConcurrentQueryLoader);

        class t_ConcurrentQueryLoader {
        public:
          PyObject_HEAD
          ConcurrentQueryLoader object;
          static PyObject *wrap_Object(const ConcurrentQueryLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
