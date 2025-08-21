#ifndef org_apache_lucene_store_NRTCachingDirectory_H
#define org_apache_lucene_store_NRTCachingDirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace store {
        class IndexOutput;
        class IndexInput;
        class IOContext;
        class Directory;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class NRTCachingDirectory : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_461ef76acabea809,
            mid_close_3720c61b0679eb3e,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_fileLength_e942a6f864c95ca0,
            mid_listAll_6da8f3ea65e22733,
            mid_listCachedFiles_6da8f3ea65e22733,
            mid_openInput_f1f6511a018f52d0,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_toString_09a7afff1868fc5e,
            mid_doCacheWrite_307c42c1df938f9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NRTCachingDirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NRTCachingDirectory(const NRTCachingDirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          NRTCachingDirectory(const ::org::apache::lucene::store::Directory &, jdouble, jdouble);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          JArray< ::java::lang::String > listAll() const;
          JArray< ::java::lang::String > listCachedFiles() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          jlong ramBytesUsed() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(NRTCachingDirectory);
        extern PyTypeObject *PY_TYPE(NRTCachingDirectory);

        class t_NRTCachingDirectory {
        public:
          PyObject_HEAD
          NRTCachingDirectory object;
          static PyObject *wrap_Object(const NRTCachingDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
