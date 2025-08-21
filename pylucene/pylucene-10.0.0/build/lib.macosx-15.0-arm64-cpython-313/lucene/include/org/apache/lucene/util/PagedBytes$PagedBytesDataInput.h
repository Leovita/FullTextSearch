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
            mid_clone_18c2b2e0cc045a79,
            mid_getPosition_16939d9d0a9a9721,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_setPosition_8b3d46852b435a94,
            mid_skipBytes_8b3d46852b435a94,
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
