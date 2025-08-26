#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {
          class LegacyDirectMonotonicReader;
          class LegacyDirectMonotonicReader$Meta;
        }
      }
      namespace store {
        class RandomAccessInput;
        class IndexInput;
      }
      namespace util {
        class Accountable;
      }
    }
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
              mid_binarySearch_53da2e1f0169db0c,
              mid_get_3dc1c6e3a5a0baf0,
              mid_getInstance_2ce5ea8a3d5e33c5,
              mid_loadMeta_7e8942f28bab26f2,
              mid_ramBytesUsed_0f176418e3e16541,
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
