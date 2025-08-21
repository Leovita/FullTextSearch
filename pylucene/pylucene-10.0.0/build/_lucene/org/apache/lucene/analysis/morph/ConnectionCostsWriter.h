#ifndef org_apache_lucene_analysis_morph_ConnectionCostsWriter_H
#define org_apache_lucene_analysis_morph_ConnectionCostsWriter_H

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

          class ConnectionCostsWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8156efeac2f22d8a,
              mid_add_20022b6d5e83c732,
              mid_write_d38f685b798c535e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConnectionCostsWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConnectionCostsWriter(const ConnectionCostsWriter& obj) : ::java::lang::Object(obj) {}

            ConnectionCostsWriter(const ::java::lang::Class &, jint, jint);

            void add(jint, jint, jint) const;
            void write(const ::java::nio::file::Path &, const ::java::lang::String &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(ConnectionCostsWriter);
          extern PyTypeObject *PY_TYPE(ConnectionCostsWriter);

          class t_ConnectionCostsWriter {
          public:
            PyObject_HEAD
            ConnectionCostsWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ConnectionCostsWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ConnectionCostsWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ConnectionCostsWriter&, PyTypeObject *);
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
