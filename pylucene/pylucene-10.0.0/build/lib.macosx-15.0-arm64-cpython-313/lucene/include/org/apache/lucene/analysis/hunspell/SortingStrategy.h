#ifndef org_apache_lucene_analysis_hunspell_SortingStrategy_H
#define org_apache_lucene_analysis_hunspell_SortingStrategy_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class SortingStrategy;
        }
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
      namespace analysis {
        namespace hunspell {

          class SortingStrategy : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_inMemory_136005e14209113d,
              mid_offline_bfa38c37a71974c2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortingStrategy(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortingStrategy(const SortingStrategy& obj) : ::java::lang::Object(obj) {}

            SortingStrategy();

            static SortingStrategy inMemory();
            static SortingStrategy offline(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(SortingStrategy);
          extern PyTypeObject *PY_TYPE(SortingStrategy);

          class t_SortingStrategy {
          public:
            PyObject_HEAD
            SortingStrategy object;
            static PyObject *wrap_Object(const SortingStrategy&);
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
