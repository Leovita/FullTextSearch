#ifndef org_apache_lucene_store_NRTCachingDirectory_H
#define org_apache_lucene_store_NRTCachingDirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class IndexInput;
        class IOContext;
      }
      namespace util {
        class Accountable;
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

        class NRTCachingDirectory : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_1973dfd131a1ec4d,
            mid_close_e7bdbe105ce1bafb,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_fileLength_490f1686ea1cfda6,
            mid_listAll_970db9a2a49d840f,
            mid_listCachedFiles_970db9a2a49d840f,
            mid_openInput_fc1a53ef559ae62a,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_toString_e7df854526d67fa3,
            mid_doCacheWrite_05eec37f3d132102,
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
