#ifndef org_apache_lucene_monitor_SlowLog$Entry_H
#define org_apache_lucene_monitor_SlowLog$Entry_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class SlowLog$Entry : public ::java::lang::Object {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SlowLog$Entry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SlowLog$Entry(const SlowLog$Entry& obj) : ::java::lang::Object(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(SlowLog$Entry);
        extern PyTypeObject *PY_TYPE(SlowLog$Entry);

        class t_SlowLog$Entry {
        public:
          PyObject_HEAD
          SlowLog$Entry object;
          static PyObject *wrap_Object(const SlowLog$Entry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
