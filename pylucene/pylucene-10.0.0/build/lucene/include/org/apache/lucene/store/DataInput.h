#ifndef org_apache_lucene_store_DataInput_H
#define org_apache_lucene_store_DataInput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
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
    class Cloneable;
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

        class DataInput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_clone_a9259814c0393b10,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_readBytes_8ca6ba058aa9701b,
            mid_readFloats_e895d5e6b13d4d50,
            mid_readGroupVInt_70e26db984971679,
            mid_readInt_20fbf7565993c3d7,
            mid_readInts_ad090cb6070ea6a2,
            mid_readLong_16939d9d0a9a9721,
            mid_readLongs_f3cd87eda3d12dc6,
            mid_readMapOfStrings_f125f26c07a7bec8,
            mid_readSetOfStrings_4df174295554d7bd,
            mid_readShort_21ad82099ac5d56c,
            mid_readString_09a7afff1868fc5e,
            mid_readVInt_20fbf7565993c3d7,
            mid_readVLong_16939d9d0a9a9721,
            mid_readZInt_20fbf7565993c3d7,
            mid_readZLong_16939d9d0a9a9721,
            mid_skipBytes_8b3d46852b435a94,
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
