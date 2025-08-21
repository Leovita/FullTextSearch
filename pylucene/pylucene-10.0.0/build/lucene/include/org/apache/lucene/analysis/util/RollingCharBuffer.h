#ifndef org_apache_lucene_analysis_util_RollingCharBuffer_H
#define org_apache_lucene_analysis_util_RollingCharBuffer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Reader;
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
      namespace analysis {
        namespace util {

          class RollingCharBuffer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_freeBefore_540b2b23d51b1efd,
              mid_get_3c9bba330f083871,
              mid_get_409504209a1bfef2,
              mid_reset_fa55492f0f5d7f31,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RollingCharBuffer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RollingCharBuffer(const RollingCharBuffer& obj) : ::java::lang::Object(obj) {}

            RollingCharBuffer();

            void freeBefore(jint) const;
            jint get(jint) const;
            JArray< jchar > get(jint, jint) const;
            void reset(const ::java::io::Reader &) const;
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
      namespace analysis {
        namespace util {
          extern PyType_Def PY_TYPE_DEF(RollingCharBuffer);
          extern PyTypeObject *PY_TYPE(RollingCharBuffer);

          class t_RollingCharBuffer {
          public:
            PyObject_HEAD
            RollingCharBuffer object;
            static PyObject *wrap_Object(const RollingCharBuffer&);
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
