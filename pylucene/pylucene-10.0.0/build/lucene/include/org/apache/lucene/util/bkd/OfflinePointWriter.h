#ifndef org_apache_lucene_util_bkd_OfflinePointWriter_H
#define org_apache_lucene_util_bkd_OfflinePointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointReader;
          class PointValue;
          class BKDConfig;
          class PointWriter;
        }
      }
      namespace store {
        class IndexOutput;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class OfflinePointWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9fab772cf4065e65,
              mid_append_1c8d41d2d27992fa,
              mid_append_3f6ea74fc0096aaa,
              mid_close_3720c61b0679eb3e,
              mid_count_16939d9d0a9a9721,
              mid_destroy_3720c61b0679eb3e,
              mid_getReader_f1db140159383246,
              mid_toString_09a7afff1868fc5e,
              mid_getReader_df703acfa32b60ba,
              max_mid
            };

            enum {
              fid_name,
              fid_out,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OfflinePointWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OfflinePointWriter(const OfflinePointWriter& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String _get_name() const;
            ::org::apache::lucene::store::IndexOutput _get_out() const;

            OfflinePointWriter(const ::org::apache::lucene::util::bkd::BKDConfig &, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, jlong);

            void append(const ::org::apache::lucene::util::bkd::PointValue &) const;
            void append(const JArray< jbyte > &, jint) const;
            void close() const;
            jlong count() const;
            void destroy() const;
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
          extern PyType_Def PY_TYPE_DEF(OfflinePointWriter);
          extern PyTypeObject *PY_TYPE(OfflinePointWriter);

          class t_OfflinePointWriter {
          public:
            PyObject_HEAD
            OfflinePointWriter object;
            static PyObject *wrap_Object(const OfflinePointWriter&);
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
