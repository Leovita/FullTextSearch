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
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
              mid_init$_8103d4cb225ef6c4,
              mid_getReverseBytesReader_541a60a9425cbcde,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_size_0f176418e3e16541,
              mid_writeTo_949eccaa2018a6dc,
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
