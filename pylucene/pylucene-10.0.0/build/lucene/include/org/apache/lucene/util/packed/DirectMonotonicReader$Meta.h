#ifndef org_apache_lucene_util_packed_DirectMonotonicReader$Meta_H
#define org_apache_lucene_util_packed_DirectMonotonicReader$Meta_H

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
      namespace util {
        namespace packed {

          class DirectMonotonicReader$Meta : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectMonotonicReader$Meta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectMonotonicReader$Meta(const DirectMonotonicReader$Meta& obj) : ::java::lang::Object(obj) {}
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(DirectMonotonicReader$Meta);
          extern PyTypeObject *PY_TYPE(DirectMonotonicReader$Meta);

          class t_DirectMonotonicReader$Meta {
          public:
            PyObject_HEAD
            DirectMonotonicReader$Meta object;
            static PyObject *wrap_Object(const DirectMonotonicReader$Meta&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
