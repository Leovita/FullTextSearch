#ifndef org_apache_lucene_store_LockValidatingDirectoryWrapper_H
#define org_apache_lucene_store_LockValidatingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace java {
  namespace util {
    class Collection;
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
        class Lock;
        class IOContext;
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class LockValidatingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_cae07b79643917d5,
            mid_copyFrom_23ba349b04fb6402,
            mid_createOutput_08efc12d1beeafa9,
            mid_deleteFile_0d82408c6e55bc30,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LockValidatingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LockValidatingDirectoryWrapper(const LockValidatingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          LockValidatingDirectoryWrapper(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Lock &);

          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(LockValidatingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(LockValidatingDirectoryWrapper);

        class t_LockValidatingDirectoryWrapper {
        public:
          PyObject_HEAD
          LockValidatingDirectoryWrapper object;
          static PyObject *wrap_Object(const LockValidatingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
