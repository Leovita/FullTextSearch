#ifndef org_apache_lucene_store_TrackingDirectoryWrapper_H
#define org_apache_lucene_store_TrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
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
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class TrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_0bf39a7351552ef4,
            mid_clearCreatedFiles_e7bdbe105ce1bafb,
            mid_copyFrom_690af4af74b7d11b,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_getCreatedFiles_79131c6bbcf08916,
            mid_rename_0dd012a11c3f389b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TrackingDirectoryWrapper(const TrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

          TrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);

          void clearCreatedFiles() const;
          void copyFrom(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          ::java::util::Set getCreatedFiles() const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(TrackingDirectoryWrapper);
        extern PyTypeObject *PY_TYPE(TrackingDirectoryWrapper);

        class t_TrackingDirectoryWrapper {
        public:
          PyObject_HEAD
          TrackingDirectoryWrapper object;
          static PyObject *wrap_Object(const TrackingDirectoryWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
