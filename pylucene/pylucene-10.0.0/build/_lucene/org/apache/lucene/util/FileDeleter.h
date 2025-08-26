#ifndef org_apache_lucene_util_FileDeleter_H
#define org_apache_lucene_util_FileDeleter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        class FileDeleter$MsgType;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class BiConsumer;
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FileDeleter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_282057b63cb7a319,
            mid_decRef_b5398b431eb321fb,
            mid_deleteFileIfNoRef_ee46a189998009d6,
            mid_deleteFilesIfNoRef_b5398b431eb321fb,
            mid_exists_94f7e759d94961b0,
            mid_forceDelete_ee46a189998009d6,
            mid_getAllFiles_79131c6bbcf08916,
            mid_getRefCount_fa2a6f298bd618ab,
            mid_getUnrefedFiles_79131c6bbcf08916,
            mid_incRef_ee46a189998009d6,
            mid_incRef_b5398b431eb321fb,
            mid_initRefCount_ee46a189998009d6,
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
