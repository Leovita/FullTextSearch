#ifndef org_apache_lucene_util_packed_DirectMonotonicReader_H
#define org_apache_lucene_util_packed_DirectMonotonicReader_H

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
      namespace store {
        class RandomAccessInput;
        class IndexInput;
      }
      namespace util {
        namespace packed {
          class DirectMonotonicReader;
          class DirectMonotonicReader$Meta;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class DirectMonotonicReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_binarySearch_53da2e1f0169db0c,
              mid_get_3dc1c6e3a5a0baf0,
              mid_getInstance_3851f91753524a0c,
              mid_getInstance_c2f87a0ae005973a,
              mid_loadMeta_0158aecb25178926,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectMonotonicReader(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectMonotonicReader(const DirectMonotonicReader& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            jlong binarySearch(jlong, jlong, jlong) const;
            jlong get(jlong) const;
            static DirectMonotonicReader getInstance(const ::org::apache::lucene::util::packed::DirectMonotonicReader$Meta &, const ::org::apache::lucene::store::RandomAccessInput &);
            static DirectMonotonicReader getInstance(const ::org::apache::lucene::util::packed::DirectMonotonicReader$Meta &, const ::org::apache::lucene::store::RandomAccessInput &, jboolean);
            static ::org::apache::lucene::util::packed::DirectMonotonicReader$Meta loadMeta(const ::org::apache::lucene::store::IndexInput &, jlong, jint);
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(DirectMonotonicReader);
          extern PyTypeObject *PY_TYPE(DirectMonotonicReader);

          class t_DirectMonotonicReader {
          public:
            PyObject_HEAD
            DirectMonotonicReader object;
            static PyObject *wrap_Object(const DirectMonotonicReader&);
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
