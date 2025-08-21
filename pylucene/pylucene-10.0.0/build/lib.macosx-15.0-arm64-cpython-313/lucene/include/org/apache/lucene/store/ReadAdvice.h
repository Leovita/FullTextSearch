#ifndef org_apache_lucene_store_ReadAdvice_H
#define org_apache_lucene_store_ReadAdvice_H

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
      namespace store {
        class ReadAdvice;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ReadAdvice : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_68110771f2b0a836,
            mid_values_24c11dff8f467e35,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReadAdvice(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReadAdvice(const ReadAdvice& obj) : ::java::lang::Enum(obj) {}

          static ReadAdvice *NORMAL;
          static ReadAdvice *RANDOM;
          static ReadAdvice *RANDOM_PRELOAD;
          static ReadAdvice *SEQUENTIAL;

          static ReadAdvice valueOf(const ::java::lang::String &);
          static JArray< ReadAdvice > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ReadAdvice);
        extern PyTypeObject *PY_TYPE(ReadAdvice);

        class t_ReadAdvice {
        public:
          PyObject_HEAD
          ReadAdvice object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ReadAdvice *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ReadAdvice&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ReadAdvice&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
