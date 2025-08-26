#ifndef org_apache_lucene_util_FrequencyTrackingRingBuffer_H
#define org_apache_lucene_util_FrequencyTrackingRingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FrequencyTrackingRingBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_645c25455f5b9b1c,
            mid_add_8226bd0b0fc13dba,
            mid_frequency_a3904e10f5bb9437,
            mid_ramBytesUsed_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FrequencyTrackingRingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FrequencyTrackingRingBuffer(const FrequencyTrackingRingBuffer& obj) : ::java::lang::Object(obj) {}

          FrequencyTrackingRingBuffer(jint, jint);

          void add(jint) const;
          jint frequency(jint) const;
          jlong ramBytesUsed() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(FrequencyTrackingRingBuffer);
        extern PyTypeObject *PY_TYPE(FrequencyTrackingRingBuffer);

        class t_FrequencyTrackingRingBuffer {
        public:
          PyObject_HEAD
          FrequencyTrackingRingBuffer object;
          static PyObject *wrap_Object(const FrequencyTrackingRingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
