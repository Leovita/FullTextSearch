#ifndef org_apache_lucene_store_FSDirectory_H
#define org_apache_lucene_store_FSDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FSDirectory;
        class LockFactory;
        class IndexOutput;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FSDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_close_3720c61b0679eb3e,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_deletePendingFiles_3720c61b0679eb3e,
            mid_fileLength_e942a6f864c95ca0,
            mid_getDirectory_d21fdf719406f66d,
            mid_getPendingDeletions_4df174295554d7bd,
            mid_listAll_6da8f3ea65e22733,
            mid_listAll_f8e7ddc216795a19,
            mid_open_d6e686597c6908e7,
            mid_open_318a460e8f75f7da,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            mid_toString_09a7afff1868fc5e,
            mid_fsync_0d82408c6e55bc30,
            mid_ensureCanRead_0d82408c6e55bc30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FSDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FSDirectory(const FSDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          void deletePendingFiles() const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::nio::file::Path getDirectory() const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          static JArray< ::java::lang::String > listAll(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &);
          static FSDirectory open(const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
      namespace store {
        extern PyType_Def PY_TYPE_DEF(FSDirectory);
        extern PyTypeObject *PY_TYPE(FSDirectory);

        class t_FSDirectory {
        public:
          PyObject_HEAD
          FSDirectory object;
          static PyObject *wrap_Object(const FSDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
