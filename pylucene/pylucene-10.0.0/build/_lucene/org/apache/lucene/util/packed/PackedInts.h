#ifndef org_apache_lucene_util_packed_PackedInts_H
#define org_apache_lucene_util_packed_PackedInts_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Writer;
          class PackedInts$Encoder;
          class PackedInts$Decoder;
          class PackedInts$ReaderIterator;
          class PackedInts$FormatAndBits;
          class PackedInts$Format;
          class PackedInts$Mutable;
          class PackedInts$Reader;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_bitsRequired_7af44747c1921bd4,
              mid_checkVersion_8226bd0b0fc13dba,
              mid_copy_fe755dccfaf591f8,
              mid_fastestFormatAndBits_98812a39f345ab38,
              mid_getDecoder_dee20148ea03fa9c,
              mid_getEncoder_7e806054a3d92e67,
              mid_getMutable_d2e17711944bc6c8,
              mid_getMutable_e3708d355991e48c,
              mid_getReaderIteratorNoHeader_aeb65412703b26af,
              mid_getWriterNoHeader_b5446cb5ca3f3b2f,
              mid_maxValue_49af390f180d8ee7,
              mid_unsignedBitsRequired_7af44747c1921bd4,
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
