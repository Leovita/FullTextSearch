#ifndef org_apache_lucene_store_BufferedChecksumIndexInput_H
#define org_apache_lucene_store_BufferedChecksumIndexInput_H

#include "org/apache/lucene/store/ChecksumIndexInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class BufferedChecksumIndexInput : public ::org::apache::lucene::store::ChecksumIndexInput {
         public:
          enum {
            mid_init$_a302e4ca19bb6bc3,
            mid_clone_1107977def75ee66,
            mid_close_e7bdbe105ce1bafb,
            mid_getChecksum_0f176418e3e16541,
            mid_getFilePointer_0f176418e3e16541,
            mid_length_0f176418e3e16541,
            mid_readByte_1456044a01a5c9bf,
            mid_readBytes_116f7fcb5bff0f39,
            mid_slice_fa5539b2c5f0192d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BufferedChecksumIndexInput(jobject obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BufferedChecksumIndexInput(const BufferedChecksumIndexInput& obj) : ::org::apache::lucene::store::ChecksumIndexInput(obj) {}

          BufferedChecksumIndexInput(const ::org::apache::lucene::store::IndexInput &);

          ::org::apache::lucene::store::IndexInput clone() const;
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(BufferedChecksumIndexInput);
        extern PyTypeObject *PY_TYPE(BufferedChecksumIndexInput);

        class t_BufferedChecksumIndexInput {
        public:
          PyObject_HEAD
          BufferedChecksumIndexInput object;
          static PyObject *wrap_Object(const BufferedChecksumIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
