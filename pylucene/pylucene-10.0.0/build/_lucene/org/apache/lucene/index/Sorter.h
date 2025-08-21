#ifndef org_apache_lucene_index_Sorter_H
#define org_apache_lucene_index_Sorter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Sorter : public ::java::lang::Object {
         public:
          enum {
            mid_getID_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sorter(const Sorter& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String getID() const;
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
        extern PyType_Def PY_TYPE_DEF(Sorter);
        extern PyTypeObject *PY_TYPE(Sorter);

        class t_Sorter {
        public:
          PyObject_HEAD
          Sorter object;
          static PyObject *wrap_Object(const Sorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
