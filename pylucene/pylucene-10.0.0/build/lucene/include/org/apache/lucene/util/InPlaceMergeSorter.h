#ifndef org_apache_lucene_util_InPlaceMergeSorter_H
#define org_apache_lucene_util_InPlaceMergeSorter_H

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

        class InPlaceMergeSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_sort_645c25455f5b9b1c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InPlaceMergeSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InPlaceMergeSorter(const InPlaceMergeSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

          InPlaceMergeSorter();

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
        extern PyType_Def PY_TYPE_DEF(InPlaceMergeSorter);
        extern PyTypeObject *PY_TYPE(InPlaceMergeSorter);

        class t_InPlaceMergeSorter {
        public:
          PyObject_HEAD
          InPlaceMergeSorter object;
          static PyObject *wrap_Object(const InPlaceMergeSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
