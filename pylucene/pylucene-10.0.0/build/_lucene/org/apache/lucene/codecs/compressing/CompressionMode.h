#ifndef org_apache_lucene_codecs_compressing_CompressionMode_H
#define org_apache_lucene_codecs_compressing_CompressionMode_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {
          class Decompressor;
          class Compressor;
          class CompressionMode;
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
      namespace codecs {
        namespace compressing {

          class CompressionMode : public ::java::lang::Object {
           public:
            enum {
              mid_newCompressor_a3906ae75978c8b0,
              mid_newDecompressor_4831b2fbaf57a094,
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

            ::org::apache::lucene::codecs::compressing::Compressor newCompressor() const;
            ::org::apache::lucene::codecs::compressing::Decompressor newDecompressor() const;
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
