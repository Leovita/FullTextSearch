#ifndef org_apache_lucene_util_bkd_BKDWriter_H
#define org_apache_lucene_util_bkd_BKDWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
      }
      namespace codecs {
        class MutablePointTree;
      }
      namespace index {
        class MergeState$DocMap;
        class PointValues;
      }
      namespace util {
        namespace bkd {
          class BKDConfig;
        }
        class IORunnable;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_eeadacc53950c32a,
              mid_add_31e2e931f3bb1000,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_d51fb924004f107e,
              mid_merge_5f5005a2a90d056b,
              mid_writeField_6db2302974fc75ca,
              mid_split_9b5ff09b66312e3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDWriter(const BKDWriter& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *CODEC_NAME;
            static jfloat DEFAULT_MAX_MB_SORT_IN_HEAP;
            static jint VERSION_CURRENT;
            static jint VERSION_LEAF_STORES_BOUNDS;
            static jint VERSION_LOW_CARDINALITY_LEAVES;
            static jint VERSION_META_FILE;
            static jint VERSION_SELECTIVE_INDEXING;
            static jint VERSION_START;

            BKDWriter(jint, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::util::bkd::BKDConfig &, jdouble, jlong);

            void add(const JArray< jbyte > &, jint) const;
            void close() const;
            ::org::apache::lucene::util::IORunnable finish(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &) const;
            ::org::apache::lucene::util::IORunnable merge(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::java::util::List &, const ::java::util::List &) const;
            ::org::apache::lucene::util::IORunnable writeField(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, const ::java::lang::String &, const ::org::apache::lucene::codecs::MutablePointTree &) const;
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
          extern PyType_Def PY_TYPE_DEF(BKDWriter);
          extern PyTypeObject *PY_TYPE(BKDWriter);

          class t_BKDWriter {
          public:
            PyObject_HEAD
            BKDWriter object;
            static PyObject *wrap_Object(const BKDWriter&);
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
