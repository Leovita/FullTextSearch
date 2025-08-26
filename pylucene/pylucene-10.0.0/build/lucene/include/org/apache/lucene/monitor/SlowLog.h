#ifndef org_apache_lucene_monitor_SlowLog_H
#define org_apache_lucene_monitor_SlowLog_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class SlowLog$Entry;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class SlowLog : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_iterator_c7985fafdcf40e83,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowLog(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowLog(const SlowLog& obj) : ::java::lang::Object(obj) {}

          SlowLog();

          ::java::util::Iterator iterator() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(SlowLog);
        extern PyTypeObject *PY_TYPE(SlowLog);

        class t_SlowLog {
        public:
          PyObject_HEAD
          SlowLog object;
          static PyObject *wrap_Object(const SlowLog&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
