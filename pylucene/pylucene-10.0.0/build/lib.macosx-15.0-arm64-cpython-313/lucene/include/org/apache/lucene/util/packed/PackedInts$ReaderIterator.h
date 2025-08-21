#ifndef org_apache_lucene_util_packed_PackedInts$ReaderIterator_H
#define org_apache_lucene_util_packed_PackedInts$ReaderIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
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
        namespace packed {

          class PackedInts$ReaderIterator : public ::java::lang::Object {
           public:
            enum {
              mid_getBitsPerValue_20fbf7565993c3d7,
              mid_next_16939d9d0a9a9721,
              mid_next_0eba6fe8a30b4b82,
              mid_ord_20fbf7565993c3d7,
              mid_size_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$ReaderIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$ReaderIterator(const PackedInts$ReaderIterator& obj) : ::java::lang::Object(obj) {}

            jint getBitsPerValue() const;
            jlong next() const;
            ::org::apache::lucene::util::LongsRef next(jint) const;
            jint ord() const;
            jint size() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$ReaderIterator);
          extern PyTypeObject *PY_TYPE(PackedInts$ReaderIterator);

          class t_PackedInts$ReaderIterator {
          public:
            PyObject_HEAD
            PackedInts$ReaderIterator object;
            static PyObject *wrap_Object(const PackedInts$ReaderIterator&);
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
