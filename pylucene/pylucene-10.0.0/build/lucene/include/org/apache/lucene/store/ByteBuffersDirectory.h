#ifndef org_apache_lucene_store_ByteBuffersDirectory_H
#define org_apache_lucene_store_ByteBuffersDirectory_H

#include "org/apache/lucene/store/BaseDirectory.h"

namespace java {
  namespace util {
    namespace function {
      class BiFunction;
      class Supplier;
    }
    class Collection;
    class Set;
  }
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class ByteBuffersDataOutput;
        class IndexInput;
        class IOContext;
        class LockFactory;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_87a79291f4a48dfc,
            mid_init$_22c71d0fe3ddc15f,
            mid_close_e7bdbe105ce1bafb,
            mid_createOutput_5ee859a77f556d05,
            mid_createTempOutput_c416e7b8f77d8569,
            mid_deleteFile_ee46a189998009d6,
            mid_fileExists_94f7e759d94961b0,
            mid_fileLength_490f1686ea1cfda6,
            mid_getPendingDeletions_79131c6bbcf08916,
            mid_listAll_970db9a2a49d840f,
            mid_openInput_fc1a53ef559ae62a,
            mid_rename_0dd012a11c3f389b,
            mid_sync_b5398b431eb321fb,
            mid_syncMetaData_e7bdbe105ce1bafb,
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
