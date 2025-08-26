#ifndef org_apache_lucene_util_CommandLineUtil_H
#define org_apache_lucene_util_CommandLineUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class FSDirectory;
        class LockFactory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class ReflectiveOperationException;
    class String;
    class ClassNotFoundException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class CommandLineUtil : public ::java::lang::Object {
         public:
          enum {
            mid_loadDirectoryClass_34dc63379bcbfa09,
            mid_loadFSDirectoryClass_34dc63379bcbfa09,
            mid_newFSDirectory_621709f2cd686486,
            mid_newFSDirectory_4ac5b5c024b0f101,
            mid_newFSDirectory_836ee71a081e130b,
            mid_newFSDirectory_2a8316260124b141,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommandLineUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommandLineUtil(const CommandLineUtil& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::Class loadDirectoryClass(const ::java::lang::String &);
          static ::java::lang::Class loadFSDirectoryClass(const ::java::lang::String &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::Class &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
          static ::org::apache::lucene::store::FSDirectory newFSDirectory(const ::java::lang::String &, const ::java::nio::file::Path &, const ::org::apache::lucene::store::LockFactory &);
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
        extern PyType_Def PY_TYPE_DEF(CommandLineUtil);
        extern PyTypeObject *PY_TYPE(CommandLineUtil);

        class t_CommandLineUtil {
        public:
          PyObject_HEAD
          CommandLineUtil object;
          static PyObject *wrap_Object(const CommandLineUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
