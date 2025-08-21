#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace io {
    class FileFilter;
    class File;
    class Serializable;
    class IOException;
    class FilenameFilter;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class File : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0d82408c6e55bc30,
        mid_init$_e959520fd6b758e1,
        mid_init$_3d104da0b5c75e64,
        mid_canExecute_947277eca0748c4e,
        mid_canRead_947277eca0748c4e,
        mid_canWrite_947277eca0748c4e,
        mid_compareTo_8afe0896ed391bb8,
        mid_createNewFile_947277eca0748c4e,
        mid_createTempFile_b634b3b993b394d8,
        mid_createTempFile_3f177dce8dd7b220,
        mid_delete_947277eca0748c4e,
        mid_deleteOnExit_3720c61b0679eb3e,
        mid_equals_570b5248a6da3ef6,
        mid_exists_947277eca0748c4e,
        mid_getAbsoluteFile_3ba2f8bbd3c09c8f,
        mid_getAbsolutePath_09a7afff1868fc5e,
        mid_getCanonicalFile_3ba2f8bbd3c09c8f,
        mid_getCanonicalPath_09a7afff1868fc5e,
        mid_getFreeSpace_16939d9d0a9a9721,
        mid_getName_09a7afff1868fc5e,
        mid_getParent_09a7afff1868fc5e,
        mid_getParentFile_3ba2f8bbd3c09c8f,
        mid_getPath_09a7afff1868fc5e,
        mid_getTotalSpace_16939d9d0a9a9721,
        mid_getUsableSpace_16939d9d0a9a9721,
        mid_hashCode_20fbf7565993c3d7,
        mid_isAbsolute_947277eca0748c4e,
        mid_isDirectory_947277eca0748c4e,
        mid_isFile_947277eca0748c4e,
        mid_isHidden_947277eca0748c4e,
        mid_lastModified_16939d9d0a9a9721,
        mid_length_16939d9d0a9a9721,
        mid_list_6da8f3ea65e22733,
        mid_list_ba14b26ba61d2cfd,
        mid_listFiles_e6e51ec9f63060e9,
        mid_listFiles_ae5ff04b586336d9,
        mid_listFiles_1b9edf7d1dda6cab,
        mid_listRoots_e6e51ec9f63060e9,
        mid_mkdir_947277eca0748c4e,
        mid_mkdirs_947277eca0748c4e,
        mid_renameTo_f4595d8e6d5c0d5d,
        mid_setExecutable_6a2c1000a9889653,
        mid_setExecutable_8d00a228c911b713,
        mid_setLastModified_d8a0ab12857291e0,
        mid_setReadOnly_947277eca0748c4e,
        mid_setReadable_6a2c1000a9889653,
        mid_setReadable_8d00a228c911b713,
        mid_setWritable_6a2c1000a9889653,
        mid_setWritable_8d00a228c911b713,
        mid_toPath_d21fdf719406f66d,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit File(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      File(const File& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::String *pathSeparator;
      static jchar pathSeparatorChar;
      static ::java::lang::String *separator;
      static jchar separatorChar;

      File(const ::java::lang::String &);
      File(const File &, const ::java::lang::String &);
      File(const ::java::lang::String &, const ::java::lang::String &);

      jboolean canExecute() const;
      jboolean canRead() const;
      jboolean canWrite() const;
      jint compareTo(const File &) const;
      jboolean createNewFile() const;
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &);
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &, const File &);
      jboolean delete$() const;
      void deleteOnExit() const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean exists() const;
      File getAbsoluteFile() const;
      ::java::lang::String getAbsolutePath() const;
      File getCanonicalFile() const;
      ::java::lang::String getCanonicalPath() const;
      jlong getFreeSpace() const;
      ::java::lang::String getName() const;
      ::java::lang::String getParent() const;
      File getParentFile() const;
      ::java::lang::String getPath() const;
      jlong getTotalSpace() const;
      jlong getUsableSpace() const;
      jint hashCode() const;
      jboolean isAbsolute() const;
      jboolean isDirectory() const;
      jboolean isFile() const;
      jboolean isHidden() const;
      jlong lastModified() const;
      jlong length() const;
      JArray< ::java::lang::String > list() const;
      JArray< ::java::lang::String > list(const ::java::io::FilenameFilter &) const;
      JArray< File > listFiles() const;
      JArray< File > listFiles(const ::java::io::FileFilter &) const;
      JArray< File > listFiles(const ::java::io::FilenameFilter &) const;
      static JArray< File > listRoots();
      jboolean mkdir() const;
      jboolean mkdirs() const;
      jboolean renameTo(const File &) const;
      jboolean setExecutable(jboolean) const;
      jboolean setExecutable(jboolean, jboolean) const;
      jboolean setLastModified(jlong) const;
      jboolean setReadOnly() const;
      jboolean setReadable(jboolean) const;
      jboolean setReadable(jboolean, jboolean) const;
      jboolean setWritable(jboolean) const;
      jboolean setWritable(jboolean, jboolean) const;
      ::java::nio::file::Path toPath() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(File);
    extern PyTypeObject *PY_TYPE(File);

    class t_File {
    public:
      PyObject_HEAD
      File object;
      static PyObject *wrap_Object(const File&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
