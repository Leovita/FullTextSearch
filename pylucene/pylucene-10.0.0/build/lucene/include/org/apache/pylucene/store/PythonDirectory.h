#ifndef org_apache_pylucene_store_PythonDirectory_H
#define org_apache_pylucene_store_PythonDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Lock;
        class IndexOutput;
        class IndexInput;
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
    class Set;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_fileLength_490f1686ea1cfda6,
            mid_getPendingDeletions_79131c6bbcf08916,
            mid_listAll_970db9a2a49d840f,
            mid_obtainLock_3ede4234fbb2098d,
            mid_openInput_fc1a53ef559ae62a,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
            mid_rename_0dd012a11c3f389b,
            mid_sync_ee46a189998009d6,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
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
