#ifndef org_apache_pylucene_store_PythonDirectory_H
#define org_apache_pylucene_store_PythonDirectory_H

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
    namespace pylucene {
      namespace store {

        class PythonDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_fileLength_e942a6f864c95ca0,
            mid_getPendingDeletions_4df174295554d7bd,
            mid_listAll_6da8f3ea65e22733,
            mid_obtainLock_cc83df755c1d5fef,
            mid_openInput_f1f6511a018f52d0,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            mid_rename_3d104da0b5c75e64,
            mid_sync_0d82408c6e55bc30,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonDirectory(const PythonDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          PythonDirectory();

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::lang::String &) const;
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
    namespace pylucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(PythonDirectory);
        extern PyTypeObject *PY_TYPE(PythonDirectory);

        class t_PythonDirectory {
        public:
          PyObject_HEAD
          PythonDirectory object;
          static PyObject *wrap_Object(const PythonDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
