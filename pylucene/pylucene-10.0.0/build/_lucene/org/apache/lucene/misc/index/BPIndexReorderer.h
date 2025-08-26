#ifndef org_apache_lucene_misc_index_BPIndexReorderer_H
#define org_apache_lucene_misc_index_BPIndexReorderer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class Sorter$DocMap;
        class CodecReader;
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
  namespace util {
    class Set;
    namespace concurrent {
      class Executor;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_computeDocMap_5f7456ece8b18a3b,
              mid_reorder_178312907231784c,
              mid_setFields_478519f7d4301fc7,
              mid_setMaxDocFreq_675f4cb9a2529ee0,
              mid_setMaxIters_8226bd0b0fc13dba,
              mid_setMinDocFreq_8226bd0b0fc13dba,
              mid_setMinPartitionSize_8226bd0b0fc13dba,
              mid_setRAMBudgetMB_a03f734ddaeb69b4,
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
