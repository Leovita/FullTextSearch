#ifndef org_apache_lucene_util_BytesRefHash_H
#define org_apache_lucene_util_BytesRefHash_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class BytesRefHash$BytesStartArray;
        class ByteBlockPool;
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

        class BytesRefHash : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_4fc7f90c0bbc4c49,
            mid_init$_2e713ca508c1a291,
            mid_add_5cda243a0bd46c4d,
            mid_addByPoolOffset_3c9bba330f083871,
            mid_byteStart_3c9bba330f083871,
            mid_clear_3720c61b0679eb3e,
            mid_clear_b110fc3a58c081ab,
            mid_close_3720c61b0679eb3e,
            mid_compact_623cd4a044ba647a,
            mid_find_5cda243a0bd46c4d,
            mid_get_59689a013e9bac42,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_reinit_3720c61b0679eb3e,
            mid_size_20fbf7565993c3d7,
            mid_sort_623cd4a044ba647a,
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
