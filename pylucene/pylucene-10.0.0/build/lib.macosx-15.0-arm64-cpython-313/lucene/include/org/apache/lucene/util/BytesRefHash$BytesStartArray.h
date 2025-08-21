#ifndef org_apache_lucene_util_BytesRefHash$BytesStartArray_H
#define org_apache_lucene_util_BytesRefHash$BytesStartArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Counter;
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

        class BytesRefHash$BytesStartArray : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_bytesUsed_993628ed46aa1aa4,
            mid_clear_623cd4a044ba647a,
            mid_grow_623cd4a044ba647a,
            mid_init_623cd4a044ba647a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash$BytesStartArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash$BytesStartArray(const BytesRefHash$BytesStartArray& obj) : ::java::lang::Object(obj) {}

          BytesRefHash$BytesStartArray();

          ::org::apache::lucene::util::Counter bytesUsed() const;
          JArray< jint > clear() const;
          JArray< jint > grow() const;
          JArray< jint > init() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefHash$BytesStartArray);
        extern PyTypeObject *PY_TYPE(BytesRefHash$BytesStartArray);

        class t_BytesRefHash$BytesStartArray {
        public:
          PyObject_HEAD
          BytesRefHash$BytesStartArray object;
          static PyObject *wrap_Object(const BytesRefHash$BytesStartArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
