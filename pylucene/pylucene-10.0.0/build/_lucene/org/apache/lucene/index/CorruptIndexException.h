#ifndef org_apache_lucene_index_CorruptIndexException_H
#define org_apache_lucene_index_CorruptIndexException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CorruptIndexException : public ::java::io::IOException {
         public:
          enum {
            mid_init$_0dd012a11c3f389b,
            mid_init$_89ce054d2c211e01,
            mid_init$_fac111ec535882c4,
            mid_init$_ad3350eb10c5221d,
            mid_init$_ba8b544f4017d23a,
            mid_init$_a9b94f618f14e780,
            mid_getOriginalMessage_e7df854526d67fa3,
            mid_getResourceDescription_e7df854526d67fa3,
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
