#ifndef org_apache_lucene_store_Directory_H
#define org_apache_lucene_store_Directory_H

#include "java/lang/Object.h"

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
    class Closeable;
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
        class Directory;
        class ChecksumIndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class Directory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_copyFrom_23ba349b04fb6402,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_fileLength_e942a6f864c95ca0,
            mid_getPendingDeletions_4df174295554d7bd,
            mid_listAll_6da8f3ea65e22733,
            mid_obtainLock_cc83df755c1d5fef,
            mid_openChecksumInput_8dfb877f49038497,
            mid_openInput_f1f6511a018f52d0,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            mid_toString_09a7afff1868fc5e,
            mid_getTempFileName_c883a2eae0fc5f6e,
            mid_ensureOpen_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Directory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Directory(const Directory& obj) : ::java::lang::Object(obj) {}

          Directory();

          void close() const;
          void copyFrom(const Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::ChecksumIndexInput openChecksumInput(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(Directory);
        extern PyTypeObject *PY_TYPE(Directory);

        class t_Directory {
        public:
          PyObject_HEAD
          Directory object;
          static PyObject *wrap_Object(const Directory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
