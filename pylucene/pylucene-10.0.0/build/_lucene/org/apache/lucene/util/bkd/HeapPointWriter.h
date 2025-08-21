#ifndef org_apache_lucene_util_bkd_HeapPointWriter_H
#define org_apache_lucene_util_bkd_HeapPointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointReader;
          class BKDConfig;
          class PointValue;
          class PointWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class HeapPointWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_dab21c424c24d065,
              mid_append_1c8d41d2d27992fa,
              mid_append_3f6ea74fc0096aaa,
              mid_close_3720c61b0679eb3e,
              mid_computeCardinality_afa879432309a95b,
              mid_count_16939d9d0a9a9721,
              mid_destroy_3720c61b0679eb3e,
              mid_getPackedValueSlice_22d1a65383306618,
              mid_getReader_f1db140159383246,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointWriter(const HeapPointWriter& obj) : ::java::lang::Object(obj) {}

            HeapPointWriter(const ::org::apache::lucene::util::bkd::BKDConfig &, jint);

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            void close() const;
            jint computeCardinality(jint, jint, const JArray< jint > &) const;
            jlong count() const;
            void destroy() const;
            ::org::apache::lucene::util::bkd::PointValue getPackedValueSlice(jint) const;
            ::org::apache::lucene::util::bkd::PointReader getReader(jlong, jlong) const;
            ::java::lang::String toString() const;
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
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(HeapPointWriter);
          extern PyTypeObject *PY_TYPE(HeapPointWriter);

          class t_HeapPointWriter {
          public:
            PyObject_HEAD
            HeapPointWriter object;
            static PyObject *wrap_Object(const HeapPointWriter&);
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
