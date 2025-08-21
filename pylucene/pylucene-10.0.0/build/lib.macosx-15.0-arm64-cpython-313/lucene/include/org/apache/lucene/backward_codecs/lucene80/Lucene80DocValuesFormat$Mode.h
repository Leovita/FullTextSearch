#ifndef org_apache_lucene_backward_codecs_lucene80_Lucene80DocValuesFormat$Mode_H
#define org_apache_lucene_backward_codecs_lucene80_Lucene80DocValuesFormat$Mode_H

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
      namespace backward_codecs {
        namespace lucene80 {
          class Lucene80DocValuesFormat$Mode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene80 {

          class Lucene80DocValuesFormat$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_37342dc07042c04e,
              mid_values_1b80fd7601c7f07a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene80DocValuesFormat$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene80DocValuesFormat$Mode(const Lucene80DocValuesFormat$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene80DocValuesFormat$Mode *BEST_COMPRESSION;
            static Lucene80DocValuesFormat$Mode *BEST_SPEED;

            static Lucene80DocValuesFormat$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene80DocValuesFormat$Mode > values();
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
      namespace backward_codecs {
        namespace lucene80 {
          extern PyType_Def PY_TYPE_DEF(Lucene80DocValuesFormat$Mode);
          extern PyTypeObject *PY_TYPE(Lucene80DocValuesFormat$Mode);

          class t_Lucene80DocValuesFormat$Mode {
          public:
            PyObject_HEAD
            Lucene80DocValuesFormat$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene80DocValuesFormat$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene80DocValuesFormat$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene80DocValuesFormat$Mode&, PyTypeObject *);
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
