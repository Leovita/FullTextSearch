#ifndef org_apache_lucene_misc_index_BPIndexReorderer_H
#define org_apache_lucene_misc_index_BPIndexReorderer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
    namespace concurrent {
      class Executor;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Sorter$DocMap;
        class CodecReader;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class BPIndexReorderer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_computeDocMap_98d323a015ab4355,
              mid_reorder_404c74191f6c3d22,
              mid_setFields_1d5d4c6f11d1b2ab,
              mid_setMaxDocFreq_c771a95b0227fb6a,
              mid_setMaxIters_540b2b23d51b1efd,
              mid_setMinDocFreq_540b2b23d51b1efd,
              mid_setMinPartitionSize_540b2b23d51b1efd,
              mid_setRAMBudgetMB_b5bc1a2fb9ff9e90,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BPIndexReorderer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BPIndexReorderer(const BPIndexReorderer& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_ITERS;
            static jint DEFAULT_MIN_DOC_FREQ;
            static jint DEFAULT_MIN_PARTITION_SIZE;

            BPIndexReorderer();

            ::org::apache::lucene::index::Sorter$DocMap computeDocMap(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::store::Directory &, const ::java::util::concurrent::Executor &) const;
            ::org::apache::lucene::index::CodecReader reorder(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::store::Directory &, const ::java::util::concurrent::Executor &) const;
            void setFields(const ::java::util::Set &) const;
            void setMaxDocFreq(jfloat) const;
            void setMaxIters(jint) const;
            void setMinDocFreq(jint) const;
            void setMinPartitionSize(jint) const;
            void setRAMBudgetMB(jdouble) const;
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
      namespace misc {
        namespace index {
          extern PyType_Def PY_TYPE_DEF(BPIndexReorderer);
          extern PyTypeObject *PY_TYPE(BPIndexReorderer);

          class t_BPIndexReorderer {
          public:
            PyObject_HEAD
            BPIndexReorderer object;
            static PyObject *wrap_Object(const BPIndexReorderer&);
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
