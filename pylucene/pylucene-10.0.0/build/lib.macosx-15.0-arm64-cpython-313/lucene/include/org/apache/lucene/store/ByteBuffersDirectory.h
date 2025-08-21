#ifndef org_apache_lucene_store_ByteBuffersDirectory_H
#define org_apache_lucene_store_ByteBuffersDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
      class BiFunction;
    }
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class LockFactory;
        class IndexOutput;
        class IndexInput;
        class IOContext;
        class ByteBuffersDataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteBuffersDirectory : public ::org::apache::lucene::store::BaseDirectory {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_e48289f2224a69e1,
            mid_init$_318af872a132dd70,
            mid_close_3720c61b0679eb3e,
            mid_createOutput_08efc12d1beeafa9,
            mid_createTempOutput_767e9bfea4c09d00,
            mid_deleteFile_0d82408c6e55bc30,
            mid_fileExists_4a13a663b5c11133,
            mid_fileLength_e942a6f864c95ca0,
            mid_getPendingDeletions_4df174295554d7bd,
            mid_listAll_6da8f3ea65e22733,
            mid_openInput_f1f6511a018f52d0,
            mid_rename_3d104da0b5c75e64,
            mid_sync_40eba2cff967cc45,
            mid_syncMetaData_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteBuffersDirectory(jobject obj) : ::org::apache::lucene::store::BaseDirectory(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteBuffersDirectory(const ByteBuffersDirectory& obj) : ::org::apache::lucene::store::BaseDirectory(obj) {}

          static ::java::util::function::BiFunction *OUTPUT_AS_BYTE_ARRAY;
          static ::java::util::function::BiFunction *OUTPUT_AS_MANY_BUFFERS;
          static ::java::util::function::BiFunction *OUTPUT_AS_ONE_BUFFER;

          ByteBuffersDirectory();
          ByteBuffersDirectory(const ::org::apache::lucene::store::LockFactory &);
          ByteBuffersDirectory(const ::org::apache::lucene::store::LockFactory &, const ::java::util::function::Supplier &, const ::java::util::function::BiFunction &);

          void close() const;
          ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void deleteFile(const ::java::lang::String &) const;
          jboolean fileExists(const ::java::lang::String &) const;
          jlong fileLength(const ::java::lang::String &) const;
          ::java::util::Set getPendingDeletions() const;
          JArray< ::java::lang::String > listAll() const;
          ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void rename(const ::java::lang::String &, const ::java::lang::String &) const;
          void sync(const ::java::util::Collection &) const;
          void syncMetaData() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteBuffersDirectory);
        extern PyTypeObject *PY_TYPE(ByteBuffersDirectory);

        class t_ByteBuffersDirectory {
        public:
          PyObject_HEAD
          ByteBuffersDirectory object;
          static PyObject *wrap_Object(const ByteBuffersDirectory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
