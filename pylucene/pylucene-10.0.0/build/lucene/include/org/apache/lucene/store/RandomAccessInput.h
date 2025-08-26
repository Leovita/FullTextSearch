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
            mid_length_0f176418e3e16541,
            mid_prefetch_9ebf8c93de5f0fe1,
            mid_readByte_cb04f80b25dc941d,
            mid_readBytes_da091ec7fbc87f01,
            mid_readInt_7af44747c1921bd4,
            mid_readLong_3dc1c6e3a5a0baf0,
            mid_readShort_d0da64abd2ba9d05,
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
