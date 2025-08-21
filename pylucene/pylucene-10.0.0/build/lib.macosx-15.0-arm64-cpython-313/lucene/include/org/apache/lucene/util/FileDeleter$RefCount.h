#ifndef org_apache_lucene_util_FileDeleter$RefCount_H
#define org_apache_lucene_util_FileDeleter$RefCount_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FileDeleter$RefCount : public ::java::lang::Object {
         public:
          enum {
            mid_decRef_20fbf7565993c3d7,
            mid_incRef_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileDeleter$RefCount(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileDeleter$RefCount(const FileDeleter$RefCount& obj) : ::java::lang::Object(obj) {}

          jint decRef() const;
          jint incRef() const;
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
        extern PyType_Def PY_TYPE_DEF(FileDeleter$RefCount);
        extern PyTypeObject *PY_TYPE(FileDeleter$RefCount);

        class t_FileDeleter$RefCount {
        public:
          PyObject_HEAD
          FileDeleter$RefCount object;
          static PyObject *wrap_Object(const FileDeleter$RefCount&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
