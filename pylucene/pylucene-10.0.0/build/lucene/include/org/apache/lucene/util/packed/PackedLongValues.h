#ifndef org_apache_lucene_util_packed_PackedLongValues_H
#define org_apache_lucene_util_packed_PackedLongValues_H

#include "org/apache/lucene/util/LongValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedLongValues$Builder;
          class PackedLongValues$Iterator;
        }
        class Accountable;
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
        namespace packed {

          class PackedLongValues : public ::org::apache::lucene::util::LongValues {
           public:
            enum {
              mid_deltaPackedBuilder_2450678ff81ec0a0,
              mid_deltaPackedBuilder_2227f24b41799c8f,
              mid_get_91d66fa3ea476cea,
              mid_iterator_bf1b1a992388e72a,
              mid_monotonicBuilder_2450678ff81ec0a0,
              mid_monotonicBuilder_2227f24b41799c8f,
              mid_packedBuilder_2450678ff81ec0a0,
              mid_packedBuilder_2227f24b41799c8f,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_size_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedLongValues(jobject obj) : ::org::apache::lucene::util::LongValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedLongValues(const PackedLongValues& obj) : ::org::apache::lucene::util::LongValues(obj) {}

            static jint DEFAULT_PAGE_SIZE;

            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder deltaPackedBuilder(jint, jfloat);
            jlong get(jlong) const;
            ::org::apache::lucene::util::packed::PackedLongValues$Iterator iterator() const;
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder monotonicBuilder(jint, jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jfloat);
            static ::org::apache::lucene::util::packed::PackedLongValues$Builder packedBuilder(jint, jfloat);
            jlong ramBytesUsed() const;
            jlong size() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedLongValues);
          extern PyTypeObject *PY_TYPE(PackedLongValues);

          class t_PackedLongValues {
          public:
            PyObject_HEAD
            PackedLongValues object;
            static PyObject *wrap_Object(const PackedLongValues&);
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
