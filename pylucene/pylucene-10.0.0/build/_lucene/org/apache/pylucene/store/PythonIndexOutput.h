#ifndef org_apache_pylucene_store_PythonIndexOutput_H
#define org_apache_pylucene_store_PythonIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {

        class PythonIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_init$_0dd012a11c3f389b,
            mid_close_e7bdbe105ce1bafb,
            mid_getChecksum_0f176418e3e16541,
            mid_getFilePointer_0f176418e3e16541,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_a4d4f283481182e8,
            mid_writeBytes_116f7fcb5bff0f39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonIndexOutput(const PythonIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          PythonIndexOutput(const ::java::lang::String &, const ::java::lang::String &);

          void close() const;
          jlong getChecksum() const;
          jlong getFilePointer() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonIndexOutput);
        extern PyTypeObject *PY_TYPE(PythonIndexOutput);

        class t_PythonIndexOutput {
        public:
          PyObject_HEAD
          PythonIndexOutput object;
          static PyObject *wrap_Object(const PythonIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
