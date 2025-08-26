#ifndef org_apache_lucene_store_ByteArrayDataInput_H
#define org_apache_lucene_store_ByteArrayDataInput_H

#include "org/apache/lucene/store/DataInput.h"

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

        class ByteArrayDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_a4d4f283481182e8,
            mid_init$_116f7fcb5bff0f39,
            mid_eof_9aa4f33e82ea333f,
            mid_getPosition_bd89ce15dad49192,
            mid_length_bd89ce15dad49192,
            mid_readByte_1456044a01a5c9bf,
            mid_readBytes_116f7fcb5bff0f39,
            mid_readInt_bd89ce15dad49192,
            mid_readLong_0f176418e3e16541,
            mid_readShort_ae7a5bcb127748fd,
            mid_readVInt_bd89ce15dad49192,
            mid_readVLong_0f176418e3e16541,
            mid_reset_a4d4f283481182e8,
            mid_reset_116f7fcb5bff0f39,
            mid_rewind_e7bdbe105ce1bafb,
            mid_setPosition_8226bd0b0fc13dba,
            mid_skipBytes_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataInput(const ByteArrayDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          ByteArrayDataInput();
          ByteArrayDataInput(const JArray< jbyte > &);
          ByteArrayDataInput(const JArray< jbyte > &, jint, jint);

          jboolean eof() const;
          jint getPosition() const;
          jint length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          jint readInt() const;
          jlong readLong() const;
          jshort readShort() const;
          jint readVInt() const;
          jlong readVLong() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void rewind() const;
          void setPosition(jint) const;
          void skipBytes(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataInput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataInput);

        class t_ByteArrayDataInput {
        public:
          PyObject_HEAD
          ByteArrayDataInput object;
          static PyObject *wrap_Object(const ByteArrayDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
