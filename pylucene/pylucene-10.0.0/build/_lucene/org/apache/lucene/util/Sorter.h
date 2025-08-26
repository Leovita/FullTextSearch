#ifndef org_apache_lucene_util_Sorter_H
#define org_apache_lucene_util_Sorter_H

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

        class Sorter : public ::java::lang::Object {
         public:
          enum {
            mid_sort_645c25455f5b9b1c,
            mid_setPivot_8226bd0b0fc13dba,
            mid_comparePivot_a3904e10f5bb9437,
            mid_compare_7f27cf81a85a97e9,
            mid_swap_645c25455f5b9b1c,
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

          void sort(jint, jint) const;
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
