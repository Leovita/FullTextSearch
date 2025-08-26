#ifndef org_apache_lucene_search_Pruning_H
#define org_apache_lucene_search_Pruning_H

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
      namespace search {
        class Pruning;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Pruning : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_780d588bceb52d23,
            mid_values_6eeaa0c44e56720c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Pruning(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Pruning(const Pruning& obj) : ::java::lang::Enum(obj) {}

          static Pruning *GREATER_THAN;
          static Pruning *GREATER_THAN_OR_EQUAL_TO;
          static Pruning *NONE;

          static Pruning valueOf(const ::java::lang::String &);
          static JArray< Pruning > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(Pruning);
        extern PyTypeObject *PY_TYPE(Pruning);

        class t_Pruning {
        public:
          PyObject_HEAD
          Pruning object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Pruning *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Pruning&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Pruning&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
