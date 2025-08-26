#ifndef org_apache_lucene_util_packed_GrowableWriter_H
#define org_apache_lucene_util_packed_GrowableWriter_H

#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class GrowableWriter;
        }
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

          class GrowableWriter : public ::org::apache::lucene::util::packed::PackedInts$Mutable {
           public:
            enum {
              mid_init$_637d040f0f81bc84,
              mid_clear_e7bdbe105ce1bafb,
              mid_fill_ee45698dad8106c5,
              mid_get_49af390f180d8ee7,
              mid_get_bee5a5809f1f577a,
              mid_getBitsPerValue_bd89ce15dad49192,
              mid_getMutable_6c055bc9c5882b3a,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_resize_2f11bdfe0d611dea,
              mid_set_1d43622e571bd043,
              mid_set_bee5a5809f1f577a,
              mid_size_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GrowableWriter(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GrowableWriter(const GrowableWriter& obj) : ::org::apache::lucene::util::packed::PackedInts$Mutable(obj) {}

            GrowableWriter(jint, jint, jfloat);

            void clear() const;
            void fill(jint, jint, jlong) const;
            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint getBitsPerValue() const;
            ::org::apache::lucene::util::packed::PackedInts$Mutable getMutable() const;
            jlong ramBytesUsed() const;
            GrowableWriter resize(jint) const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(GrowableWriter);
          extern PyTypeObject *PY_TYPE(GrowableWriter);

          class t_GrowableWriter {
          public:
            PyObject_HEAD
            GrowableWriter object;
            static PyObject *wrap_Object(const GrowableWriter&);
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
