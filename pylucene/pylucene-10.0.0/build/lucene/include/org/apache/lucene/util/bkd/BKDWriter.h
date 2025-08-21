#ifndef org_apache_lucene_util_bkd_BKDWriter_H
#define org_apache_lucene_util_bkd_BKDWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues;
        class MergeState$DocMap;
      }
      namespace store {
        class IndexOutput;
        class Directory;
      }
      namespace util {
        namespace bkd {
          class BKDConfig;
        }
        class IORunnable;
      }
      namespace codecs {
        class MutablePointTree;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
              mid_init$_ea7238813afc584b,
              mid_add_3f6ea74fc0096aaa,
              mid_close_3720c61b0679eb3e,
              mid_finish_039144d253ab17fb,
              mid_merge_d637142b1fb44221,
              mid_writeField_1e4db9bdf7ccbb3c,
              mid_split_9e5d494134e7334a,
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
