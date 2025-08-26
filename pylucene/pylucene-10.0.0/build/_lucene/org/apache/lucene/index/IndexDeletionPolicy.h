#ifndef org_apache_lucene_index_IndexDeletionPolicy_H
#define org_apache_lucene_index_IndexDeletionPolicy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexCommit;
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexDeletionPolicy : public ::java::lang::Object {
         public:
          enum {
            mid_onCommit_acbb405b60a30822,
            mid_onInit_acbb405b60a30822,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexDeletionPolicy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexDeletionPolicy(const IndexDeletionPolicy& obj) : ::java::lang::Object(obj) {}

          void onCommit(const ::java::util::List &) const;
          void onInit(const ::java::util::List &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexDeletionPolicy);
        extern PyTypeObject *PY_TYPE(IndexDeletionPolicy);

        class t_IndexDeletionPolicy {
        public:
          PyObject_HEAD
          IndexDeletionPolicy object;
          static PyObject *wrap_Object(const IndexDeletionPolicy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
