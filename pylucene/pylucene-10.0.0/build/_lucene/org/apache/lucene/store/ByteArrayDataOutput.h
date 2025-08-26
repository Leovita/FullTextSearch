#ifndef org_apache_lucene_store_ByteArrayDataOutput_H
#define org_apache_lucene_store_ByteArrayDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_a4d4f283481182e8,
            mid_init$_116f7fcb5bff0f39,
            mid_getPosition_bd89ce15dad49192,
            mid_reset_a4d4f283481182e8,
            mid_reset_116f7fcb5bff0f39,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_116f7fcb5bff0f39,
            mid_writeInt_8226bd0b0fc13dba,
            mid_writeLong_1d3149fac12f2af3,
            mid_writeShort_19904c0bd37f0d7f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataOutput(const ByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          ByteArrayDataOutput();
          ByteArrayDataOutput(const JArray< jbyte > &);
          ByteArrayDataOutput(const JArray< jbyte > &, jint, jint);

          jint getPosition() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeShort(jshort) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataOutput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataOutput);

        class t_ByteArrayDataOutput {
        public:
          PyObject_HEAD
          ByteArrayDataOutput object;
          static PyObject *wrap_Object(const ByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
