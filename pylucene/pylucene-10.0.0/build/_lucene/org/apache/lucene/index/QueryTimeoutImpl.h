#ifndef org_apache_lucene_index_QueryTimeoutImpl_H
#define org_apache_lucene_index_QueryTimeoutImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Long;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class QueryTimeoutImpl : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1d3149fac12f2af3,
            mid_getTimeoutAt_c4ac57d488686cc8,
            mid_reset_e7bdbe105ce1bafb,
            mid_shouldExit_9aa4f33e82ea333f,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryTimeoutImpl(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryTimeoutImpl(const QueryTimeoutImpl& obj) : ::java::lang::Object(obj) {}

          QueryTimeoutImpl(jlong);

          ::java::lang::Long getTimeoutAt() const;
          void reset() const;
          jboolean shouldExit() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(QueryTimeoutImpl);
        extern PyTypeObject *PY_TYPE(QueryTimeoutImpl);

        class t_QueryTimeoutImpl {
        public:
          PyObject_HEAD
          QueryTimeoutImpl object;
          static PyObject *wrap_Object(const QueryTimeoutImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
