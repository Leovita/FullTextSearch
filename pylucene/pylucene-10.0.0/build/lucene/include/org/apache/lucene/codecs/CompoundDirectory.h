#ifndef org_apache_lucene_codecs_CompoundDirectory_H
#define org_apache_lucene_codecs_CompoundDirectory_H

#include "org/apache/lucene/store/Directory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
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
      namespace codecs {

        class CompoundDirectory : public ::org::apache::lucene::store::Directory {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_obtainLock_3ede4234fbb2098d,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CompoundDirectory(jobject obj) : ::org::apache::lucene::store::Directory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CompoundDirectory(const CompoundDirectory& obj) : ::org::apache::lucene::store::Directory(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::org::apache::lucene::store::Lock obtainLock(const ::java::lang::String &) const;
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
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(CompoundDirectory);
        extern PyTypeObject *PY_TYPE(CompoundDirectory);

        class t_CompoundDirectory {
        public:
          PyObject_HEAD
          CompoundDirectory object;
          static PyObject *wrap_Object(const CompoundDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
