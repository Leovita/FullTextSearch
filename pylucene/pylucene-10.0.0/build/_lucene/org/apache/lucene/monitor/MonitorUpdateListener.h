#ifndef org_apache_lucene_monitor_MonitorUpdateListener_H
#define org_apache_lucene_monitor_MonitorUpdateListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MonitorQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
    class String;
  }
  namespace util {
    class List;
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
            mid_afterClear_e7bdbe105ce1bafb,
            mid_afterDelete_acbb405b60a30822,
            mid_afterUpdate_acbb405b60a30822,
            mid_onPurge_e7bdbe105ce1bafb,
            mid_onPurgeError_9b649326a1df01c3,
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
