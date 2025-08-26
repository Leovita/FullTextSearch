#ifndef java_nio_file_Watchable_H
#define java_nio_file_Watchable_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class WatchKey;
      class WatchEvent$Kind;
      class WatchEvent$Modifier;
      class WatchService;
    }
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Watchable : public ::java::lang::Object {
       public:
        enum {
          mid_register_303167a0b7ca69ea,
          mid_register_2dca432f38e67efe,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Watchable(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Watchable(const Watchable& obj) : ::java::lang::Object(obj) {}

        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &) const;
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &, const JArray< ::java::nio::file::WatchEvent$Modifier > &) const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Watchable);
      extern PyTypeObject *PY_TYPE(Watchable);

      class t_Watchable {
      public:
        PyObject_HEAD
        Watchable object;
        static PyObject *wrap_Object(const Watchable&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
