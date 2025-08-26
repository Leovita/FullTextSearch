#ifndef org_apache_lucene_util_OfflineSorter_H
#define org_apache_lucene_util_OfflineSorter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        class BytesRef;
        class OfflineSorter$BufferSize;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
    namespace concurrent {
      class ExecutorService;
    }
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
            mid_init$_3c1bd744f99d5223,
            mid_init$_3a33398036b3b715,
            mid_init$_f28af323a2710e79,
            mid_getComparator_5cc89c689cd941fe,
            mid_getDirectory_0b8988a9a36f43ec,
            mid_getTempFileNamePrefix_e7df854526d67fa3,
            mid_sort_fef9c036acf290a9,
            mid_getWriter_782d678aa6650949,
            mid_getReader_50a894a61a85c38b,
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
