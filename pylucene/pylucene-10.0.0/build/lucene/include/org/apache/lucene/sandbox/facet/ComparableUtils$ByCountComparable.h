#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByCountComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByCountComparable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByCountComparable;
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

          class ComparableUtils$ByCountComparable : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_6d87fbeff0a380a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils$ByCountComparable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils$ByCountComparable(const ComparableUtils$ByCountComparable& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const ComparableUtils$ByCountComparable &) const;
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
          extern PyType_Def PY_TYPE_DEF(ComparableUtils$ByCountComparable);
          extern PyTypeObject *PY_TYPE(ComparableUtils$ByCountComparable);

          class t_ComparableUtils$ByCountComparable {
          public:
            PyObject_HEAD
            ComparableUtils$ByCountComparable object;
            static PyObject *wrap_Object(const ComparableUtils$ByCountComparable&);
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
