#ifndef org_apache_lucene_util_IOUtils_H
#define org_apache_lucene_util_IOUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class RuntimeException;
    class Throwable;
    class Error;
    class String;
  }
  namespace io {
    class Closeable;
    class IOException;
    class Reader;
    class InputStream;
  }
  namespace util {
    class Collection;
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
        class Directory;
      }
      namespace util {
        class IOConsumer;
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
            mid_applyToAll_53e5dd8cdc998d82,
            mid_close_a6db3f1539fbc9ee,
            mid_close_e14ca79f217d88d0,
            mid_closeWhileHandlingException_a6db3f1539fbc9ee,
            mid_closeWhileHandlingException_e14ca79f217d88d0,
            mid_deleteFiles_4c17800276fc3885,
            mid_deleteFilesIfExist_eb073c773e62448a,
            mid_deleteFilesIfExist_b5398b431eb321fb,
            mid_deleteFilesIgnoringExceptions_eb073c773e62448a,
            mid_deleteFilesIgnoringExceptions_b5398b431eb321fb,
            mid_deleteFilesIgnoringExceptions_f6ec8cefaa1ead8e,
            mid_deleteFilesIgnoringExceptions_4c17800276fc3885,
            mid_fsync_150aa43f67c22088,
            mid_requireResourceNonNull_a0ff83d2ec55a8fc,
            mid_rethrowAlways_d69c7ec9b5fc4dcd,
            mid_rm_eb073c773e62448a,
            mid_useOrSuppress_0a89ae3466ad1349,
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
