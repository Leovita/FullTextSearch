#ifndef org_apache_lucene_util_compress_LowercaseAsciiCompression_H
#define org_apache_lucene_util_compress_LowercaseAsciiCompression_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
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
      namespace util {
        namespace compress {

          class LowercaseAsciiCompression : public ::java::lang::Object {
           public:
            enum {
              mid_compress_03eb1f2e14c6af90,
              mid_decompress_317fd8c7796896e2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LowercaseAsciiCompression(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LowercaseAsciiCompression(const LowercaseAsciiCompression& obj) : ::java::lang::Object(obj) {}

            static jboolean compress(const JArray< jbyte > &, jint, const JArray< jbyte > &, const ::org::apache::lucene::store::DataOutput &);
            static void decompress(const ::org::apache::lucene::store::DataInput &, const JArray< jbyte > &, jint);
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
      namespace util {
        namespace compress {
          extern PyType_Def PY_TYPE_DEF(LowercaseAsciiCompression);
          extern PyTypeObject *PY_TYPE(LowercaseAsciiCompression);

          class t_LowercaseAsciiCompression {
          public:
            PyObject_HEAD
            LowercaseAsciiCompression object;
            static PyObject *wrap_Object(const LowercaseAsciiCompression&);
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
