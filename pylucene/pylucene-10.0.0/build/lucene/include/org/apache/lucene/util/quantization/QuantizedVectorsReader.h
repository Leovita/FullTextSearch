#ifndef org_apache_lucene_util_quantization_QuantizedVectorsReader_H
#define org_apache_lucene_util_quantization_QuantizedVectorsReader_H

#include "java/io/Closeable.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizer;
          class QuantizedByteVectorValues;
        }
        class Accountable;
      }
    }
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
              mid_getQuantizationState_79cb6c90083c7390,
              mid_getQuantizedVectorValues_a165ba1a19df4b04,
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
