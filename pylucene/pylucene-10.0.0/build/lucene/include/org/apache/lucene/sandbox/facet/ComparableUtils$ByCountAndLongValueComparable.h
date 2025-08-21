#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByCountAndLongValueComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByCountAndLongValueComparable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByCountAndLongValueComparable;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {

          class ComparableUtils$ByCountAndLongValueComparable : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_ba08b60d60adccfa,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils$ByCountAndLongValueComparable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils$ByCountAndLongValueComparable(const ComparableUtils$ByCountAndLongValueComparable& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const ComparableUtils$ByCountAndLongValueComparable &) const;
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
      namespace sandbox {
        namespace facet {
          extern PyType_Def PY_TYPE_DEF(ComparableUtils$ByCountAndLongValueComparable);
          extern PyTypeObject *PY_TYPE(ComparableUtils$ByCountAndLongValueComparable);

          class t_ComparableUtils$ByCountAndLongValueComparable {
          public:
            PyObject_HEAD
            ComparableUtils$ByCountAndLongValueComparable object;
            static PyObject *wrap_Object(const ComparableUtils$ByCountAndLongValueComparable&);
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
