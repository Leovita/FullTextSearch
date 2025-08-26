#ifndef java_nio_file_Files_H
#define java_nio_file_Files_H

#include "java/lang/Object.h"

namespace java {
  namespace nio {
    namespace file {
      class LinkOption;
      class CopyOption;
      class Path;
      class DirectoryStream;
      class FileVisitor;
      class FileStore;
      class FileVisitOption;
      class OpenOption;
      class DirectoryStream$Filter;
    }
  }
  namespace io {
    class IOException;
    class OutputStream;
    class BufferedReader;
    class InputStream;
    class BufferedWriter;
  }
  namespace util {
    class Set;
    class List;
    class Map;
  }
  namespace lang {
    class CharSequence;
    class Class;
    class String;
    class Iterable;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class Files : public ::java::lang::Object {
       public:
        enum {
          mid_copy_e0289c297b64c436,
          mid_copy_17ea23c8557dcd9b,
          mid_copy_50094afc68292ead,
          mid_createLink_89d63ec4a90de9f9,
          mid_delete_e7b3ede3efacc86d,
          mid_deleteIfExists_8e3a3ca1e06e8982,
          mid_exists_f9fdd03a093a43ab,
          mid_getAttribute_1f19daeed2fa6cb9,
          mid_getFileStore_fae242aadf842c22,
          mid_isDirectory_f9fdd03a093a43ab,
          mid_isExecutable_8e3a3ca1e06e8982,
          mid_isHidden_8e3a3ca1e06e8982,
          mid_isReadable_8e3a3ca1e06e8982,
          mid_isRegularFile_f9fdd03a093a43ab,
          mid_isSameFile_ff804a3eadd1579d,
          mid_isSymbolicLink_8e3a3ca1e06e8982,
          mid_isWritable_8e3a3ca1e06e8982,
          mid_mismatch_bd063b349b6f0107,
          mid_move_50094afc68292ead,
          mid_newBufferedReader_3049a31d741e981f,
          mid_newBufferedWriter_e8cbcd87f60aa418,
          mid_newDirectoryStream_801e1e2f5c98a736,
          mid_newDirectoryStream_83fd73950467df70,
          mid_newDirectoryStream_5fbe37e227e1f2a9,
          mid_newInputStream_65b1de316ac7d7a1,
          mid_newOutputStream_13750de91b30885a,
          mid_notExists_f9fdd03a093a43ab,
          mid_probeContentType_07c8b6935b70591e,
          mid_readAllBytes_f2fc9a508aaa5db9,
          mid_readAllLines_26f76a871ac2a9b6,
          mid_readAttributes_fc6e512f0aed3ffb,
          mid_readString_07c8b6935b70591e,
          mid_readSymbolicLink_9ed8a3e986701280,
          mid_setAttribute_e2fcde27a269e5bd,
          mid_size_a13d1ec0e7b95a2a,
          mid_walkFileTree_f5c3c8b71fa252a7,
          mid_walkFileTree_efa2ba4db6a5de2a,
          mid_write_09910c080e0cbd1b,
          mid_write_03408478ceea8b93,
          mid_writeString_27418a4b2f220515,
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
