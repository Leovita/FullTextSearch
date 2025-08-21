#ifndef org_apache_lucene_backward_codecs_lucene87_Lucene87Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene87_Lucene87Codec$Mode_H

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
        namespace lucene87 {
          class Lucene87Codec$Mode;
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
        namespace lucene87 {

          class Lucene87Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_7108ae3cf50f4ac8,
              mid_values_7e4be45f961c7b1b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene87Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene87Codec$Mode(const Lucene87Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene87Codec$Mode *BEST_COMPRESSION;
            static Lucene87Codec$Mode *BEST_SPEED;

            static Lucene87Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene87Codec$Mode > values();
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
        namespace lucene87 {
          extern PyType_Def PY_TYPE_DEF(Lucene87Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene87Codec$Mode);

          class t_Lucene87Codec$Mode {
          public:
            PyObject_HEAD
            Lucene87Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene87Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene87Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene87Codec$Mode&, PyTypeObject *);
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
