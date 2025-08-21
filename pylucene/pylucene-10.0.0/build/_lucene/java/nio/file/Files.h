#ifndef java_nio_file_Files_H
#define java_nio_file_Files_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class DirectoryStream$Filter;
      class CopyOption;
      class FileVisitor;
      class LinkOption;
      class FileVisitOption;
      class FileStore;
      class Path;
      class DirectoryStream;
      class OpenOption;
    }
  }
  namespace lang {
    class CharSequence;
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
    class BufferedWriter;
    class BufferedReader;
  }
  namespace util {
    class List;
    class Set;
    class Map;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Files : public ::java::lang::Object {
       public:
        enum {
          mid_copy_0024dc3b3a763e78,
          mid_copy_9f01d7cdd0359a14,
          mid_copy_5ff17de606f0d571,
          mid_createLink_7c65087303c44fd4,
          mid_delete_8a3244428bfc77b8,
          mid_deleteIfExists_51b0b54861f74b98,
          mid_exists_12e5e3168e059c98,
          mid_getAttribute_7dfaa90b3814d5cc,
          mid_getFileStore_9a63c42a4c7b6a4b,
          mid_isDirectory_12e5e3168e059c98,
          mid_isExecutable_51b0b54861f74b98,
          mid_isHidden_51b0b54861f74b98,
          mid_isReadable_51b0b54861f74b98,
          mid_isRegularFile_12e5e3168e059c98,
          mid_isSameFile_71341aae3884add1,
          mid_isSymbolicLink_51b0b54861f74b98,
          mid_isWritable_51b0b54861f74b98,
          mid_mismatch_33dac77ebc949caa,
          mid_move_5ff17de606f0d571,
          mid_newBufferedReader_62a124dd0c95a3f2,
          mid_newBufferedWriter_e5228d8c0584abd1,
          mid_newDirectoryStream_f8c625b0b4c2e77f,
          mid_newDirectoryStream_ff1fef44d068774e,
          mid_newDirectoryStream_e9473da8f62ede89,
          mid_newInputStream_e78262c5faa6870d,
          mid_newOutputStream_1364d4bf85585674,
          mid_notExists_12e5e3168e059c98,
          mid_probeContentType_6d706fa77c0dc1f4,
          mid_readAllBytes_512e3b90726d16d5,
          mid_readAllLines_4b95983447b70e47,
          mid_readAttributes_e4e6554623b1b1e0,
          mid_readString_6d706fa77c0dc1f4,
          mid_readSymbolicLink_07f3bbbaf2aea84c,
          mid_setAttribute_8a0741827887bd67,
          mid_size_1686efb16d5b1a5b,
          mid_walkFileTree_f062c1de90d53b05,
          mid_walkFileTree_4273a80c0f6eaf32,
          mid_write_a014b12e8e1533f5,
          mid_write_ac3a80be78f49ae0,
          mid_writeString_f4ffb1ada2deafa6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Files(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Files(const Files& obj) : ::java::lang::Object(obj) {}

        static jlong copy(const ::java::nio::file::Path &, const ::java::io::OutputStream &);
        static jlong copy(const ::java::io::InputStream &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path copy(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::nio::file::Path createLink(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static void delete$(const ::java::nio::file::Path &);
        static jboolean deleteIfExists(const ::java::nio::file::Path &);
        static jboolean exists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::Object getAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::nio::file::FileStore getFileStore(const ::java::nio::file::Path &);
        static jboolean isDirectory(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isExecutable(const ::java::nio::file::Path &);
        static jboolean isHidden(const ::java::nio::file::Path &);
        static jboolean isReadable(const ::java::nio::file::Path &);
        static jboolean isRegularFile(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static jboolean isSameFile(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static jboolean isSymbolicLink(const ::java::nio::file::Path &);
        static jboolean isWritable(const ::java::nio::file::Path &);
        static jlong mismatch(const ::java::nio::file::Path &, const ::java::nio::file::Path &);
        static ::java::nio::file::Path move(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const JArray< ::java::nio::file::CopyOption > &);
        static ::java::io::BufferedReader newBufferedReader(const ::java::nio::file::Path &);
        static ::java::io::BufferedWriter newBufferedWriter(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::lang::String &);
        static ::java::nio::file::DirectoryStream newDirectoryStream(const ::java::nio::file::Path &, const ::java::nio::file::DirectoryStream$Filter &);
        static ::java::io::InputStream newInputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::io::OutputStream newOutputStream(const ::java::nio::file::Path &, const JArray< ::java::nio::file::OpenOption > &);
        static jboolean notExists(const ::java::nio::file::Path &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::String probeContentType(const ::java::nio::file::Path &);
        static JArray< jbyte > readAllBytes(const ::java::nio::file::Path &);
        static ::java::util::List readAllLines(const ::java::nio::file::Path &);
        static ::java::util::Map readAttributes(const ::java::nio::file::Path &, const ::java::lang::String &, const JArray< ::java::nio::file::LinkOption > &);
        static ::java::lang::String readString(const ::java::nio::file::Path &);
        static ::java::nio::file::Path readSymbolicLink(const ::java::nio::file::Path &);
        static ::java::nio::file::Path setAttribute(const ::java::nio::file::Path &, const ::java::lang::String &, const ::java::lang::Object &, const JArray< ::java::nio::file::LinkOption > &);
        static jlong size(const ::java::nio::file::Path &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path walkFileTree(const ::java::nio::file::Path &, const ::java::util::Set &, jint, const ::java::nio::file::FileVisitor &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const JArray< jbyte > &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::Path write(const ::java::nio::file::Path &, const ::java::lang::Iterable &, const JArray< ::java::nio::file::OpenOption > &);
        static ::java::nio::file::Path writeString(const ::java::nio::file::Path &, const ::java::lang::CharSequence &, const JArray< ::java::nio::file::OpenOption > &);
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(Files);
      extern PyTypeObject *PY_TYPE(Files);

      class t_Files {
      public:
        PyObject_HEAD
        Files object;
        static PyObject *wrap_Object(const Files&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
