#ifndef org_apache_lucene_util_FileDeleter$MsgType_H
#define org_apache_lucene_util_FileDeleter$MsgType_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class FileDeleter$MsgType;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class FileDeleter$MsgType : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_0f2b9670f2ee04cd,
            mid_values_0972528fdf6f79df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FileDeleter$MsgType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FileDeleter$MsgType(const FileDeleter$MsgType& obj) : ::java::lang::Enum(obj) {}

          static FileDeleter$MsgType *FILE;
          static FileDeleter$MsgType *REF;

          static FileDeleter$MsgType valueOf(const ::java::lang::String &);
          static JArray< FileDeleter$MsgType > values();
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
        extern PyType_Def PY_TYPE_DEF(FileDeleter$MsgType);
        extern PyTypeObject *PY_TYPE(FileDeleter$MsgType);

        class t_FileDeleter$MsgType {
        public:
          PyObject_HEAD
          FileDeleter$MsgType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FileDeleter$MsgType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FileDeleter$MsgType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FileDeleter$MsgType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
