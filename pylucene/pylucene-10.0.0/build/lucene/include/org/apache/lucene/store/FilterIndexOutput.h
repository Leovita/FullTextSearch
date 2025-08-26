#ifndef org_apache_lucene_store_FilterIndexOutput_H
#define org_apache_lucene_store_FilterIndexOutput_H

#include "org/apache/lucene/store/IndexOutput.h"

namespace java {
  namespace io {
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

        class FilterIndexOutput : public ::org::apache::lucene::store::IndexOutput {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_getChecksum_0f176418e3e16541,
            mid_getDelegate_f8de4593eca76f8a,
            mid_getFilePointer_0f176418e3e16541,
            mid_unwrap_92a665f1a6cd882f,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_116f7fcb5bff0f39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIndexOutput(jobject obj) : ::org::apache::lucene::store::IndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIndexOutput(const FilterIndexOutput& obj) : ::org::apache::lucene::store::IndexOutput(obj) {}

          void close() const;
          jlong getChecksum() const;
          ::org::apache::lucene::store::IndexOutput getDelegate() const;
          jlong getFilePointer() const;
          static ::org::apache::lucene::store::IndexOutput unwrap(const ::org::apache::lucene::store::IndexOutput &);
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FilterIndexOutput);
        extern PyTypeObject *PY_TYPE(FilterIndexOutput);

        class t_FilterIndexOutput {
        public:
          PyObject_HEAD
          FilterIndexOutput object;
          static PyObject *wrap_Object(const FilterIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
