#ifndef org_apache_lucene_sandbox_facet_ComparableUtils$ByLongValueComparable_H
#define org_apache_lucene_sandbox_facet_ComparableUtils$ByLongValueComparable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          class ComparableUtils$ByLongValueComparable;
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

          class ComparableUtils$ByLongValueComparable : public ::java::lang::Object {
           public:
            enum {
              mid_compareTo_062ba67e72c26201,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComparableUtils$ByLongValueComparable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComparableUtils$ByLongValueComparable(const ComparableUtils$ByLongValueComparable& obj) : ::java::lang::Object(obj) {}

            jint compareTo(const ComparableUtils$ByLongValueComparable &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(ComparableUtils$ByLongValueComparable);
          extern PyTypeObject *PY_TYPE(ComparableUtils$ByLongValueComparable);

          class t_ComparableUtils$ByLongValueComparable {
          public:
            PyObject_HEAD
            ComparableUtils$ByLongValueComparable object;
            static PyObject *wrap_Object(const ComparableUtils$ByLongValueComparable&);
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
