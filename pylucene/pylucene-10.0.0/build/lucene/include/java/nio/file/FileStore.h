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
          mid_getAttribute_e5cf973b773e2999,
          mid_getBlockSize_16939d9d0a9a9721,
          mid_getTotalSpace_16939d9d0a9a9721,
          mid_getUnallocatedSpace_16939d9d0a9a9721,
          mid_getUsableSpace_16939d9d0a9a9721,
          mid_isReadOnly_947277eca0748c4e,
          mid_name_09a7afff1868fc5e,
          mid_supportsFileAttributeView_4a13a663b5c11133,
          mid_type_09a7afff1868fc5e,
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
