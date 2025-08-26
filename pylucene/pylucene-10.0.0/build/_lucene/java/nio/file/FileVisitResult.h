#ifndef java_nio_file_FileVisitResult_H
#define java_nio_file_FileVisitResult_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace nio {
    namespace file {
      class FileVisitResult;
    }
  }
}
template<class T> class JArray;

namespace java {
  namespace nio {
    namespace file {

      class FileVisitResult : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_e944e325168df2a6,
          mid_values_11e49e75d19a9958,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FileVisitResult(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FileVisitResult(const FileVisitResult& obj) : ::java::lang::Enum(obj) {}

        static FileVisitResult *CONTINUE;
        static FileVisitResult *SKIP_SIBLINGS;
        static FileVisitResult *SKIP_SUBTREE;
        static FileVisitResult *TERMINATE;

        static FileVisitResult valueOf(const ::java::lang::String &);
        static JArray< FileVisitResult > values();
      };
    }
  }
}

#include <Python.h>

namespace java {
  namespace nio {
    namespace file {
      extern PyType_Def PY_TYPE_DEF(FileVisitResult);
      extern PyTypeObject *PY_TYPE(FileVisitResult);

      class t_FileVisitResult {
      public:
        PyObject_HEAD
        FileVisitResult object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FileVisitResult *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FileVisitResult&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FileVisitResult&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
