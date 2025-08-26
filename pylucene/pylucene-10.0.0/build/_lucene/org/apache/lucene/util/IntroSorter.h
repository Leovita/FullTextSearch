#ifndef org_apache_lucene_util_IntroSorter_H
#define org_apache_lucene_util_IntroSorter_H

#include "org/apache/lucene/util/Sorter.h"

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

        class IntroSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_sort_645c25455f5b9b1c,
            mid_setPivot_8226bd0b0fc13dba,
            mid_comparePivot_a3904e10f5bb9437,
            mid_compare_7f27cf81a85a97e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSorter(const IntroSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

          IntroSorter();

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
        extern PyType_Def PY_TYPE_DEF(IntroSorter);
        extern PyTypeObject *PY_TYPE(IntroSorter);

        class t_IntroSorter {
        public:
          PyObject_HEAD
          IntroSorter object;
          static PyObject *wrap_Object(const IntroSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
