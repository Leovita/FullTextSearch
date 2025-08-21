#ifndef org_apache_lucene_util_packed_BlockPackedReaderIterator_H
#define org_apache_lucene_util_packed_BlockPackedReaderIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
      }
      namespace store {
        class DataInput;
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

          class BlockPackedReaderIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6f586b7d20e4a3bb,
              mid_next_16939d9d0a9a9721,
              mid_next_0eba6fe8a30b4b82,
              mid_ord_16939d9d0a9a9721,
              mid_reset_3386f81b45981517,
              mid_skip_8b3d46852b435a94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockPackedReaderIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockPackedReaderIterator(const BlockPackedReaderIterator& obj) : ::java::lang::Object(obj) {}

            BlockPackedReaderIterator(const ::org::apache::lucene::store::DataInput &, jint, jint, jlong);

            jlong next() const;
            ::org::apache::lucene::util::LongsRef next(jint) const;
            jlong ord() const;
            void reset(const ::org::apache::lucene::store::DataInput &, jlong) const;
            void skip(jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(BlockPackedReaderIterator);
          extern PyTypeObject *PY_TYPE(BlockPackedReaderIterator);

          class t_BlockPackedReaderIterator {
          public:
            PyObject_HEAD
            BlockPackedReaderIterator object;
            static PyObject *wrap_Object(const BlockPackedReaderIterator&);
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
