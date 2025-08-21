#ifndef org_apache_lucene_store_RandomAccessInput_H
#define org_apache_lucene_store_RandomAccessInput_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class RandomAccessInput : public ::java::lang::Object {
         public:
          enum {
            mid_length_16939d9d0a9a9721,
            mid_prefetch_c3501637982a28bc,
            mid_readByte_2a9a6e154cb14e58,
            mid_readBytes_ded37dfd7b9f37c4,
            mid_readInt_35c872f03f347c10,
            mid_readLong_91d66fa3ea476cea,
            mid_readShort_60f7d07ba3ea1177,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomAccessInput(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomAccessInput(const RandomAccessInput& obj) : ::java::lang::Object(obj) {}

          jlong length() const;
          void prefetch(jlong, jlong) const;
          jbyte readByte(jlong) const;
          void readBytes(jlong, const JArray< jbyte > &, jint, jint) const;
          jint readInt(jlong) const;
          jlong readLong(jlong) const;
          jshort readShort(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(RandomAccessInput);
        extern PyTypeObject *PY_TYPE(RandomAccessInput);

        class t_RandomAccessInput {
        public:
          PyObject_HEAD
          RandomAccessInput object;
          static PyObject *wrap_Object(const RandomAccessInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
