#ifndef java_nio_file_FileSystem_H
#define java_nio_file_FileSystem_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class WatchService;
      class PathMatcher;
      class FileStore;
      class Path;
    }
  }
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileSystem : public ::java::lang::Object {
       public:
        enum {
          mid_close_3720c61b0679eb3e,
          mid_getFileStores_11d5156a64e3246d,
          mid_getPath_c1dd8ffa3d682724,
          mid_getPathMatcher_5df128f4e632875c,
          mid_getRootDirectories_11d5156a64e3246d,
          mid_getSeparator_09a7afff1868fc5e,
          mid_isOpen_947277eca0748c4e,
          mid_isReadOnly_947277eca0748c4e,
          mid_newWatchService_093d120200a8dac2,
          mid_supportedFileAttributeViews_4df174295554d7bd,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileSystem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileSystem(const FileSystem& obj) : ::java::lang::Object(obj) {}

        void close() const;
        ::java::lang::Iterable getFileStores() const;
        ::java::nio::file::Path getPath(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
        ::java::nio::file::PathMatcher getPathMatcher(const ::java::lang::String &) const;
        ::java::lang::Iterable getRootDirectories() const;
        ::java::lang::String getSeparator() const;
        jboolean isOpen() const;
        jboolean isReadOnly() const;
        ::java::nio::file::WatchService newWatchService() const;
        ::java::util::Set supportedFileAttributeViews() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileSystem);
      extern PyTypeObject *PY_TYPE(FileSystem);

      class t_FileSystem {
      public:
        PyObject_HEAD
        FileSystem object;
        static PyObject *wrap_Object(const FileSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
