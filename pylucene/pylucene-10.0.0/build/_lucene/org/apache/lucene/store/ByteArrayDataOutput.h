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
            mid_init$_3720c61b0679eb3e,
            mid_init$_3ce1e597fb62ac79,
            mid_init$_5fdd5da9426708e6,
            mid_getPosition_20fbf7565993c3d7,
            mid_reset_3ce1e597fb62ac79,
            mid_reset_5fdd5da9426708e6,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_5fdd5da9426708e6,
            mid_writeInt_540b2b23d51b1efd,
            mid_writeLong_8b3d46852b435a94,
            mid_writeShort_13ddeb599c553531,
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
