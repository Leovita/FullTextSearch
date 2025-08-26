#ifndef org_apache_lucene_util_StringSorter_H
#define org_apache_lucene_util_StringSorter_H

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

        class StringSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_sort_645c25455f5b9b1c,
            mid_radixSorter_f2f772fc7abc81b0,
            mid_fallbackSorter_147a26479192d1f6,
            mid_get_e7c3fa5efda97588,
            mid_compare_7f27cf81a85a97e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StringSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StringSorter(const StringSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(StringSorter);
        extern PyTypeObject *PY_TYPE(StringSorter);

        class t_StringSorter {
        public:
          PyObject_HEAD
          StringSorter object;
          static PyObject *wrap_Object(const StringSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
