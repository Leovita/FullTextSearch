#ifndef org_apache_lucene_backward_codecs_lucene99_Lucene99Codec$Mode_H
#define org_apache_lucene_backward_codecs_lucene99_Lucene99Codec$Mode_H

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
        namespace lucene99 {
          class Lucene99Codec$Mode;
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
        namespace lucene99 {

          class Lucene99Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_bb0108b039878e81,
              mid_values_e68f00e50b65593d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99Codec$Mode(const Lucene99Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene99Codec$Mode *BEST_COMPRESSION;
            static Lucene99Codec$Mode *BEST_SPEED;

            static Lucene99Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene99Codec$Mode > values();
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
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene99Codec$Mode);

          class t_Lucene99Codec$Mode {
          public:
            PyObject_HEAD
            Lucene99Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene99Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene99Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene99Codec$Mode&, PyTypeObject *);
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
