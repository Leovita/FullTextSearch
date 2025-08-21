#ifndef org_apache_lucene_util_OfflineSorter_H
#define org_apache_lucene_util_OfflineSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class OfflineSorter$BufferSize;
      }
      namespace store {
        class Directory;
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
    class String;
  }
  namespace util {
    namespace concurrent {
      class ExecutorService;
    }
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4eb5815dfd12ae28,
            mid_init$_0612cd21f264b6c8,
            mid_init$_40083a4d692c8e45,
            mid_getComparator_39238840448c1807,
            mid_getDirectory_0d3b52699e153434,
            mid_getTempFileNamePrefix_09a7afff1868fc5e,
            mid_sort_cb0eb1432185fc94,
            mid_getReader_dcc428a5d3312afa,
            mid_getWriter_4bf6b4b91751d3da,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter(const OfflineSorter& obj) : ::java::lang::Object(obj) {}

          static jlong ABSOLUTE_MIN_SORT_BUFFER_SIZE;
          static ::java::util::Comparator *DEFAULT_COMPARATOR;
          static jlong GB;
          static jint MAX_TEMPFILES;
          static jlong MB;
          static jlong MIN_BUFFER_SIZE_MB;

          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &, const ::org::apache::lucene::util::OfflineSorter$BufferSize &, jint, jint, const ::java::util::concurrent::ExecutorService &, jint);

          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::lang::String getTempFileNamePrefix() const;
          ::java::lang::String sort(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(OfflineSorter);
        extern PyTypeObject *PY_TYPE(OfflineSorter);

        class t_OfflineSorter {
        public:
          PyObject_HEAD
          OfflineSorter object;
          static PyObject *wrap_Object(const OfflineSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
