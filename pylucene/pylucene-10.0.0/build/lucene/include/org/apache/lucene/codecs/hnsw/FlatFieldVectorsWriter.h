#ifndef org_apache_lucene_codecs_hnsw_FlatFieldVectorsWriter_H
#define org_apache_lucene_codecs_hnsw_FlatFieldVectorsWriter_H

#include "org/apache/lucene/codecs/KnnFieldVectorsWriter.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocsWithFieldSet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {

          class FlatFieldVectorsWriter : public ::org::apache::lucene::codecs::KnnFieldVectorsWriter {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_finish_e7bdbe105ce1bafb,
              mid_getDocsWithFieldSet_3484fcca01236627,
              mid_getVectors_1387e1e2702ac173,
              mid_isFinished_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatFieldVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::KnnFieldVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatFieldVectorsWriter(const FlatFieldVectorsWriter& obj) : ::org::apache::lucene::codecs::KnnFieldVectorsWriter(obj) {}

            FlatFieldVectorsWriter();

            void finish() const;
            ::org::apache::lucene::index::DocsWithFieldSet getDocsWithFieldSet() const;
            ::java::util::List getVectors() const;
            jboolean isFinished() const;
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
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(FlatFieldVectorsWriter);
          extern PyTypeObject *PY_TYPE(FlatFieldVectorsWriter);

          class t_FlatFieldVectorsWriter {
          public:
            PyObject_HEAD
            FlatFieldVectorsWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FlatFieldVectorsWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FlatFieldVectorsWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FlatFieldVectorsWriter&, PyTypeObject *);
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
