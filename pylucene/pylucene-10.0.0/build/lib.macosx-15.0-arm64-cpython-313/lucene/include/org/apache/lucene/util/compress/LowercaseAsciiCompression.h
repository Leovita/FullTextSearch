#ifndef org_apache_lucene_util_compress_LowercaseAsciiCompression_H
#define org_apache_lucene_util_compress_LowercaseAsciiCompression_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
        class DataInput;
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
              mid_compress_b8965a2d298e9e1f,
              mid_decompress_cb57165d1ef4da9e,
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
