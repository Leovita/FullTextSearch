#ifndef org_apache_lucene_backward_codecs_lucene87_LZ4WithPresetDictCompressionMode_H
#define org_apache_lucene_backward_codecs_lucene87_LZ4WithPresetDictCompressionMode_H

#include "org/apache/lucene/backward_codecs/compressing/CompressionMode.h"

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
        namespace compressing {
          class Decompressor;
          class Compressor;
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
        namespace lucene87 {

          class LZ4WithPresetDictCompressionMode : public ::org::apache::lucene::backward_codecs::compressing::CompressionMode {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_newCompressor_11aceb73d2617fb4,
              mid_newDecompressor_8d4c813b15f3e002,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4WithPresetDictCompressionMode(jobject obj) : ::org::apache::lucene::backward_codecs::compressing::CompressionMode(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4WithPresetDictCompressionMode(const LZ4WithPresetDictCompressionMode& obj) : ::org::apache::lucene::backward_codecs::compressing::CompressionMode(obj) {}

            LZ4WithPresetDictCompressionMode();

            ::org::apache::lucene::backward_codecs::compressing::Compressor newCompressor() const;
            ::org::apache::lucene::backward_codecs::compressing::Decompressor newDecompressor() const;
            ::java::lang::String toString() const;
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
        namespace lucene87 {
          extern PyType_Def PY_TYPE_DEF(LZ4WithPresetDictCompressionMode);
          extern PyTypeObject *PY_TYPE(LZ4WithPresetDictCompressionMode);

          class t_LZ4WithPresetDictCompressionMode {
          public:
            PyObject_HEAD
            LZ4WithPresetDictCompressionMode object;
            static PyObject *wrap_Object(const LZ4WithPresetDictCompressionMode&);
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
