#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$PagedBytesDataInput;
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

        class PagedBytes$PagedBytesDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_516bd0eaa8217a13,
            mid_getPosition_0f176418e3e16541,
            mid_readByte_1456044a01a5c9bf,
            mid_readBytes_116f7fcb5bff0f39,
            mid_setPosition_1d3149fac12f2af3,
            mid_skipBytes_1d3149fac12f2af3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataInput(const PagedBytes$PagedBytesDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          PagedBytes$PagedBytesDataInput clone() const;
          jlong getPosition() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void setPosition(jlong) const;
          void skipBytes(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes$PagedBytesDataInput);
        extern PyTypeObject *PY_TYPE(PagedBytes$PagedBytesDataInput);

        class t_PagedBytes$PagedBytesDataInput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataInput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
