#ifndef org_apache_lucene_store_DataOutput_H
#define org_apache_lucene_store_DataOutput_H

#include "java/lang/Object.h"

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
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class DataOutput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_copyBytes_56e1353970db77c0,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_31e2e931f3bb1000,
            mid_writeBytes_116f7fcb5bff0f39,
            mid_writeGroupVInts_e28d84b49af388d8,
            mid_writeInt_8226bd0b0fc13dba,
            mid_writeLong_1d3149fac12f2af3,
            mid_writeMapOfStrings_6a7e23584beb7c0f,
            mid_writeSetOfStrings_478519f7d4301fc7,
            mid_writeShort_19904c0bd37f0d7f,
            mid_writeString_ee46a189998009d6,
            mid_writeVInt_8226bd0b0fc13dba,
            mid_writeVLong_1d3149fac12f2af3,
            mid_writeZInt_8226bd0b0fc13dba,
            mid_writeZLong_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataOutput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataOutput(const DataOutput& obj) : ::java::lang::Object(obj) {}

          DataOutput();

          void copyBytes(const ::org::apache::lucene::store::DataInput &, jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeGroupVInts(const JArray< jlong > &, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeMapOfStrings(const ::java::util::Map &) const;
          void writeSetOfStrings(const ::java::util::Set &) const;
          void writeShort(jshort) const;
          void writeString(const ::java::lang::String &) const;
          void writeVInt(jint) const;
          void writeVLong(jlong) const;
          void writeZInt(jint) const;
          void writeZLong(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(DataOutput);
        extern PyTypeObject *PY_TYPE(DataOutput);

        class t_DataOutput {
        public:
          PyObject_HEAD
          DataOutput object;
          static PyObject *wrap_Object(const DataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
