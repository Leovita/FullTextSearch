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
            mid_init$_3d104da0b5c75e64,
            mid_close_3720c61b0679eb3e,
            mid_getChecksum_16939d9d0a9a9721,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_3ce1e597fb62ac79,
            mid_writeBytes_5fdd5da9426708e6,
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
