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
            mid_sort_e13cff512ebda969,
            mid_setPivot_540b2b23d51b1efd,
            mid_comparePivot_3c9bba330f083871,
            mid_compare_7f733b5d08bb5ec4,
            mid_swap_e13cff512ebda969,
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
