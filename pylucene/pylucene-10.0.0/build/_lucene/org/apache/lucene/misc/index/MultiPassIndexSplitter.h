#ifndef org_apache_lucene_misc_index_MultiPassIndexSplitter_H
#define org_apache_lucene_misc_index_MultiPassIndexSplitter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Exception;
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
      namespace misc {
        namespace index {

          class MultiPassIndexSplitter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_main_1f90f2fcbe43e50d,
              mid_split_89339c2e898b7731,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiPassIndexSplitter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiPassIndexSplitter(const MultiPassIndexSplitter& obj) : ::java::lang::Object(obj) {}

            MultiPassIndexSplitter();

            static void main(const JArray< ::java::lang::String > &);
            void split(const ::org::apache::lucene::index::IndexReader &, const JArray< ::org::apache::lucene::store::Directory > &, jboolean) const;
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
          extern PyType_Def PY_TYPE_DEF(MultiPassIndexSplitter);
          extern PyTypeObject *PY_TYPE(MultiPassIndexSplitter);

          class t_MultiPassIndexSplitter {
          public:
            PyObject_HEAD
            MultiPassIndexSplitter object;
            static PyObject *wrap_Object(const MultiPassIndexSplitter&);
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
