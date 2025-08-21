#ifndef org_apache_lucene_util_packed_DirectMonotonicReader_H
#define org_apache_lucene_util_packed_DirectMonotonicReader_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class DirectMonotonicReader;
          class DirectMonotonicReader$Meta;
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
      namespace util {
        namespace packed {

          class DirectMonotonicReader : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_binarySearch_e53f2b2f457f4ad3,
              mid_get_91d66fa3ea476cea,
              mid_getInstance_ad3a89173e360c14,
              mid_getInstance_20da537c3d157b19,
              mid_loadMeta_10e6ce1ace237461,
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
