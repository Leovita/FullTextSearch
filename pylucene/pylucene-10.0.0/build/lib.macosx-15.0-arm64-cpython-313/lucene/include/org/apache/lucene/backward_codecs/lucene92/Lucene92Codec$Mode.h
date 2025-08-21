#ifndef org_apache_lucene_backward_codecs_lucene92_Lucene92Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene92_Lucene92Codec$Mode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene92 {
          class Lucene92Codec$Mode;
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
        namespace lucene92 {

          class Lucene92Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_56f0ff47816bae1d,
              mid_values_23b8cb5a9b4d3805,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene92Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene92Codec$Mode(const Lucene92Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene92Codec$Mode *BEST_COMPRESSION;
            static Lucene92Codec$Mode *BEST_SPEED;

            static Lucene92Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene92Codec$Mode > values();
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
        namespace lucene92 {
          extern PyType_Def PY_TYPE_DEF(Lucene92Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene92Codec$Mode);

          class t_Lucene92Codec$Mode {
          public:
            PyObject_HEAD
            Lucene92Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene92Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene92Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene92Codec$Mode&, PyTypeObject *);
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
