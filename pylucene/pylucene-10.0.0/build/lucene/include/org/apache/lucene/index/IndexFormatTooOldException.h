#ifndef org_apache_lucene_index_IndexFormatTooOldException_H
#define org_apache_lucene_index_IndexFormatTooOldException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Integer;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexFormatTooOldException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_0dd012a11c3f389b,
            mid_init$_fb57e08f3099cd5a,
            mid_init$_7a4017944aa379f8,
            mid_init$_bb72ce4920c859b2,
            mid_getMaxVersion_078821faeee94f65,
            mid_getMinVersion_078821faeee94f65,
            mid_getReason_e7df854526d67fa3,
            mid_getResourceDescription_e7df854526d67fa3,
            mid_getVersion_078821faeee94f65,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexFormatTooOldException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexFormatTooOldException(const IndexFormatTooOldException& obj) : ::java::io::IOException(obj) {}

          IndexFormatTooOldException(const ::java::lang::String &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, const ::java::lang::String &);
          IndexFormatTooOldException(const ::java::lang::String &, jint, jint, jint);
          IndexFormatTooOldException(const ::org::apache::lucene::store::DataInput &, jint, jint, jint);

          ::java::lang::Integer getMaxVersion() const;
          ::java::lang::Integer getMinVersion() const;
          ::java::lang::String getReason() const;
          ::java::lang::String getResourceDescription() const;
          ::java::lang::Integer getVersion() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexFormatTooOldException);
        extern PyTypeObject *PY_TYPE(IndexFormatTooOldException);

        class t_IndexFormatTooOldException {
        public:
          PyObject_HEAD
          IndexFormatTooOldException object;
          static PyObject *wrap_Object(const IndexFormatTooOldException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
