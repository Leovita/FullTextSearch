#ifndef org_apache_lucene_store_ByteBuffersIndexOutput_H
#define org_apache_lucene_store_ByteBuffersIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class ByteBuffersDataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_7dfcb3911aa2bc0e,
            mid_close_e7bdbe105ce1bafb,
            mid_copyBytes_56e1353970db77c0,
            mid_getChecksum_0f176418e3e16541,
            mid_getFilePointer_0f176418e3e16541,
            mid_toArrayCopy_44e916dc40fc04cb,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_31e2e931f3bb1000,
            mid_writeBytes_116f7fcb5bff0f39,
            mid_writeInt_8226bd0b0fc13dba,
            mid_writeLong_1d3149fac12f2af3,
            mid_writeMapOfStrings_6a7e23584beb7c0f,
            mid_writeSetOfStrings_478519f7d4301fc7,
            mid_writeShort_19904c0bd37f0d7f,
            mid_writeString_ee46a189998009d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersIndexOutput(const ByteBuffersIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          ByteBuffersIndexOutput(const ::org::apache::lucene::store::ByteBuffersDataOutput &, const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          JArray< jbyte > toArrayCopy() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBuffersIndexOutput);
        extern PyTypeObject *PY_TYPE(ByteBuffersIndexOutput);

        class t_ByteBuffersIndexOutput {
        public:
          PyObject_HEAD
          ByteBuffersIndexOutput object;
          static PyObject *wrap_Object(const ByteBuffersIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
