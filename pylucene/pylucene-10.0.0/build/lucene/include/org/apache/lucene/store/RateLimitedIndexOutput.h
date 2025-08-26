#ifndef org_apache_lucene_store_RateLimitedIndexOutput_H
#define org_apache_lucene_store_RateLimitedIndexOutput_H

#include "org/apache/lucene/store/FilterIndexOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class RateLimiter;
      }
    }
  }
}
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

        class RateLimitedIndexOutput : public ::org::apache::lucene::store::FilterIndexOutput {
         public:
          enum {
            mid_init$_4e0ac7ec8d26e757,
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

          explicit RateLimitedIndexOutput(jobject obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RateLimitedIndexOutput(const RateLimitedIndexOutput& obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {}

          RateLimitedIndexOutput(const ::org::apache::lucene::store::RateLimiter &, const ::org::apache::lucene::store::IndexOutput &);

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
        extern PyType_Def PY_TYPE_DEF(RateLimitedIndexOutput);
        extern PyTypeObject *PY_TYPE(RateLimitedIndexOutput);

        class t_RateLimitedIndexOutput {
        public:
          PyObject_HEAD
          RateLimitedIndexOutput object;
          static PyObject *wrap_Object(const RateLimitedIndexOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
