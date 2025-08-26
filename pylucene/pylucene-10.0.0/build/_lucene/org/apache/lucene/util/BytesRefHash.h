#ifndef org_apache_lucene_util_BytesRefHash_H
#define org_apache_lucene_util_BytesRefHash_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ByteBlockPool;
        class Accountable;
        class BytesRef;
        class BytesRefHash$BytesStartArray;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BytesRefHash : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_792779e3e06e9579,
            mid_init$_72f3ef8bc256aec7,
            mid_add_59a6eaf88a8be404,
            mid_addByPoolOffset_a3904e10f5bb9437,
            mid_byteStart_a3904e10f5bb9437,
            mid_clear_e7bdbe105ce1bafb,
            mid_clear_f5dd97eebf6a215a,
            mid_close_e7bdbe105ce1bafb,
            mid_compact_4b72a28a860ae838,
            mid_find_59a6eaf88a8be404,
            mid_get_10f37a8a5cdac708,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_reinit_e7bdbe105ce1bafb,
            mid_size_bd89ce15dad49192,
            mid_sort_4b72a28a860ae838,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BytesRefHash(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BytesRefHash(const BytesRefHash& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_CAPACITY;

          BytesRefHash();
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &);
          BytesRefHash(const ::org::apache::lucene::util::ByteBlockPool &, jint, const ::org::apache::lucene::util::BytesRefHash$BytesStartArray &);

          jint add(const ::org::apache::lucene::util::BytesRef &) const;
          jint addByPoolOffset(jint) const;
          jint byteStart(jint) const;
          void clear() const;
          void clear(jboolean) const;
          void close() const;
          JArray< jint > compact() const;
          jint find(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef get(jint, const ::org::apache::lucene::util::BytesRef &) const;
          jlong ramBytesUsed() const;
          void reinit() const;
          jint size() const;
          JArray< jint > sort() const;
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
        extern PyType_Def PY_TYPE_DEF(BytesRefHash);
        extern PyTypeObject *PY_TYPE(BytesRefHash);

        class t_BytesRefHash {
        public:
          PyObject_HEAD
          BytesRefHash object;
          static PyObject *wrap_Object(const BytesRefHash&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
