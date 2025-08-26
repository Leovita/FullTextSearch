#ifndef org_apache_lucene_util_bkd_PointWriter_H
#define org_apache_lucene_util_bkd_PointWriter_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointValue;
          class PointReader;
        }
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
        namespace bkd {

          class PointWriter : public ::java::io::Closeable {
           public:
            enum {
              mid_append_e75111edd8888b9b,
              mid_append_31e2e931f3bb1000,
              mid_count_0f176418e3e16541,
              mid_destroy_e7bdbe105ce1bafb,
              mid_getReader_e114ec76679aa7f3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PointWriter(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PointWriter(const PointWriter& obj) : ::java::io::Closeable(obj) {}

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            jlong count() const;
            void destroy() const;
            ::org::apache::lucene::util::bkd::PointReader getReader(jlong, jlong) const;
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
          extern PyType_Def PY_TYPE_DEF(PointWriter);
          extern PyTypeObject *PY_TYPE(PointWriter);

          class t_PointWriter {
          public:
            PyObject_HEAD
            PointWriter object;
            static PyObject *wrap_Object(const PointWriter&);
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
