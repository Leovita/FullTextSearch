#ifndef org_apache_lucene_util_StableMSBRadixSorter_H
#define org_apache_lucene_util_StableMSBRadixSorter_H

#include "org/apache/lucene/util/MSBRadixSorter.h"

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

        class StableMSBRadixSorter : public ::org::apache::lucene::util::MSBRadixSorter {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_restore_e13cff512ebda969,
            mid_getFallbackSorter_6776c9ce0d7c2e91,
            mid_save_e13cff512ebda969,
            mid_reorder_c6bb55e9abb3c2db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StableMSBRadixSorter(jobject obj) : ::org::apache::lucene::util::MSBRadixSorter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StableMSBRadixSorter(const StableMSBRadixSorter& obj) : ::org::apache::lucene::util::MSBRadixSorter(obj) {}

          StableMSBRadixSorter(jint);
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
        extern PyType_Def PY_TYPE_DEF(StableMSBRadixSorter);
        extern PyTypeObject *PY_TYPE(StableMSBRadixSorter);

        class t_StableMSBRadixSorter {
        public:
          PyObject_HEAD
          StableMSBRadixSorter object;
          static PyObject *wrap_Object(const StableMSBRadixSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
