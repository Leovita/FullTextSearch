#ifndef org_apache_lucene_misc_index_IndexRearranger_H
#define org_apache_lucene_misc_index_IndexRearranger_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace misc {
        namespace index {
          class IndexRearranger$DocumentSelector;
        }
      }
      namespace index {
        class IndexWriterConfig;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Exception;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {

          class IndexRearranger : public ::java::lang::Object {
           public:
            enum {
              mid_init$_910772d683de682f,
              mid_init$_7f81c986dd488c74,
              mid_execute_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexRearranger(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexRearranger(const IndexRearranger& obj) : ::java::lang::Object(obj) {}

            IndexRearranger(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::java::util::List &);
            IndexRearranger(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::java::util::List &, const ::org::apache::lucene::misc::index::IndexRearranger$DocumentSelector &);

            void execute() const;
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
          extern PyType_Def PY_TYPE_DEF(IndexRearranger);
          extern PyTypeObject *PY_TYPE(IndexRearranger);

          class t_IndexRearranger {
          public:
            PyObject_HEAD
            IndexRearranger object;
            static PyObject *wrap_Object(const IndexRearranger&);
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
