#ifndef org_apache_lucene_codecs_lucene100_Lucene100Codec$Mode_H
#define org_apache_lucene_codecs_lucene100_Lucene100Codec$Mode_H

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
      namespace codecs {
        namespace lucene100 {
          class Lucene100Codec$Mode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene100 {

          class Lucene100Codec$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_e8a6bed37dfc81c0,
              mid_values_76464e833b94627d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene100Codec$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene100Codec$Mode(const Lucene100Codec$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene100Codec$Mode *BEST_COMPRESSION;
            static Lucene100Codec$Mode *BEST_SPEED;

            static Lucene100Codec$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene100Codec$Mode > values();
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
      namespace codecs {
        namespace lucene100 {
          extern PyType_Def PY_TYPE_DEF(Lucene100Codec$Mode);
          extern PyTypeObject *PY_TYPE(Lucene100Codec$Mode);

          class t_Lucene100Codec$Mode {
          public:
            PyObject_HEAD
            Lucene100Codec$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene100Codec$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene100Codec$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene100Codec$Mode&, PyTypeObject *);
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
