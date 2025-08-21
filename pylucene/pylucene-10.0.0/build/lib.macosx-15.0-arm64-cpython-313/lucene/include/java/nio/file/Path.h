#ifndef java_nio_file_Path_H
#define java_nio_file_Path_H

#include "java/lang/Comparable.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace nio {
    namespace file {
      class Watchable;
      class WatchService;
      class FileSystem;
      class LinkOption;
      class Path;
      class WatchEvent$Kind;
      class WatchKey;
      class WatchEvent$Modifier;
    }
  }
  namespace io {
    class File;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Path : public ::java::lang::Comparable {
       public:
        enum {
          mid_compareTo_c67987353446ff15,
          mid_endsWith_4a13a663b5c11133,
          mid_endsWith_51b0b54861f74b98,
          mid_equals_570b5248a6da3ef6,
          mid_getFileName_d21fdf719406f66d,
          mid_getFileSystem_2cec0c20ec5ba9db,
          mid_getName_a4f3639e558e8cbf,
          mid_getNameCount_20fbf7565993c3d7,
          mid_getParent_d21fdf719406f66d,
          mid_getRoot_d21fdf719406f66d,
          mid_hashCode_20fbf7565993c3d7,
          mid_isAbsolute_947277eca0748c4e,
          mid_iterator_0db4c76ff7ee995b,
          mid_normalize_d21fdf719406f66d,
          mid_of_c1dd8ffa3d682724,
          mid_register_dc7d4ab737661faf,
          mid_register_cd5eba900470f048,
          mid_relativize_07f3bbbaf2aea84c,
          mid_resolve_6dc2dbf3a7e46feb,
          mid_resolve_07f3bbbaf2aea84c,
          mid_resolveSibling_6dc2dbf3a7e46feb,
          mid_resolveSibling_07f3bbbaf2aea84c,
          mid_startsWith_4a13a663b5c11133,
          mid_startsWith_51b0b54861f74b98,
          mid_subpath_0f07a4ec716c023c,
          mid_toAbsolutePath_d21fdf719406f66d,
          mid_toFile_3ba2f8bbd3c09c8f,
          mid_toRealPath_db4b55f1353e55c1,
          mid_toString_09a7afff1868fc5e,
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
