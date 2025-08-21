#ifndef org_apache_lucene_analysis_hunspell_TimeoutPolicy_H
#define org_apache_lucene_analysis_hunspell_TimeoutPolicy_H

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
      namespace analysis {
        namespace hunspell {
          class TimeoutPolicy;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class TimeoutPolicy : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_d93188b0c4e5505c,
              mid_values_e28071dc02e44232,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TimeoutPolicy(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TimeoutPolicy(const TimeoutPolicy& obj) : ::java::lang::Enum(obj) {}

            static TimeoutPolicy *NO_TIMEOUT;
            static TimeoutPolicy *RETURN_PARTIAL_RESULT;
            static TimeoutPolicy *THROW_EXCEPTION;

            static TimeoutPolicy valueOf(const ::java::lang::String &);
            static JArray< TimeoutPolicy > values();
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(TimeoutPolicy);
          extern PyTypeObject *PY_TYPE(TimeoutPolicy);

          class t_TimeoutPolicy {
          public:
            PyObject_HEAD
            TimeoutPolicy object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TimeoutPolicy *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TimeoutPolicy&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TimeoutPolicy&, PyTypeObject *);
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
