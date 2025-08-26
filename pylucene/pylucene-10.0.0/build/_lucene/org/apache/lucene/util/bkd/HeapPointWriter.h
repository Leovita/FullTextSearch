#ifndef org_apache_lucene_util_bkd_HeapPointWriter_H
#define org_apache_lucene_util_bkd_HeapPointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointValue;
          class BKDConfig;
          class PointWriter;
          class PointReader;
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
              mid_init$_35bc81aaa1657bc9,
              mid_append_e75111edd8888b9b,
              mid_append_31e2e931f3bb1000,
              mid_close_e7bdbe105ce1bafb,
              mid_computeCardinality_22e5797eda5b5877,
              mid_count_0f176418e3e16541,
              mid_destroy_e7bdbe105ce1bafb,
              mid_getPackedValueSlice_066efb1af8609795,
              mid_getReader_e114ec76679aa7f3,
              mid_toString_e7df854526d67fa3,
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
