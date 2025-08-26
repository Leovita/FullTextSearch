#ifndef org_apache_lucene_util_bkd_OfflinePointWriter_H
#define org_apache_lucene_util_bkd_OfflinePointWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
      }
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
              mid_init$_b2e97ddbaa0cc035,
              mid_append_e75111edd8888b9b,
              mid_append_31e2e931f3bb1000,
              mid_close_e7bdbe105ce1bafb,
              mid_count_0f176418e3e16541,
              mid_destroy_e7bdbe105ce1bafb,
              mid_getReader_e114ec76679aa7f3,
              mid_toString_e7df854526d67fa3,
              mid_getReader_55b04506d31e4e39,
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
