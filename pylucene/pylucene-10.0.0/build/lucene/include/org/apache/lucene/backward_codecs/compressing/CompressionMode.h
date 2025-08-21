#ifndef org_apache_lucene_backward_codecs_compressing_CompressionMode_H
#define org_apache_lucene_backward_codecs_compressing_CompressionMode_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace compressing {
          class CompressionMode;
          class Decompressor;
          class Compressor;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace compressing {

          class CompressionMode : public ::java::lang::Object {
           public:
            enum {
              mid_newCompressor_11aceb73d2617fb4,
              mid_newDecompressor_8d4c813b15f3e002,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompressionMode(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompressionMode(const CompressionMode& obj) : ::java::lang::Object(obj) {}

            static CompressionMode *FAST;
            static CompressionMode *FAST_DECOMPRESSION;
            static CompressionMode *HIGH_COMPRESSION;

            ::org::apache::lucene::backward_codecs::compressing::Compressor newCompressor() const;
            ::org::apache::lucene::backward_codecs::compressing::Decompressor newDecompressor() const;
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
        namespace compressing {
          extern PyType_Def PY_TYPE_DEF(CompressionMode);
          extern PyTypeObject *PY_TYPE(CompressionMode);

          class t_CompressionMode {
          public:
            PyObject_HEAD
            CompressionMode object;
            static PyObject *wrap_Object(const CompressionMode&);
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
