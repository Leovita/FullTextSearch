#ifndef org_apache_lucene_index_QueryTimeoutImpl_H
#define org_apache_lucene_index_QueryTimeoutImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Long;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class QueryTimeout;
      }
    }
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
            mid_init$_8b3d46852b435a94,
            mid_getTimeoutAt_34383b55cea8435b,
            mid_reset_3720c61b0679eb3e,
            mid_shouldExit_947277eca0748c4e,
            mid_toString_09a7afff1868fc5e,
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
