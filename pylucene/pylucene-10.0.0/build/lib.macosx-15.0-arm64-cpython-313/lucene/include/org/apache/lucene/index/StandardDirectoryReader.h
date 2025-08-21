#ifndef org_apache_lucene_index_StandardDirectoryReader_H
#define org_apache_lucene_index_StandardDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Comparator;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfos;
        class IndexCommit;
        class LeafReader;
        class IndexReader$CacheHelper;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class StandardDirectoryReader : public ::org::apache::lucene::index::DirectoryReader {
         public:
          enum {
            mid_getIndexCommit_271a09cc45c80524,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_getSegmentInfos_8795f542c9448b69,
            mid_getVersion_16939d9d0a9a9721,
            mid_isCurrent_947277eca0748c4e,
            mid_open_6efd95ea698bb0c8,
            mid_toString_09a7afff1868fc5e,
            mid_doClose_3720c61b0679eb3e,
            mid_notifyReaderClosedListeners_3720c61b0679eb3e,
            mid_doOpenIfChanged_774a8b4c09b28fb4,
            mid_doOpenIfChanged_f7fded1703ce6ca1,
            mid_doOpenIfChanged_398ab3433e6a540a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StandardDirectoryReader(jobject obj) : ::org::apache::lucene::index::DirectoryReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StandardDirectoryReader(const StandardDirectoryReader& obj) : ::org::apache::lucene::index::DirectoryReader(obj) {}

          ::org::apache::lucene::index::IndexCommit getIndexCommit() const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SegmentInfos getSegmentInfos() const;
          jlong getVersion() const;
          jboolean isCurrent() const;
          static ::org::apache::lucene::index::DirectoryReader open(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfos &, const ::java::util::List &, const ::java::util::Comparator &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(StandardDirectoryReader);
        extern PyTypeObject *PY_TYPE(StandardDirectoryReader);

        class t_StandardDirectoryReader {
        public:
          PyObject_HEAD
          StandardDirectoryReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_StandardDirectoryReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const StandardDirectoryReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const StandardDirectoryReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
