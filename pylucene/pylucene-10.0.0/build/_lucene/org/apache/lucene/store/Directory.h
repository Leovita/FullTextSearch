#ifndef org_apache_lucene_store_Directory_H
#define org_apache_lucene_store_Directory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class Lock;
        class IndexOutput;
        class IndexInput;
        class ChecksumIndexInput;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class Set;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_copyFrom_690af4af74b7d11b,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_fileLength_490f1686ea1cfda6,
            mid_getPendingDeletions_79131c6bbcf08916,
            mid_listAll_970db9a2a49d840f,
            mid_obtainLock_3ede4234fbb2098d,
            mid_openChecksumInput_13cc9a1f37ae366e,
            mid_openInput_fc1a53ef559ae62a,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
            mid_toString_e7df854526d67fa3,
            mid_getTempFileName_0bbe29ee43d0d63a,
            mid_ensureOpen_e7bdbe105ce1bafb,
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
