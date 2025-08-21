#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace backward_codecs {
        namespace packed {
          class LegacyDirectMonotonicReader$Meta;
          class LegacyDirectMonotonicReader;
        }
      }
      namespace store {
        class IndexInput;
        class RandomAccessInput;
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
      namespace backward_codecs {
        namespace packed {

          class LegacyDirectMonotonicReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_binarySearch_e53f2b2f457f4ad3,
              mid_get_91d66fa3ea476cea,
              mid_getInstance_11bba6f36d681cf5,
              mid_loadMeta_969541fd536044c9,
              mid_ramBytesUsed_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectMonotonicReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectMonotonicReader(const LegacyDirectMonotonicReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong binarySearch(jlong, jlong, jlong) const;
            jlong get(jlong) const;
            static LegacyDirectMonotonicReader getInstance(const ::org::apache::lucene::backward_codecs::packed::LegacyDirectMonotonicReader$Meta &, const ::org::apache::lucene::store::RandomAccessInput &);
            static ::org::apache::lucene::backward_codecs::packed::LegacyDirectMonotonicReader$Meta loadMeta(const ::org::apache::lucene::store::IndexInput &, jlong, jint);
            jlong ramBytesUsed() const;
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
      namespace backward_codecs {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(LegacyDirectMonotonicReader);
          extern PyTypeObject *PY_TYPE(LegacyDirectMonotonicReader);

          class t_LegacyDirectMonotonicReader {
          public:
            PyObject_HEAD
            LegacyDirectMonotonicReader object;
            static PyObject *wrap_Object(const LegacyDirectMonotonicReader&);
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
