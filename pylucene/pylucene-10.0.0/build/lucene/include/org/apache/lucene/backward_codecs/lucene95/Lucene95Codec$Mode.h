#ifndef org_apache_lucene_backward_codecs_lucene95_Lucene95Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene95_Lucene95Codec$Mode_H

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
        namespace lucene95 {
          class Lucene95Codec$Mode;
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
        namespace lucene95 {

          class Lucene95Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_2c6a191c5ac25e21,
              mid_values_de5e99c546afdab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene95Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene95Codec$Mode(const Lucene95Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene95Codec$Mode *BEST_COMPRESSION;
            static Lucene95Codec$Mode *BEST_SPEED;

            static Lucene95Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene95Codec$Mode > values();
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
        namespace lucene95 {
          extern PyType_Def PY_TYPE_DEF(Lucene95Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene95Codec$Mode);

          class t_Lucene95Codec$Mode {
          public:
            PyObject_HEAD
            Lucene95Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene95Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene95Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene95Codec$Mode&, PyTypeObject *);
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
