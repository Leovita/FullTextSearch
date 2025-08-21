#ifndef org_apache_lucene_util_compress_LZ4$FastCompressionHashTable_H
#define org_apache_lucene_util_compress_LZ4$FastCompressionHashTable_H

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

          class LZ4$FastCompressionHashTable : public ::org::apache::lucene::util::compress::LZ4$HashTable {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_previous_3c9bba330f083871,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4$FastCompressionHashTable(jobject obj) : ::org::apache::lucene::util::compress::LZ4$HashTable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4$FastCompressionHashTable(const LZ4$FastCompressionHashTable& obj) : ::org::apache::lucene::util::compress::LZ4$HashTable(obj) {}

            LZ4$FastCompressionHashTable();

            jint previous(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(LZ4$FastCompressionHashTable);
          extern PyTypeObject *PY_TYPE(LZ4$FastCompressionHashTable);

          class t_LZ4$FastCompressionHashTable {
          public:
            PyObject_HEAD
            LZ4$FastCompressionHashTable object;
            static PyObject *wrap_Object(const LZ4$FastCompressionHashTable&);
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
