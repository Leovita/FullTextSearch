#ifndef org_apache_lucene_util_compress_LZ4$HighCompressionHashTable_H
#define org_apache_lucene_util_compress_LZ4$HighCompressionHashTable_H

#include "org/apache/lucene/util/compress/LZ4$HashTable.h"

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
        namespace compress {

          class LZ4$HighCompressionHashTable : public ::org::apache::lucene::util::compress::LZ4$HashTable {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4$HighCompressionHashTable(jobject obj) : ::org::apache::lucene::util::compress::LZ4$HashTable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4$HighCompressionHashTable(const LZ4$HighCompressionHashTable& obj) : ::org::apache::lucene::util::compress::LZ4$HashTable(obj) {}

            LZ4$HighCompressionHashTable();
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
          extern PyType_Def PY_TYPE_DEF(LZ4$HighCompressionHashTable);
          extern PyTypeObject *PY_TYPE(LZ4$HighCompressionHashTable);

          class t_LZ4$HighCompressionHashTable {
          public:
            PyObject_HEAD
            LZ4$HighCompressionHashTable object;
            static PyObject *wrap_Object(const LZ4$HighCompressionHashTable&);
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
