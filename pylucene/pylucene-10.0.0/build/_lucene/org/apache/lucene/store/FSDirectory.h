#ifndef org_apache_lucene_store_FSDirectory_H
#define org_apache_lucene_store_FSDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

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
    class Set;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class FSDirectory;
        class IOContext;
        class LockFactory;
      }
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
            mid_close_e7bdbe105ce1bafb,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_deletePendingFiles_e7bdbe105ce1bafb,
            mid_fileLength_490f1686ea1cfda6,
            mid_getDirectory_da490036461fb4f2,
            mid_getPendingDeletions_79131c6bbcf08916,
            mid_listAll_970db9a2a49d840f,
            mid_listAll_555962c76f87104f,
            mid_open_653fa1dab7b0a4fa,
            mid_open_4e200fcd00e2cd6d,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
            mid_toString_e7df854526d67fa3,
            mid_fsync_ee46a189998009d6,
            mid_ensureCanRead_ee46a189998009d6,
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
