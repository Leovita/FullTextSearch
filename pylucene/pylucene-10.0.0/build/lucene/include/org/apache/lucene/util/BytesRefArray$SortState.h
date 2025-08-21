#ifndef org_apache_lucene_util_BytesRefArray$SortState_H
#define org_apache_lucene_util_BytesRefArray$SortState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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

        class BytesRefArray$SortState : public ::java::lang::Object {
         public:
          enum {
            mid_ramBytesUsed_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray$SortState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray$SortState(const BytesRefArray$SortState& obj) : ::java::lang::Object(obj) {}

          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefArray$SortState);
        extern PyTypeObject *PY_TYPE(BytesRefArray$SortState);

        class t_BytesRefArray$SortState {
        public:
          PyObject_HEAD
          BytesRefArray$SortState object;
          static PyObject *wrap_Object(const BytesRefArray$SortState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
