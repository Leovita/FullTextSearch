#ifndef org_apache_lucene_util_IOUtils_H
#define org_apache_lucene_util_IOUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Closeable;
    class IOException;
    class Reader;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class Throwable;
    class Error;
    class RuntimeException;
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
      namespace util {
        class IOConsumer;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IOUtils : public ::java::lang::Object {
         public:
          enum {
            mid_applyToAll_6553f788222015f3,
            mid_close_5db13a2ed8cf27df,
            mid_close_eb4b05d4345caaf0,
            mid_closeWhileHandlingException_5db13a2ed8cf27df,
            mid_closeWhileHandlingException_eb4b05d4345caaf0,
            mid_deleteFiles_8b7f5f5deb12b943,
            mid_deleteFilesIfExist_ec660a8af742899b,
            mid_deleteFilesIfExist_40eba2cff967cc45,
            mid_deleteFilesIgnoringExceptions_ec660a8af742899b,
            mid_deleteFilesIgnoringExceptions_40eba2cff967cc45,
            mid_deleteFilesIgnoringExceptions_2f8040b7fa1ab771,
            mid_deleteFilesIgnoringExceptions_8b7f5f5deb12b943,
            mid_fsync_1b46774831f6db5e,
            mid_requireResourceNonNull_b9a30901c306b6b7,
            mid_rethrowAlways_94c36751a9ef2468,
            mid_rm_ec660a8af742899b,
            mid_useOrSuppress_5e3ad5d886ed3bdd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOUtils(const IOUtils& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *UTF_8;

          static void applyToAll(const ::java::util::Collection &, const ::org::apache::lucene::util::IOConsumer &);
          static void close(const JArray< ::java::io::Closeable > &);
          static void close(const ::java::lang::Iterable &);
          static void closeWhileHandlingException(const JArray< ::java::io::Closeable > &);
          static void closeWhileHandlingException(const ::java::lang::Iterable &);
          static void deleteFiles(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void deleteFilesIfExist(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIfExist(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const JArray< ::java::nio::file::Path > &);
          static void deleteFilesIgnoringExceptions(const ::java::util::Collection &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const JArray< ::java::lang::String > &);
          static void deleteFilesIgnoringExceptions(const ::org::apache::lucene::store::Directory &, const ::java::util::Collection &);
          static void fsync(const ::java::nio::file::Path &, jboolean);
          static ::java::lang::Object requireResourceNonNull(const ::java::lang::Object &, const ::java::lang::String &);
          static ::java::lang::Error rethrowAlways(const ::java::lang::Throwable &);
          static void rm(const JArray< ::java::nio::file::Path > &);
          static ::java::lang::Throwable useOrSuppress(const ::java::lang::Throwable &, const ::java::lang::Throwable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(IOUtils);
        extern PyTypeObject *PY_TYPE(IOUtils);

        class t_IOUtils {
        public:
          PyObject_HEAD
          IOUtils object;
          static PyObject *wrap_Object(const IOUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
