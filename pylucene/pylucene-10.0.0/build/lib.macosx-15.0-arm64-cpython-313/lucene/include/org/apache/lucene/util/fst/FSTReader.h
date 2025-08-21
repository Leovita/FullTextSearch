#ifndef org_apache_lucene_util_fst_FSTReader_H
#define org_apache_lucene_util_fst_FSTReader_H

#include "org/apache/lucene/util/Accountable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$BytesReader;
        }
      }
      namespace store {
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

          class FSTReader : public ::org::apache::lucene::util::Accountable {
           public:
            enum {
              mid_getReverseBytesReader_14e8f9e66b6f303e,
              mid_writeTo_3a071e25ad99bd99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTReader(jobject obj) : ::org::apache::lucene::util::Accountable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTReader(const FSTReader& obj) : ::org::apache::lucene::util::Accountable(obj) {}

            ::org::apache::lucene::util::fst::FST$BytesReader getReverseBytesReader() const;
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
          extern PyType_Def PY_TYPE_DEF(FSTReader);
          extern PyTypeObject *PY_TYPE(FSTReader);

          class t_FSTReader {
          public:
            PyObject_HEAD
            FSTReader object;
            static PyObject *wrap_Object(const FSTReader&);
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
