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
            mid_init$_3d104da0b5c75e64,
            mid_init$_2885ca24e476bfcc,
            mid_init$_ad86ada88a1b06a4,
            mid_init$_2f7ad747b6e05557,
            mid_getMaxVersion_0babf078bb41693e,
            mid_getMinVersion_0babf078bb41693e,
            mid_getReason_09a7afff1868fc5e,
            mid_getResourceDescription_09a7afff1868fc5e,
            mid_getVersion_0babf078bb41693e,
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
