#ifndef org_apache_lucene_util_Counter_H
#define org_apache_lucene_util_Counter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Counter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_addAndGet_91d66fa3ea476cea,
            mid_get_16939d9d0a9a9721,
            mid_newCounter_993628ed46aa1aa4,
            mid_newCounter_9d0951e03ae48749,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Counter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Counter(const Counter& obj) : ::java::lang::Object(obj) {}

          Counter();

          jlong addAndGet(jlong) const;
          jlong get() const;
          static Counter newCounter();
          static Counter newCounter(jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(Counter);
        extern PyTypeObject *PY_TYPE(Counter);

        class t_Counter {
        public:
          PyObject_HEAD
          Counter object;
          static PyObject *wrap_Object(const Counter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
