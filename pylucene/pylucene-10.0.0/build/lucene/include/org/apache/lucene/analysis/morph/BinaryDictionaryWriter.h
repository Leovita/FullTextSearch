#ifndef org_apache_lucene_analysis_morph_BinaryDictionaryWriter_H
#define org_apache_lucene_analysis_morph_BinaryDictionaryWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace lang {
    class String;
    class Class;
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
              mid_put_bee55f3c003b8000,
              mid_write_e7b3ede3efacc86d,
              mid_getBaseFileName_e7df854526d67fa3,
              mid_addMapping_645c25455f5b9b1c,
              mid_write_bc9f7ff300bbac14,
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
