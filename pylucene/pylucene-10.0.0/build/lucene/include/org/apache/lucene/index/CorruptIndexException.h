#ifndef org_apache_lucene_index_CorruptIndexException_H
#define org_apache_lucene_index_CorruptIndexException_H

#include "java/io/IOException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CorruptIndexException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_3d104da0b5c75e64,
            mid_init$_7de099611a8931b0,
            mid_init$_2fda85cee6c18713,
            mid_init$_4435ae0f3e6e306d,
            mid_init$_0c57df0fed7edf7d,
            mid_init$_c5240b8335f823b4,
            mid_getOriginalMessage_09a7afff1868fc5e,
            mid_getResourceDescription_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CorruptIndexException(jobject obj) : ::java::io::IOException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CorruptIndexException(const CorruptIndexException& obj) : ::java::io::IOException(obj) {}

          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &);
          CorruptIndexException(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataInput &, const ::java::lang::Throwable &);
          CorruptIndexException(const ::java::lang::String &, const ::org::apache::lucene::store::DataOutput &, const ::java::lang::Throwable &);

          ::java::lang::String getOriginalMessage() const;
          ::java::lang::String getResourceDescription() const;
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
        extern PyType_Def PY_TYPE_DEF(CorruptIndexException);
        extern PyTypeObject *PY_TYPE(CorruptIndexException);

        class t_CorruptIndexException {
        public:
          PyObject_HEAD
          CorruptIndexException object;
          static PyObject *wrap_Object(const CorruptIndexException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
