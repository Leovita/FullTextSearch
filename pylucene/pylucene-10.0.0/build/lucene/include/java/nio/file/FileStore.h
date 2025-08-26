#ifndef java_nio_file_FileStore_H
#define java_nio_file_FileStore_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileStore : public ::java::lang::Object {
       public:
        enum {
          mid_getAttribute_a78a91e32cc37c7c,
          mid_getBlockSize_0f176418e3e16541,
          mid_getTotalSpace_0f176418e3e16541,
          mid_getUnallocatedSpace_0f176418e3e16541,
          mid_getUsableSpace_0f176418e3e16541,
          mid_isReadOnly_9aa4f33e82ea333f,
          mid_name_e7df854526d67fa3,
          mid_supportsFileAttributeView_94f7e759d94961b0,
          mid_type_e7df854526d67fa3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileStore(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileStore(const FileStore& obj) : ::java::lang::Object(obj) {}

        ::java::lang::Object getAttribute(const ::java::lang::String &) const;
        jlong getBlockSize() const;
        jlong getTotalSpace() const;
        jlong getUnallocatedSpace() const;
        jlong getUsableSpace() const;
        jboolean isReadOnly() const;
        ::java::lang::String name() const;
        jboolean supportsFileAttributeView(const ::java::lang::String &) const;
        ::java::lang::String type() const;
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileStore);
      extern PyTypeObject *PY_TYPE(FileStore);

      class t_FileStore {
      public:
        PyObject_HEAD
        FileStore object;
        static PyObject *wrap_Object(const FileStore&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
