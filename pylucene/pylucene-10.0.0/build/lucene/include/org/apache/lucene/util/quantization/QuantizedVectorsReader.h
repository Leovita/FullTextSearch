#ifndef org_apache_lucene_util_quantization_QuantizedVectorsReader_H
#define org_apache_lucene_util_quantization_QuantizedVectorsReader_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {

          class QuantizedVectorsReader : public ::java::io::Closeable {
           public:
            enum {
              mid_getQuantizationState_ab0992f9e171f8d4,
              mid_getQuantizedVectorValues_20e6d465a58a6183,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit QuantizedVectorsReader(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            QuantizedVectorsReader(const QuantizedVectorsReader& obj) : ::java::io::Closeable(obj) {}

            ::org::apache::lucene::util::quantization::ScalarQuantizer getQuantizationState(const ::java::lang::String &) const;
            ::org::apache::lucene::util::quantization::QuantizedByteVectorValues getQuantizedVectorValues(const ::java::lang::String &) const;
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
      namespace util {
        namespace quantization {
          extern PyType_Def PY_TYPE_DEF(QuantizedVectorsReader);
          extern PyTypeObject *PY_TYPE(QuantizedVectorsReader);

          class t_QuantizedVectorsReader {
          public:
            PyObject_HEAD
            QuantizedVectorsReader object;
            static PyObject *wrap_Object(const QuantizedVectorsReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
