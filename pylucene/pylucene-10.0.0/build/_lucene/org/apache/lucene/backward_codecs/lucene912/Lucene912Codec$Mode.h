#ifndef org_apache_lucene_backward_codecs_lucene912_Lucene912Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene912_Lucene912Codec$Mode_H

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
        namespace lucene912 {
          class Lucene912Codec$Mode;
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
        namespace lucene912 {

          class Lucene912Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_71cd33ca54ab485d,
              mid_values_44e588d1db8c232e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene912Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene912Codec$Mode(const Lucene912Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene912Codec$Mode *BEST_COMPRESSION;
            static Lucene912Codec$Mode *BEST_SPEED;

            static Lucene912Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene912Codec$Mode > values();
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
        namespace lucene912 {
          extern PyType_Def PY_TYPE_DEF(Lucene912Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene912Codec$Mode);

          class t_Lucene912Codec$Mode {
          public:
            PyObject_HEAD
            Lucene912Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene912Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene912Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene912Codec$Mode&, PyTypeObject *);
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
