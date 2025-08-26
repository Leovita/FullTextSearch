#ifndef org_apache_lucene_util_compress_LZ4_H
#define org_apache_lucene_util_compress_LZ4_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        namespace compress {
          class LZ4$HashTable;
        }
      }
    }
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
              mid_compress_342f5debe3d8a36e,
              mid_compressWithDictionary_780ee22e9305094a,
              mid_decompress_e34bfad8b1c27baf,
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
