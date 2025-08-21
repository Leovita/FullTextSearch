#ifndef org_apache_lucene_util_fst_OffHeapFSTStore_H
#define org_apache_lucene_util_fst_OffHeapFSTStore_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
          class FSTReader;
          class FST$FSTMetadata;
        }
      }
      namespace store {
        class IndexInput;
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

          class OffHeapFSTStore : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4e4c52c2c21b1347,
              mid_getReverseBytesReader_14e8f9e66b6f303e,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_size_16939d9d0a9a9721,
              mid_writeTo_3a071e25ad99bd99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffHeapFSTStore(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffHeapFSTStore(const OffHeapFSTStore& obj) : ::java::lang::Object(obj) {}

            OffHeapFSTStore(const ::org::apache::lucene::store::IndexInput &, jlong, const ::org::apache::lucene::util::fst::FST$FSTMetadata &);

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
            jlong ramBytesUsed() const;
            jlong size() const;
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
          extern PyType_Def PY_TYPE_DEF(OffHeapFSTStore);
          extern PyTypeObject *PY_TYPE(OffHeapFSTStore);

          class t_OffHeapFSTStore {
          public:
            PyObject_HEAD
            OffHeapFSTStore object;
            static PyObject *wrap_Object(const OffHeapFSTStore&);
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
