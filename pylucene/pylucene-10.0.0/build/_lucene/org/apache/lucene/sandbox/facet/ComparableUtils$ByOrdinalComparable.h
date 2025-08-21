#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByOrdinalComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByOrdinalComparable_H

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
          class ComparableUtils$ByOrdinalComparable;
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

          class ComparableUtils$ByOrdinalComparable : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_compareTo_e283a2528c67fce0,
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
