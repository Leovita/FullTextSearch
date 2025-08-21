#ifndef org_apache_lucene_util_FileDeleter_H
#define org_apache_lucene_util_FileDeleter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    namespace function {
      class BiConsumer;
    }
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
      namespace util {
        class FileDeleter$MsgType;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FileDeleter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a6326fe1fbf1b206,
            mid_decRef_40eba2cff967cc45,
            mid_deleteFileIfNoRef_0d82408c6e55bc30,
            mid_deleteFilesIfNoRef_40eba2cff967cc45,
            mid_exists_4a13a663b5c11133,
            mid_forceDelete_0d82408c6e55bc30,
            mid_getAllFiles_4df174295554d7bd,
            mid_getRefCount_3f230d713d7fd2b0,
            mid_getUnrefedFiles_4df174295554d7bd,
            mid_incRef_0d82408c6e55bc30,
            mid_incRef_40eba2cff967cc45,
            mid_initRefCount_0d82408c6e55bc30,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileDeleter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileDeleter(const FileDeleter& obj) : ::java::lang::Object(obj) {}

          FileDeleter(const ::org::apache::lucene::store::Directory &, const ::java::util::function::BiConsumer &);

          void decRef(const ::java::util::Collection &) const;
          void deleteFileIfNoRef(const ::java::lang::String &) const;
          void deleteFilesIfNoRef(const ::java::util::Collection &) const;
          jboolean exists(const ::java::lang::String &) const;
          void forceDelete(const ::java::lang::String &) const;
          ::java::util::Set getAllFiles() const;
          jint getRefCount(const ::java::lang::String &) const;
          ::java::util::Set getUnrefedFiles() const;
          void incRef(const ::java::lang::String &) const;
          void incRef(const ::java::util::Collection &) const;
          void initRefCount(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(FileDeleter);
        extern PyTypeObject *PY_TYPE(FileDeleter);

        class t_FileDeleter {
        public:
          PyObject_HEAD
          FileDeleter object;
          static PyObject *wrap_Object(const FileDeleter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
