#ifndef org_apache_lucene_util_BytesRefArray_H
#define org_apache_lucene_util_BytesRefArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRefArray$SortState;
        class BytesRefArray$IndexedBytesRefIterator;
        class Counter;
        class BytesRef;
        class BytesRefBuilder;
        class BytesRefIterator;
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
            mid_init$_e07e11bc9ee23d51,
            mid_append_59a6eaf88a8be404,
            mid_clear_e7bdbe105ce1bafb,
            mid_get_262afb8b4d4d20d7,
            mid_iterator_456b4b9059047e2a,
            mid_iterator_b5c9982f5a8df10f,
            mid_iterator_9f254622622fb4bd,
            mid_size_bd89ce15dad49192,
            mid_sort_24dbc4c76ea80d2b,
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
