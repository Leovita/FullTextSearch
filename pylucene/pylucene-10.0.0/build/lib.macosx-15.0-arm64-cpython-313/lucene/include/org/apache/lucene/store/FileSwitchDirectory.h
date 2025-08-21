#ifndef org_apache_lucene_store_FileSwitchDirectory_H
#define org_apache_lucene_store_FileSwitchDirectory_H

#include "org/apache/lucene/store/Directory.h"

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
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IndexInput;
        class Lock;
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FileSwitchDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_init$_b167d8a0af338603,
            mid_close_3720c61b0679eb3e,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_fileLength_e942a6f864c95ca0,
            mid_getExtension_cb0eb1432185fc94,
            mid_getPendingDeletions_4df174295554d7bd,
            mid_getPrimaryDir_0d3b52699e153434,
            mid_getSecondaryDir_0d3b52699e153434,
            mid_listAll_6da8f3ea65e22733,
            mid_obtainLock_cc83df755c1d5fef,
            mid_openInput_f1f6511a018f52d0,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileSwitchDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileSwitchDirectory(const FileSwitchDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          FileSwitchDirectory(const ::java::util::Set &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, jboolean);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          static ::java::lang::String getExtension(const ::java::lang::String &);
          ::java::util::Set getPendingDeletions() const;
          ::org::apache::lucene::store::Directory getPrimaryDir() const;
          ::org::apache::lucene::store::Directory getSecondaryDir() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
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
        extern PyType_Def PY_TYPE_DEF(FileSwitchDirectory);
        extern PyTypeObject *PY_TYPE(FileSwitchDirectory);

        class t_FileSwitchDirectory {
        public:
          PyObject_HEAD
          FileSwitchDirectory object;
          static PyObject *wrap_Object(const FileSwitchDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
