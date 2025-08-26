#ifndef org_apache_lucene_util_MSBRadixSorter_H
#define org_apache_lucene_util_MSBRadixSorter_H

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

        class MSBRadixSorter : public ::org::apache::lucene::util::Sorter {
         public:
          enum {
            mid_sort_645c25455f5b9b1c,
            mid_shouldFallback_964913aa98f38ea1,
            mid_buildHistogram_b76d3ce74f32c735,
            mid_getBucket_7f27cf81a85a97e9,
            mid_getFallbackSorter_9395d4f5977a6e5a,
            mid_byteAt_7f27cf81a85a97e9,
            mid_sort_126b4efb1bebbe4a,
            mid_compare_7f27cf81a85a97e9,
            mid_reorder_18a7e4c2733a091e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MSBRadixSorter(jobject obj) : ::org::apache::lucene::util::Sorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MSBRadixSorter(const MSBRadixSorter& obj) : ::org::apache::lucene::util::Sorter(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(MSBRadixSorter);
        extern PyTypeObject *PY_TYPE(MSBRadixSorter);

        class t_MSBRadixSorter {
        public:
          PyObject_HEAD
          MSBRadixSorter object;
          static PyObject *wrap_Object(const MSBRadixSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
