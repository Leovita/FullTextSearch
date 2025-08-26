#ifndef org_apache_lucene_store_IndexInput_H
#define org_apache_lucene_store_IndexInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
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
        class RandomAccessInput;
        class IndexInput;
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
            mid_clone_1107977def75ee66,
            mid_close_e7bdbe105ce1bafb,
            mid_getFilePointer_0f176418e3e16541,
            mid_length_0f176418e3e16541,
            mid_prefetch_9ebf8c93de5f0fe1,
            mid_randomAccessSlice_02040cfc534fdd16,
            mid_seek_1d3149fac12f2af3,
            mid_skipBytes_1d3149fac12f2af3,
            mid_slice_fa5539b2c5f0192d,
            mid_slice_10680211b6dde0c2,
            mid_toString_e7df854526d67fa3,
            mid_getFullSliceDescription_fef9c036acf290a9,
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
