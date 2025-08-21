#ifndef org_apache_lucene_index_TermState_H
#define org_apache_lucene_index_TermState_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Cloneable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class TermState : public ::java::lang::Object {
         public:
          enum {
            mid_clone_0f33111124ab1b09,
            mid_copyFrom_b61d12af4f67df0d,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermState(const TermState& obj) : ::java::lang::Object(obj) {}

          TermState clone() const;
          void copyFrom(const TermState &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermState);
        extern PyTypeObject *PY_TYPE(TermState);

        class t_TermState {
        public:
          PyObject_HEAD
          TermState object;
          static PyObject *wrap_Object(const TermState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
