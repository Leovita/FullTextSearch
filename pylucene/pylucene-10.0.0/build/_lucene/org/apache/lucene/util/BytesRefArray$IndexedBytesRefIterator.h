#ifndef org_apache_lucene_util_BytesRefArray$IndexedBytesRefIterator_H
#define org_apache_lucene_util_BytesRefArray$IndexedBytesRefIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

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

        class BytesRefArray$IndexedBytesRefIterator : public ::org::apache::lucene::util::BytesRefIterator {
         public:
          enum {
            mid_ord_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray$IndexedBytesRefIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray$IndexedBytesRefIterator(const BytesRefArray$IndexedBytesRefIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

          jint ord() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefArray$IndexedBytesRefIterator);
        extern PyTypeObject *PY_TYPE(BytesRefArray$IndexedBytesRefIterator);

        class t_BytesRefArray$IndexedBytesRefIterator {
        public:
          PyObject_HEAD
          BytesRefArray$IndexedBytesRefIterator object;
          static PyObject *wrap_Object(const BytesRefArray$IndexedBytesRefIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
