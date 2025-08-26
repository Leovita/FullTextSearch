#ifndef org_apache_lucene_internal_tests_FilterIndexInputAccess_H
#define org_apache_lucene_internal_tests_FilterIndexInputAccess_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FilterIndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {

          class FilterIndexInputAccess : public ::java::lang::Object {
           public:
            enum {
              mid_addTestFilterType_fbe53aa5d2a68b3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterIndexInputAccess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilterIndexInputAccess(const FilterIndexInputAccess& obj) : ::java::lang::Object(obj) {}

            void addTestFilterType(const ::java::lang::Class &) const;
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(FilterIndexInputAccess);
          extern PyTypeObject *PY_TYPE(FilterIndexInputAccess);

          class t_FilterIndexInputAccess {
          public:
            PyObject_HEAD
            FilterIndexInputAccess object;
            static PyObject *wrap_Object(const FilterIndexInputAccess&);
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
