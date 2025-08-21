#ifndef org_apache_lucene_store_DataOutput_H
#define org_apache_lucene_store_DataOutput_H

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

        class DataOutput : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_copyBytes_3386f81b45981517,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_3f6ea74fc0096aaa,
            mid_writeBytes_5fdd5da9426708e6,
            mid_writeGroupVInts_70e26db984971679,
            mid_writeInt_540b2b23d51b1efd,
            mid_writeLong_8b3d46852b435a94,
            mid_writeMapOfStrings_79ba0f5a7d05e623,
            mid_writeSetOfStrings_1d5d4c6f11d1b2ab,
            mid_writeShort_13ddeb599c553531,
            mid_writeString_0d82408c6e55bc30,
            mid_writeVInt_540b2b23d51b1efd,
            mid_writeVLong_8b3d46852b435a94,
            mid_writeZInt_540b2b23d51b1efd,
            mid_writeZLong_8b3d46852b435a94,
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
