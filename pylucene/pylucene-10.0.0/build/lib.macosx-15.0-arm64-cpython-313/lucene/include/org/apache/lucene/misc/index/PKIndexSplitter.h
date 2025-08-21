#ifndef org_apache_lucene_misc_index_PKIndexSplitter_H
#define org_apache_lucene_misc_index_PKIndexSplitter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace index {
        class Term;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
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
      namespace misc {
        namespace index {

          class PKIndexSplitter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_53175fe22bb418d2,
              mid_init$_b6994c3c18b0cfa9,
              mid_init$_5f5ff7ba01ef36f0,
              mid_init$_aeda9aa0901c18b4,
              mid_split_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PKIndexSplitter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PKIndexSplitter(const PKIndexSplitter& obj) : ::java::lang::Object(obj) {}

            PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::Term &);
            PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::Query &);
            PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::org::apache::lucene::index::IndexWriterConfig &);
            PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::org::apache::lucene::index::IndexWriterConfig &);

            void split() const;
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
          extern PyType_Def PY_TYPE_DEF(PKIndexSplitter);
          extern PyTypeObject *PY_TYPE(PKIndexSplitter);

          class t_PKIndexSplitter {
          public:
            PyObject_HEAD
            PKIndexSplitter object;
            static PyObject *wrap_Object(const PKIndexSplitter&);
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
