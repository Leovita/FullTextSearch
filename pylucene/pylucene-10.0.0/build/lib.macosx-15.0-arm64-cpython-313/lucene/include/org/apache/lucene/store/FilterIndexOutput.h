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
            mid_close_3720c61b0679eb3e,
            mid_getChecksum_16939d9d0a9a9721,
            mid_getDelegate_a25fe80ba41eeda1,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_unwrap_962f743bfd463960,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_5fdd5da9426708e6,
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
