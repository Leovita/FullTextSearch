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
              mid_init$_c891bbfbb935732a,
              mid_clear_3720c61b0679eb3e,
              mid_fill_d02046eceb4997f8,
              mid_get_7b22650fccb5d574,
              mid_get_be281815fcc98213,
              mid_getBitsPerValue_20fbf7565993c3d7,
              mid_getMutable_ca6b44e60afd9ceb,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_resize_098b0add26dbcc81,
              mid_set_52c53d6e59b40db2,
              mid_set_be281815fcc98213,
              mid_size_20fbf7565993c3d7,
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
