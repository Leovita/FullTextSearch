#ifndef org_apache_lucene_store_RateLimitedIndexOutput_H
#define org_apache_lucene_store_RateLimitedIndexOutput_H

#include "org/apache/lucene/store/FilterIndexOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RateLimiter;
        class IndexOutput;
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
            mid_init$_51c8a3618cd46056,
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
