#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90Codec$Mode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90Codec$Mode;
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
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_6f273a56e0691d2a,
              mid_values_cc9c7f5ceb546af2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90Codec$Mode(const Lucene90Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene90Codec$Mode *BEST_COMPRESSION;
            static Lucene90Codec$Mode *BEST_SPEED;

            static Lucene90Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene90Codec$Mode > values();
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene90Codec$Mode);

          class t_Lucene90Codec$Mode {
          public:
            PyObject_HEAD
            Lucene90Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene90Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene90Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene90Codec$Mode&, PyTypeObject *);
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
