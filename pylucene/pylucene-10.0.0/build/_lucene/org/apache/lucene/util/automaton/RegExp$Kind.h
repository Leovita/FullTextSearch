#ifndef org_apache_lucene_util_automaton_RegExp$Kind_H
#define org_apache_lucene_util_automaton_RegExp$Kind_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class RegExp$Kind;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class RegExp$Kind : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_a4c0bf1f17867820,
              mid_values_dcc87d91a9c97f71,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RegExp$Kind(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RegExp$Kind(const RegExp$Kind& obj) : ::java::lang::Enum(obj) {}

            static RegExp$Kind *REGEXP_ANYCHAR;
            static RegExp$Kind *REGEXP_ANYSTRING;
            static RegExp$Kind *REGEXP_AUTOMATON;
            static RegExp$Kind *REGEXP_CHAR;
            static RegExp$Kind *REGEXP_CHAR_RANGE;
            static RegExp$Kind *REGEXP_COMPLEMENT;
            static RegExp$Kind *REGEXP_CONCATENATION;
            static RegExp$Kind *REGEXP_DEPRECATED_COMPLEMENT;
            static RegExp$Kind *REGEXP_EMPTY;
            static RegExp$Kind *REGEXP_INTERSECTION;
            static RegExp$Kind *REGEXP_INTERVAL;
            static RegExp$Kind *REGEXP_OPTIONAL;
            static RegExp$Kind *REGEXP_PRE_CLASS;
            static RegExp$Kind *REGEXP_REPEAT;
            static RegExp$Kind *REGEXP_REPEAT_MIN;
            static RegExp$Kind *REGEXP_REPEAT_MINMAX;
            static RegExp$Kind *REGEXP_STRING;
            static RegExp$Kind *REGEXP_UNION;

            static RegExp$Kind valueOf(const ::java::lang::String &);
            static JArray< RegExp$Kind > values();
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
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(RegExp$Kind);
          extern PyTypeObject *PY_TYPE(RegExp$Kind);

          class t_RegExp$Kind {
          public:
            PyObject_HEAD
            RegExp$Kind object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RegExp$Kind *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RegExp$Kind&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RegExp$Kind&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
