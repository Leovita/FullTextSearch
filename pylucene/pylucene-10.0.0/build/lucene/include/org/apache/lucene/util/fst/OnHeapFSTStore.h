#ifndef org_apache_lucene_util_fst_OnHeapFSTStore_H
#define org_apache_lucene_util_fst_OnHeapFSTStore_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FSTReader;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class OnHeapFSTStore : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d229516c0564de47,
              mid_getReverseBytesReader_14e8f9e66b6f303e,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_writeTo_3a071e25ad99bd99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OnHeapFSTStore(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OnHeapFSTStore(const OnHeapFSTStore& obj) : ::java::lang::Object(obj) {}

            OnHeapFSTStore(jint, const ::org::apache::lucene::store::DataInput &, jlong);

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
            jlong ramBytesUsed() const;
            void writeTo(const ::org::apache::lucene::store::DataOutput &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(OnHeapFSTStore);
          extern PyTypeObject *PY_TYPE(OnHeapFSTStore);

          class t_OnHeapFSTStore {
          public:
            PyObject_HEAD
            OnHeapFSTStore object;
            static PyObject *wrap_Object(const OnHeapFSTStore&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
