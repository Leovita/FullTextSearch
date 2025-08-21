#ifndef org_apache_lucene_monitor_QueryIndex$DataValues_H
#define org_apache_lucene_monitor_QueryIndex$DataValues_H

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

        class QueryIndex$DataValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryIndex$DataValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryIndex$DataValues(const QueryIndex$DataValues& obj) : ::java::lang::Object(obj) {}

          QueryIndex$DataValues();
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
        extern PyType_Def PY_TYPE_DEF(QueryIndex$DataValues);
        extern PyTypeObject *PY_TYPE(QueryIndex$DataValues);

        class t_QueryIndex$DataValues {
        public:
          PyObject_HEAD
          QueryIndex$DataValues object;
          static PyObject *wrap_Object(const QueryIndex$DataValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
