#ifndef java_nio_file_Path_H
#define java_nio_file_Path_H

#include "java/lang/Comparable.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace io {
    class File;
    class IOException;
  }
  namespace nio {
    namespace file {
      class WatchKey;
      class Watchable;
      class WatchService;
      class WatchEvent$Kind;
      class LinkOption;
      class FileSystem;
      class WatchEvent$Modifier;
      class Path;
    }
  }
  namespace lang {
    class Object;
    class Class;
    class String;
    class Iterable;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Path : public ::java::lang::Comparable {
       public:
        enum {
          mid_compareTo_e56cc706a6dc01ff,
          mid_endsWith_94f7e759d94961b0,
          mid_endsWith_8e3a3ca1e06e8982,
          mid_equals_00d17418847797d4,
          mid_getFileName_da490036461fb4f2,
          mid_getFileSystem_3f65d9025f86e2c7,
          mid_getName_2bec25e35eb00086,
          mid_getNameCount_bd89ce15dad49192,
          mid_getParent_da490036461fb4f2,
          mid_getRoot_da490036461fb4f2,
          mid_hashCode_bd89ce15dad49192,
          mid_isAbsolute_9aa4f33e82ea333f,
          mid_iterator_c7985fafdcf40e83,
          mid_normalize_da490036461fb4f2,
          mid_of_d84b0e3d2949c12d,
          mid_register_303167a0b7ca69ea,
          mid_register_2dca432f38e67efe,
          mid_relativize_9ed8a3e986701280,
          mid_resolve_3c69a03244e8eb97,
          mid_resolve_9ed8a3e986701280,
          mid_resolve_d84b0e3d2949c12d,
          mid_resolve_e4517620b5152593,
          mid_resolveSibling_3c69a03244e8eb97,
          mid_resolveSibling_9ed8a3e986701280,
          mid_startsWith_94f7e759d94961b0,
          mid_startsWith_8e3a3ca1e06e8982,
          mid_subpath_a87f31ede97e4914,
          mid_toAbsolutePath_da490036461fb4f2,
          mid_toFile_f842686345e45341,
          mid_toRealPath_57e894b81761e7a9,
          mid_toString_e7df854526d67fa3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Path(jobject obj) : ::java::lang::Comparable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Path(const Path& obj) : ::java::lang::Comparable(obj) {}

        jint compareTo(const Path &) const;
        jboolean endsWith(const ::java::lang::String &) const;
        jboolean endsWith(const Path &) const;
        jboolean equals(const ::java::lang::Object &) const;
        Path getFileName() const;
        ::java::nio::file::FileSystem getFileSystem() const;
        Path getName(jint) const;
        jint getNameCount() const;
        Path getParent() const;
        Path getRoot() const;
        jint hashCode() const;
        jboolean isAbsolute() const;
        ::java::util::Iterator iterator() const;
        Path normalize() const;
        static Path of(const ::java::lang::String &, const JArray< ::java::lang::String > &);
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &) const;
        ::java::nio::file::WatchKey register$(const ::java::nio::file::WatchService &, const JArray< ::java::nio::file::WatchEvent$Kind > &, const JArray< ::java::nio::file::WatchEvent$Modifier > &) const;
        Path relativize(const Path &) const;
        Path resolve(const ::java::lang::String &) const;
        Path resolve(const Path &) const;
        Path resolve(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
        Path resolve(const Path &, const JArray< Path > &) const;
        Path resolveSibling(const ::java::lang::String &) const;
        Path resolveSibling(const Path &) const;
        jboolean startsWith(const ::java::lang::String &) const;
        jboolean startsWith(const Path &) const;
        Path subpath(jint, jint) const;
        Path toAbsolutePath() const;
        ::java::io::File toFile() const;
        Path toRealPath(const JArray< ::java::nio::file::LinkOption > &) const;
        ::java::lang::String toString() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Path);
      extern PyTypeObject *PY_TYPE(Path);

      class t_Path {
      public:
        PyObject_HEAD
        Path object;
        static PyObject *wrap_Object(const Path&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
