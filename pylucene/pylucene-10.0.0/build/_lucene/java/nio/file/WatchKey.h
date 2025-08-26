#ifndef java_nio_file_WatchKey_H
#define java_nio_file_WatchKey_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Watchable;
      class WatchEvent;
    }
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class WatchKey : public ::java::lang::Object {
       public:
        enum {
          mid_cancel_e7bdbe105ce1bafb,
          mid_isValid_9aa4f33e82ea333f,
          mid_pollEvents_1387e1e2702ac173,
          mid_reset_9aa4f33e82ea333f,
          mid_watchable_c9acffb1708e3172,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit WatchKey(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        WatchKey(const WatchKey& obj) : ::java::lang::Object(obj) {}

        void cancel() const;
        jboolean isValid() const;
        ::java::util::List pollEvents() const;
        jboolean reset() const;
        ::java::nio::file::Watchable watchable() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(WatchKey);
      extern PyTypeObject *PY_TYPE(WatchKey);

      class t_WatchKey {
      public:
        PyObject_HEAD
        WatchKey object;
        static PyObject *wrap_Object(const WatchKey&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
