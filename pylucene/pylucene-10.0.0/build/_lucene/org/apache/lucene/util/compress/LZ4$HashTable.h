#ifndef org_apache_lucene_util_compress_LZ4$HashTable_H
#define org_apache_lucene_util_compress_LZ4$HashTable_H

#include "java/lang/Object.h"

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

          class LZ4$HashTable : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LZ4$HashTable(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LZ4$HashTable(const LZ4$HashTable& obj) : ::java::lang::Object(obj) {}
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
          extern PyType_Def PY_TYPE_DEF(LZ4$HashTable);
          extern PyTypeObject *PY_TYPE(LZ4$HashTable);

          class t_LZ4$HashTable {
          public:
            PyObject_HEAD
            LZ4$HashTable object;
            static PyObject *wrap_Object(const LZ4$HashTable&);
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
