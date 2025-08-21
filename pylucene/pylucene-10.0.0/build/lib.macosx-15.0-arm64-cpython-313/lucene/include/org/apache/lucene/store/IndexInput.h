#ifndef org_apache_lucene_store_IndexInput_H
#define org_apache_lucene_store_IndexInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexInput;
        class RandomAccessInput;
        class ReadAdvice;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IndexInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_69ff96f993716366,
            mid_close_3720c61b0679eb3e,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_length_16939d9d0a9a9721,
            mid_prefetch_c3501637982a28bc,
            mid_randomAccessSlice_2e3247f0548f785b,
            mid_seek_8b3d46852b435a94,
            mid_skipBytes_8b3d46852b435a94,
            mid_slice_4c0286d0c02e55b3,
            mid_slice_8a3c35d9e45e885a,
            mid_toString_09a7afff1868fc5e,
            mid_getFullSliceDescription_cb0eb1432185fc94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexInput(const IndexInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          IndexInput clone() const;
          void close() const;
          jlong getFilePointer() const;
          jlong length() const;
          void prefetch(jlong, jlong) const;
          ::org::apache::lucene::store::RandomAccessInput randomAccessSlice(jlong, jlong) const;
          void seek(jlong) const;
          void skipBytes(jlong) const;
          IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          IndexInput slice(const ::java::lang::String &, jlong, jlong, const ::org::apache::lucene::store::ReadAdvice &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexInput);
        extern PyTypeObject *PY_TYPE(IndexInput);

        class t_IndexInput {
        public:
          PyObject_HEAD
          IndexInput object;
          static PyObject *wrap_Object(const IndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
