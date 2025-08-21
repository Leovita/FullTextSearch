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
            mid_init$_3720c61b0679eb3e,
            mid_init$_3ce1e597fb62ac79,
            mid_init$_5fdd5da9426708e6,
            mid_eof_947277eca0748c4e,
            mid_getPosition_20fbf7565993c3d7,
            mid_length_20fbf7565993c3d7,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_readInt_20fbf7565993c3d7,
            mid_readLong_16939d9d0a9a9721,
            mid_readShort_21ad82099ac5d56c,
            mid_readVInt_20fbf7565993c3d7,
            mid_readVLong_16939d9d0a9a9721,
            mid_reset_3ce1e597fb62ac79,
            mid_reset_5fdd5da9426708e6,
            mid_rewind_3720c61b0679eb3e,
            mid_setPosition_540b2b23d51b1efd,
            mid_skipBytes_8b3d46852b435a94,
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
