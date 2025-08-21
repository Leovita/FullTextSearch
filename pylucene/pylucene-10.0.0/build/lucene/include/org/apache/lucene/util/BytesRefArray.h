#ifndef org_apache_lucene_util_BytesRefArray_H
#define org_apache_lucene_util_BytesRefArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefArray$SortState;
        class Counter;
        class BytesRefIterator;
        class BytesRefBuilder;
        class BytesRefArray$IndexedBytesRefIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefArray : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ac76f83e63dd1b05,
            mid_append_5cda243a0bd46c4d,
            mid_clear_3720c61b0679eb3e,
            mid_get_bfeed0eb6a124327,
            mid_iterator_bf0613f85af6401c,
            mid_iterator_a7787130b08eb5c4,
            mid_iterator_46c164f9399d3ab7,
            mid_size_20fbf7565993c3d7,
            mid_sort_95266773be9bee7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefArray(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefArray(const BytesRefArray& obj) : ::java::lang::Object(obj) {}

          BytesRefArray(const ::org::apache::lucene::util::Counter &);

          jint append(const ::org::apache::lucene::util::BytesRef &) const;
          void clear() const;
          ::org::apache::lucene::util::BytesRef get(const ::org::apache::lucene::util::BytesRefBuilder &, jint) const;
          ::org::apache::lucene::util::BytesRefIterator iterator() const;
          ::org::apache::lucene::util::BytesRefArray$IndexedBytesRefIterator iterator(const ::org::apache::lucene::util::BytesRefArray$SortState &) const;
          ::org::apache::lucene::util::BytesRefIterator iterator(const ::java::util::Comparator &) const;
          jint size() const;
          ::org::apache::lucene::util::BytesRefArray$SortState sort(const ::java::util::Comparator &, jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefArray);
        extern PyTypeObject *PY_TYPE(BytesRefArray);

        class t_BytesRefArray {
        public:
          PyObject_HEAD
          BytesRefArray object;
          static PyObject *wrap_Object(const BytesRefArray&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
