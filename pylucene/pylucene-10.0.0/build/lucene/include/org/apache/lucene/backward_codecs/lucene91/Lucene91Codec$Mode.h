#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91Codec$Mode_H

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
        namespace lucene91 {
          class Lucene91Codec$Mode;
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
        namespace lucene91 {

          class Lucene91Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_2cdb891cda025e41,
              mid_values_cb24b0e810142936,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91Codec$Mode(const Lucene91Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene91Codec$Mode *BEST_COMPRESSION;
            static Lucene91Codec$Mode *BEST_SPEED;

            static Lucene91Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene91Codec$Mode > values();
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
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene91Codec$Mode);

          class t_Lucene91Codec$Mode {
          public:
            PyObject_HEAD
            Lucene91Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene91Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene91Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene91Codec$Mode&, PyTypeObject *);
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
