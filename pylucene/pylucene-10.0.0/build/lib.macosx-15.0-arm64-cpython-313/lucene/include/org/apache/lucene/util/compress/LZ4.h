#ifndef org_apache_lucene_util_compress_LZ4_H
#define org_apache_lucene_util_compress_LZ4_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace compress {
          class LZ4$HashTable;
        }
      }
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

          class LZ4 : public ::java::lang::Object {
           public:
            enum {
              mid_compress_e66685188274e6ff,
              mid_compressWithDictionary_037be7cc0e62ea96,
              mid_decompress_aaa347bab91d0e23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4(const LZ4& obj) : ::java::lang::Object(obj) {}

            static jint MAX_DISTANCE;

            static void compress(const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::compress::LZ4$HashTable &);
            static void compressWithDictionary(const JArray< jbyte > &, jint, jint, jint, const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::util::compress::LZ4$HashTable &);
            static jint decompress(const ::org::apache::lucene::store::DataInput &, jint, const JArray< jbyte > &, jint);
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
          extern PyType_Def PY_TYPE_DEF(LZ4);
          extern PyTypeObject *PY_TYPE(LZ4);

          class t_LZ4 {
          public:
            PyObject_HEAD
            LZ4 object;
            static PyObject *wrap_Object(const LZ4&);
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
