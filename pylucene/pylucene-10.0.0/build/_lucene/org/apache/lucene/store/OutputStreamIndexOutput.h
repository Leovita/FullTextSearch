#ifndef org_apache_lucene_store_OutputStreamIndexOutput_H
#define org_apache_lucene_store_OutputStreamIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace io {
    class IOException;
    class OutputStream;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class OutputStreamIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_b5fe19acfbcafb1e,
            mid_close_e7bdbe105ce1bafb,
            mid_getChecksum_0f176418e3e16541,
            mid_getFilePointer_0f176418e3e16541,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_116f7fcb5bff0f39,
            mid_writeInt_8226bd0b0fc13dba,
            mid_writeLong_1d3149fac12f2af3,
            mid_writeShort_19904c0bd37f0d7f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OutputStreamIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OutputStreamIndexOutput(const OutputStreamIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          OutputStreamIndexOutput(const ::java::lang::String &, const ::java::lang::String &, const ::java::io::OutputStream &, jint);

          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
          void writeInt(jint) const;
          void writeLong(jlong) const;
          void writeShort(jshort) const;
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
        extern PyType_Def PY_TYPE_DEF(OutputStreamIndexOutput);
        extern PyTypeObject *PY_TYPE(OutputStreamIndexOutput);

        class t_OutputStreamIndexOutput {
        public:
          PyObject_HEAD
          OutputStreamIndexOutput object;
          static PyObject *wrap_Object(const OutputStreamIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
