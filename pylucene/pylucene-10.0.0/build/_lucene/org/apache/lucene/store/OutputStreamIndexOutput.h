#ifndef org_apache_lucene_store_OutputStreamIndexOutput_H
#define org_apache_lucene_store_OutputStreamIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class OutputStream;
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
            mid_init$_718cdafe169fa965,
            mid_close_3720c61b0679eb3e,
            mid_getChecksum_16939d9d0a9a9721,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_5fdd5da9426708e6,
            mid_writeInt_540b2b23d51b1efd,
            mid_writeLong_8b3d46852b435a94,
            mid_writeShort_13ddeb599c553531,
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
