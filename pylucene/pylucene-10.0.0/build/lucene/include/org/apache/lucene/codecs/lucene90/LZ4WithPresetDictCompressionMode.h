#ifndef org_apache_lucene_codecs_lucene90_LZ4WithPresetDictCompressionMode_H
#define org_apache_lucene_codecs_lucene90_LZ4WithPresetDictCompressionMode_H

#include "org/apache/lucene/codecs/compressing/CompressionMode.h"

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
        namespace compressing {
          class Compressor;
          class Decompressor;
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
        namespace lucene90 {

          class LZ4WithPresetDictCompressionMode : public ::org::apache::lucene::codecs::compressing::CompressionMode {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_newCompressor_ffb008ea311c4f06,
              mid_newDecompressor_0a2895b8bea244f0,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4WithPresetDictCompressionMode(jobject obj) : ::org::apache::lucene::codecs::compressing::CompressionMode(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4WithPresetDictCompressionMode(const LZ4WithPresetDictCompressionMode& obj) : ::org::apache::lucene::codecs::compressing::CompressionMode(obj) {}

            LZ4WithPresetDictCompressionMode();

            ::org::apache::lucene::codecs::compressing::Compressor newCompressor() const;
            ::org::apache::lucene::codecs::compressing::Decompressor newDecompressor() const;
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
      namespace codecs {
        namespace lucene90 {
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
