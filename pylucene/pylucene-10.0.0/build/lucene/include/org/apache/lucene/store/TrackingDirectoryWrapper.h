#ifndef org_apache_lucene_store_TrackingDirectoryWrapper_H
#define org_apache_lucene_store_TrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
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

        class TrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
         public:
          enum {
            mid_init$_3c151c130d7f3176,
            mid_clearCreatedFiles_3720c61b0679eb3e,
            mid_copyFrom_23ba349b04fb6402,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_getCreatedFiles_4df174295554d7bd,
            mid_rename_3d104da0b5c75e64,
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
