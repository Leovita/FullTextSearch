#ifndef org_apache_lucene_misc_store_ByteTrackingIndexOutput_H
#define org_apache_lucene_misc_store_ByteTrackingIndexOutput_H

#include "org/apache/lucene/store/FilterIndexOutput.h"

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
      namespace misc {
        namespace store {

          class ByteTrackingIndexOutput : public ::org::apache::lucene::store::FilterIndexOutput {
           public:
            enum {
              mid_close_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteTrackingIndexOutput(jobject obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteTrackingIndexOutput(const ByteTrackingIndexOutput& obj) : ::org::apache::lucene::store::FilterIndexOutput(obj) {}

            void close() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace store {
          extern PyType_Def PY_TYPE_DEF(ByteTrackingIndexOutput);
          extern PyTypeObject *PY_TYPE(ByteTrackingIndexOutput);

          class t_ByteTrackingIndexOutput {
          public:
            PyObject_HEAD
            ByteTrackingIndexOutput object;
            static PyObject *wrap_Object(const ByteTrackingIndexOutput&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
