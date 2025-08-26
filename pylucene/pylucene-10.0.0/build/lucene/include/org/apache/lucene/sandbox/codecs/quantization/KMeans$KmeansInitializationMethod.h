#ifndef org_apache_lucene_sandbox_codecs_quantization_KMeans$KmeansInitializationMethod_H
#define org_apache_lucene_sandbox_codecs_quantization_KMeans$KmeansInitializationMethod_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            class KMeans$KmeansInitializationMethod;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {

            class KMeans$KmeansInitializationMethod : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_f6825705ad8720e8,
                mid_values_602ccef8134d6674,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KMeans$KmeansInitializationMethod(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KMeans$KmeansInitializationMethod(const KMeans$KmeansInitializationMethod& obj) : ::java::lang::Enum(obj) {}

              static KMeans$KmeansInitializationMethod *FORGY;
              static KMeans$KmeansInitializationMethod *PLUS_PLUS;
              static KMeans$KmeansInitializationMethod *RESERVOIR_SAMPLING;

              static KMeans$KmeansInitializationMethod valueOf(const ::java::lang::String &);
              static JArray< KMeans$KmeansInitializationMethod > values();
            };
          }
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
        namespace codecs {
          namespace quantization {
            extern PyType_Def PY_TYPE_DEF(KMeans$KmeansInitializationMethod);
            extern PyTypeObject *PY_TYPE(KMeans$KmeansInitializationMethod);

            class t_KMeans$KmeansInitializationMethod {
            public:
              PyObject_HEAD
              KMeans$KmeansInitializationMethod object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_KMeans$KmeansInitializationMethod *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const KMeans$KmeansInitializationMethod&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const KMeans$KmeansInitializationMethod&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
