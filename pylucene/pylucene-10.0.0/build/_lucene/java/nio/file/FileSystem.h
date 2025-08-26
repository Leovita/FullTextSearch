#ifndef java_nio_file_FileSystem_H
#define java_nio_file_FileSystem_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace nio {
    namespace file {
      class PathMatcher;
      class FileStore;
      class Path;
      class WatchService;
    }
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
          mid_close_e7bdbe105ce1bafb,
          mid_getFileStores_85e1732aaf0b83f3,
          mid_getPath_d84b0e3d2949c12d,
          mid_getPathMatcher_54bcf2c47325ff94,
          mid_getRootDirectories_85e1732aaf0b83f3,
          mid_getSeparator_e7df854526d67fa3,
          mid_isOpen_9aa4f33e82ea333f,
          mid_isReadOnly_9aa4f33e82ea333f,
          mid_newWatchService_70c50eec1bec2b28,
          mid_supportedFileAttributeViews_79131c6bbcf08916,
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
