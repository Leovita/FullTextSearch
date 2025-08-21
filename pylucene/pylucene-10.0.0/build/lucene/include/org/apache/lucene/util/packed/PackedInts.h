#ifndef org_apache_lucene_util_packed_PackedInts_H
#define org_apache_lucene_util_packed_PackedInts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Mutable;
          class PackedInts$Decoder;
          class PackedInts$Encoder;
          class PackedInts$Reader;
          class PackedInts$FormatAndBits;
          class PackedInts$Format;
          class PackedInts$ReaderIterator;
          class PackedInts$Writer;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
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
        namespace packed {

          class PackedInts : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_bitsRequired_35c872f03f347c10,
              mid_checkVersion_540b2b23d51b1efd,
              mid_copy_ec05a47d4d8ed032,
              mid_fastestFormatAndBits_01712621e153db20,
              mid_getDecoder_a62ba07f72351e54,
              mid_getEncoder_54d941eaf7d7bd70,
              mid_getMutable_d14c322c40e7c262,
              mid_getMutable_e292a175594e9c5e,
              mid_getReaderIteratorNoHeader_72d833247d2e182a,
              mid_getWriterNoHeader_8a790bc3e28aa88d,
              mid_maxValue_7b22650fccb5d574,
              mid_unsignedBitsRequired_35c872f03f347c10,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts(const PackedInts& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat COMPACT;
            static jfloat DEFAULT;
            static jint DEFAULT_BUFFER_SIZE;
            static jfloat FAST;
            static jfloat FASTEST;
            static jint VERSION_CURRENT;
            static jint VERSION_MONOTONIC_WITHOUT_ZIGZAG;
            static jint VERSION_START;

            PackedInts();

            static jint bitsRequired(jlong);
            static void checkVersion(jint);
            static void copy(const ::org::apache::lucene::util::packed::PackedInts$Reader &, jint, const ::org::apache::lucene::util::packed::PackedInts$Mutable &, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$FormatAndBits fastestFormatAndBits(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$Decoder getDecoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Encoder getEncoder(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, const ::org::apache::lucene::util::packed::PackedInts$Format &);
            static ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable(jint, jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedInts$ReaderIterator getReaderIteratorNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint, jint);
            static ::org::apache::lucene::util::packed::PackedInts$Writer getWriterNoHeader(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
            static jlong maxValue(jint);
            static jint unsignedBitsRequired(jlong);
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts);
          extern PyTypeObject *PY_TYPE(PackedInts);

          class t_PackedInts {
          public:
            PyObject_HEAD
            PackedInts object;
            static PyObject *wrap_Object(const PackedInts&);
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
