#ifndef org_apache_lucene_store_BufferedChecksumIndexInput_H
#define org_apache_lucene_store_BufferedChecksumIndexInput_H

#include "org/apache/lucene/store/ChecksumIndexInput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_init$_5d631c4d88317d46,
            mid_clone_69ff96f993716366,
            mid_close_3720c61b0679eb3e,
            mid_getChecksum_16939d9d0a9a9721,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_length_16939d9d0a9a9721,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_slice_4c0286d0c02e55b3,
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
