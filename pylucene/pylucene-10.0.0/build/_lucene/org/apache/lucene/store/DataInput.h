#ifndef org_apache_lucene_store_DataInput_H
#define org_apache_lucene_store_DataInput_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
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

        class DataInput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_clone_da7ff94299d361c1,
            mid_readByte_1456044a01a5c9bf,
            mid_readBytes_116f7fcb5bff0f39,
            mid_readBytes_c802d561b0b0b5a6,
            mid_readFloats_a1c18faad4aff7a1,
            mid_readGroupVInt_e28d84b49af388d8,
            mid_readInt_bd89ce15dad49192,
            mid_readInts_57da58ead958e473,
            mid_readLong_0f176418e3e16541,
            mid_readLongs_2a4a0e3eb510f108,
            mid_readMapOfStrings_5004bdf19ed33453,
            mid_readSetOfStrings_79131c6bbcf08916,
            mid_readShort_ae7a5bcb127748fd,
            mid_readString_e7df854526d67fa3,
            mid_readVInt_bd89ce15dad49192,
            mid_readVLong_0f176418e3e16541,
            mid_readZInt_bd89ce15dad49192,
            mid_readZLong_0f176418e3e16541,
            mid_skipBytes_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DataInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DataInput(const DataInput& obj) : ::java::lang::Object(obj) {}

          DataInput();

          DataInput clone() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void readBytes(const JArray< jbyte > &, jint, jint, jboolean) const;
          void readFloats(const JArray< jfloat > &, jint, jint) const;
          void readGroupVInt(const JArray< jlong > &, jint) const;
          jint readInt() const;
          void readInts(const JArray< jint > &, jint, jint) const;
          jlong readLong() const;
          void readLongs(const JArray< jlong > &, jint, jint) const;
          ::java::util::Map readMapOfStrings() const;
          ::java::util::Set readSetOfStrings() const;
          jshort readShort() const;
          ::java::lang::String readString() const;
          jint readVInt() const;
          jlong readVLong() const;
          jint readZInt() const;
          jlong readZLong() const;
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
        extern PyType_Def PY_TYPE_DEF(DataInput);
        extern PyTypeObject *PY_TYPE(DataInput);

        class t_DataInput {
        public:
          PyObject_HEAD
          DataInput object;
          static PyObject *wrap_Object(const DataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
