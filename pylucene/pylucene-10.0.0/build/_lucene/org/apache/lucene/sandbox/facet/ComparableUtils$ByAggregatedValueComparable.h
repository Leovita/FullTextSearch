#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByAggregatedValueComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByAggregatedValueComparable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByAggregatedValueComparable;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {

          class ComparableUtils$ByAggregatedValueComparable : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_d5d46453be4ef3bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils$ByAggregatedValueComparable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils$ByAggregatedValueComparable(const ComparableUtils$ByAggregatedValueComparable& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const ComparableUtils$ByAggregatedValueComparable &) const;
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
          extern PyType_Def PY_TYPE_DEF(ComparableUtils$ByAggregatedValueComparable);
          extern PyTypeObject *PY_TYPE(ComparableUtils$ByAggregatedValueComparable);

          class t_ComparableUtils$ByAggregatedValueComparable {
          public:
            PyObject_HEAD
            ComparableUtils$ByAggregatedValueComparable object;
            static PyObject *wrap_Object(const ComparableUtils$ByAggregatedValueComparable&);
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
