#ifndef org_apache_lucene_backward_codecs_lucene94_Lucene94Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene94_Lucene94Codec$Mode_H

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
        namespace lucene94 {
          class Lucene94Codec$Mode;
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
        namespace lucene94 {

          class Lucene94Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_f371dbcddec43c6f,
              mid_values_b2e40c36e6850a5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene94Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene94Codec$Mode(const Lucene94Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene94Codec$Mode *BEST_COMPRESSION;
            static Lucene94Codec$Mode *BEST_SPEED;

            static Lucene94Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene94Codec$Mode > values();
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
        namespace lucene94 {
          extern PyType_Def PY_TYPE_DEF(Lucene94Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene94Codec$Mode);

          class t_Lucene94Codec$Mode {
          public:
            PyObject_HEAD
            Lucene94Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene94Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene94Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene94Codec$Mode&, PyTypeObject *);
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
