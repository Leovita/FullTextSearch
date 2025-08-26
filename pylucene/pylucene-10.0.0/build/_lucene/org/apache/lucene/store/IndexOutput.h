#ifndef org_apache_lucene_store_IndexOutput_H
#define org_apache_lucene_store_IndexOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class Closeable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IndexOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_alignFilePointer_49af390f180d8ee7,
            mid_alignOffset_02cc005e28960326,
            mid_close_e7bdbe105ce1bafb,
            mid_getChecksum_0f176418e3e16541,
            mid_getFilePointer_0f176418e3e16541,
            mid_getName_e7df854526d67fa3,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexOutput(const IndexOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          jlong alignFilePointer(jint) const;
          static jlong alignOffset(jlong, jint);
          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          ::java::lang::String getName() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexOutput);
        extern PyTypeObject *PY_TYPE(IndexOutput);

        class t_IndexOutput {
        public:
          PyObject_HEAD
          IndexOutput object;
          static PyObject *wrap_Object(const IndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
