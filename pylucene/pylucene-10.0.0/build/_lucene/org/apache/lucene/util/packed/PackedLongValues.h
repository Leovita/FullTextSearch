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
              mid_deltaPackedBuilder_b0fa622b86f470ca,
              mid_deltaPackedBuilder_1531c498389174c2,
              mid_get_3dc1c6e3a5a0baf0,
              mid_iterator_843b8aa51c30b45e,
              mid_monotonicBuilder_b0fa622b86f470ca,
              mid_monotonicBuilder_1531c498389174c2,
              mid_packedBuilder_b0fa622b86f470ca,
              mid_packedBuilder_1531c498389174c2,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_size_0f176418e3e16541,
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
