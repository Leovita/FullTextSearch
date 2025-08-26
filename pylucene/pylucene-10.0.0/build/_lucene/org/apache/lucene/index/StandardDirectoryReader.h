#ifndef org_apache_lucene_index_StandardDirectoryReader_H
#define org_apache_lucene_index_StandardDirectoryReader_H

#include "org/apache/lucene/index/DirectoryReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexCommit;
        class IndexReader$CacheHelper;
        class SegmentInfos;
        class LeafReader;
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
    class List;
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
            mid_getIndexCommit_3f5d748efdffe9e0,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getSegmentInfos_64f3216f596670dd,
            mid_getVersion_0f176418e3e16541,
            mid_isCurrent_9aa4f33e82ea333f,
            mid_open_6ddf269a934fbdae,
            mid_toString_e7df854526d67fa3,
            mid_doOpenIfChanged_a8b6bb613ad0bc66,
            mid_doOpenIfChanged_f3cbd71bf1d7f0c6,
            mid_doOpenIfChanged_9a09931027467e73,
            mid_doClose_e7bdbe105ce1bafb,
            mid_notifyReaderClosedListeners_e7bdbe105ce1bafb,
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
