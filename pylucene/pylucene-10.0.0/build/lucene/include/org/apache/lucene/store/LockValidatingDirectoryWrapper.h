#ifndef org_apache_lucene_store_LockValidatingDirectoryWrapper_H
#define org_apache_lucene_store_LockValidatingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class Lock;
        class IndexOutput;
        class IOContext;
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
    class Collection;
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
            mid_init$_e5eb72afddfc42d7,
            mid_copyFrom_690af4af74b7d11b,
            mid_createOutput_5ee859a77f556d05,
            mid_deleteFile_ee46a189998009d6,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
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
