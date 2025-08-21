#ifndef org_apache_lucene_analysis_morph_BinaryDictionaryWriter_H
#define org_apache_lucene_analysis_morph_BinaryDictionaryWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class BinaryDictionaryWriter : public ::java::lang::Object {
           public:
            enum {
              mid_put_1dd4f416112757eb,
              mid_write_8a3244428bfc77b8,
              mid_getBaseFileName_09a7afff1868fc5e,
              mid_addMapping_e13cff512ebda969,
              mid_write_3bcf8561749d9c49,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BinaryDictionaryWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BinaryDictionaryWriter(const BinaryDictionaryWriter& obj) : ::java::lang::Object(obj) {}

            jint put(const JArray< ::java::lang::String > &) const;
            void write(const ::java::nio::file::Path &) const;
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
      namespace analysis {
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(BinaryDictionaryWriter);
          extern PyTypeObject *PY_TYPE(BinaryDictionaryWriter);

          class t_BinaryDictionaryWriter {
          public:
            PyObject_HEAD
            BinaryDictionaryWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BinaryDictionaryWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BinaryDictionaryWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BinaryDictionaryWriter&, PyTypeObject *);
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
