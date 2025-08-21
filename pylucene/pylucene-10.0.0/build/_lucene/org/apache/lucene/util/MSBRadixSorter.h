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
            mid_sort_e13cff512ebda969,
            mid_byteAt_7f733b5d08bb5ec4,
            mid_getBucket_7f733b5d08bb5ec4,
            mid_getFallbackSorter_6776c9ce0d7c2e91,
            mid_shouldFallback_fb87b32bf7e41aa6,
            mid_buildHistogram_2df1593885c152a7,
            mid_compare_7f733b5d08bb5ec4,
            mid_sort_94688dd632556392,
            mid_reorder_c6bb55e9abb3c2db,
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
