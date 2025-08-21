#ifndef org_apache_lucene_store_InputStreamDataInput_H
#define org_apache_lucene_store_InputStreamDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace io {
    class Closeable;
    class InputStream;
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

        class InputStreamDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_init$_37e23ef4361d4c28,
            mid_close_3720c61b0679eb3e,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_skipBytes_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InputStreamDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InputStreamDataInput(const InputStreamDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          InputStreamDataInput(const ::java::io::InputStream &);

          void close() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(InputStreamDataInput);
        extern PyTypeObject *PY_TYPE(InputStreamDataInput);

        class t_InputStreamDataInput {
        public:
          PyObject_HEAD
          InputStreamDataInput object;
          static PyObject *wrap_Object(const InputStreamDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
