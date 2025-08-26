#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByOrdinalComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByOrdinalComparable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByOrdinalComparable;
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

          class ComparableUtils$ByOrdinalComparable : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_compareTo_8a9f87deaeb2743e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils$ByOrdinalComparable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils$ByOrdinalComparable(const ComparableUtils$ByOrdinalComparable& obj) : ::java::lang::Object(obj) {}

            ComparableUtils$ByOrdinalComparable();

            jint compareTo(const ComparableUtils$ByOrdinalComparable &) const;
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
          extern PyType_Def PY_TYPE_DEF(ComparableUtils$ByOrdinalComparable);
          extern PyTypeObject *PY_TYPE(ComparableUtils$ByOrdinalComparable);

          class t_ComparableUtils$ByOrdinalComparable {
          public:
            PyObject_HEAD
            ComparableUtils$ByOrdinalComparable object;
            static PyObject *wrap_Object(const ComparableUtils$ByOrdinalComparable&);
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
