#ifndef org_apache_lucene_monitor_MonitorUpdateListener_H
#define org_apache_lucene_monitor_MonitorUpdateListener_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class MonitorUpdateListener : public ::java::lang::Object {
         public:
          enum {
            mid_afterClear_3720c61b0679eb3e,
            mid_afterDelete_9425cd4f62c94bce,
            mid_afterUpdate_9425cd4f62c94bce,
            mid_onPurge_3720c61b0679eb3e,
            mid_onPurgeError_4b71a6d99b73f7d1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MonitorUpdateListener(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MonitorUpdateListener(const MonitorUpdateListener& obj) : ::java::lang::Object(obj) {}

          void afterClear() const;
          void afterDelete(const ::java::util::List &) const;
          void afterUpdate(const ::java::util::List &) const;
          void onPurge() const;
          void onPurgeError(const ::java::lang::Throwable &) const;
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
        extern PyType_Def PY_TYPE_DEF(MonitorUpdateListener);
        extern PyTypeObject *PY_TYPE(MonitorUpdateListener);

        class t_MonitorUpdateListener {
        public:
          PyObject_HEAD
          MonitorUpdateListener object;
          static PyObject *wrap_Object(const MonitorUpdateListener&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
