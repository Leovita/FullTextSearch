#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class File;
    class FilenameFilter;
    class IOException;
    class FileFilter;
    class Serializable;
  }
  namespace lang {
    class String;
    class Class;
    class Comparable;
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
        mid_init$_ee46a189998009d6,
        mid_init$_eb4a708af6270cb7,
        mid_init$_0dd012a11c3f389b,
        mid_canExecute_9aa4f33e82ea333f,
        mid_canRead_9aa4f33e82ea333f,
        mid_canWrite_9aa4f33e82ea333f,
        mid_compareTo_25a281a234553b6a,
        mid_createNewFile_9aa4f33e82ea333f,
        mid_createTempFile_5f77b292003a9f13,
        mid_createTempFile_997a9db5f40fe6f6,
        mid_delete_9aa4f33e82ea333f,
        mid_deleteOnExit_e7bdbe105ce1bafb,
        mid_equals_00d17418847797d4,
        mid_exists_9aa4f33e82ea333f,
        mid_getAbsoluteFile_f842686345e45341,
        mid_getAbsolutePath_e7df854526d67fa3,
        mid_getCanonicalFile_f842686345e45341,
        mid_getCanonicalPath_e7df854526d67fa3,
        mid_getFreeSpace_0f176418e3e16541,
        mid_getName_e7df854526d67fa3,
        mid_getParent_e7df854526d67fa3,
        mid_getParentFile_f842686345e45341,
        mid_getPath_e7df854526d67fa3,
        mid_getTotalSpace_0f176418e3e16541,
        mid_getUsableSpace_0f176418e3e16541,
        mid_hashCode_bd89ce15dad49192,
        mid_isAbsolute_9aa4f33e82ea333f,
        mid_isDirectory_9aa4f33e82ea333f,
        mid_isFile_9aa4f33e82ea333f,
        mid_isHidden_9aa4f33e82ea333f,
        mid_lastModified_0f176418e3e16541,
        mid_length_0f176418e3e16541,
        mid_list_970db9a2a49d840f,
        mid_list_9cb711767c759a52,
        mid_listFiles_1f69dd5e59b415f3,
        mid_listFiles_9b2d5b1010b2e815,
        mid_listFiles_c0ba60d223c90982,
        mid_listRoots_1f69dd5e59b415f3,
        mid_mkdir_9aa4f33e82ea333f,
        mid_mkdirs_9aa4f33e82ea333f,
        mid_renameTo_7f82f5bae1e55a06,
        mid_setExecutable_7c42d16ca5eaa145,
        mid_setExecutable_a2a97ad651c8c02f,
        mid_setLastModified_eae0b285d107fcb0,
        mid_setReadOnly_9aa4f33e82ea333f,
        mid_setReadable_7c42d16ca5eaa145,
        mid_setReadable_a2a97ad651c8c02f,
        mid_setWritable_7c42d16ca5eaa145,
        mid_setWritable_a2a97ad651c8c02f,
        mid_toPath_da490036461fb4f2,
        mid_toString_e7df854526d67fa3,
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
