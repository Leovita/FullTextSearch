#ifndef org_apache_lucene_store_ByteBuffersIndexOutput_H
#define org_apache_lucene_store_ByteBuffersIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
    class Map;
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
            mid_init$_ae98ec413d9d1cac,
            mid_close_3720c61b0679eb3e,
            mid_copyBytes_3386f81b45981517,
            mid_getChecksum_16939d9d0a9a9721,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_toArrayCopy_5560da88fc44aa82,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_3f6ea74fc0096aaa,
            mid_writeBytes_5fdd5da9426708e6,
            mid_writeInt_540b2b23d51b1efd,
            mid_writeLong_8b3d46852b435a94,
            mid_writeMapOfStrings_79ba0f5a7d05e623,
            mid_writeSetOfStrings_1d5d4c6f11d1b2ab,
            mid_writeShort_13ddeb599c553531,
            mid_writeString_0d82408c6e55bc30,
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
