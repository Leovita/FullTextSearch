#ifndef org_apache_lucene_util_CommandLineUtil_H
#define org_apache_lucene_util_CommandLineUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FSDirectory;
        class LockFactory;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class ClassNotFoundException;
    class Class;
    class String;
    class ReflectiveOperationException;
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
            mid_loadDirectoryClass_f5e647a8ccc975d0,
            mid_loadFSDirectoryClass_f5e647a8ccc975d0,
            mid_newFSDirectory_3f23e64f59eb87d3,
            mid_newFSDirectory_9576c13c84840bd9,
            mid_newFSDirectory_c05c17dacf249910,
            mid_newFSDirectory_67611279311b395f,
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
