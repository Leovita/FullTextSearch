#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes;
      }
    }
  }
}
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

        class PagedBytes$PagedBytesDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_867150302eeff035,
            mid_getPosition_0f176418e3e16541,
            mid_writeByte_a5d0ad9e85e76a64,
            mid_writeBytes_116f7fcb5bff0f39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataOutput(const PagedBytes$PagedBytesDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          PagedBytes$PagedBytesDataOutput(const ::org::apache::lucene::util::PagedBytes &);

          jlong getPosition() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes$PagedBytesDataOutput);
        extern PyTypeObject *PY_TYPE(PagedBytes$PagedBytesDataOutput);

        class t_PagedBytes$PagedBytesDataOutput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataOutput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
