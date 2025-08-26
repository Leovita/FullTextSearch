#ifndef org_apache_lucene_internal_hppc_LongIntHashMap$KeysContainer_H
#define org_apache_lucene_internal_hppc_LongIntHashMap$KeysContainer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class Iterable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {
          class LongIntHashMap;
          class LongCursor;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {

          class LongIntHashMap$KeysContainer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8517b9fc92e866fe,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_toArray_1aab5293a9d94cd3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongIntHashMap$KeysContainer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongIntHashMap$KeysContainer(const LongIntHashMap$KeysContainer& obj) : ::java::lang::Object(obj) {}

            LongIntHashMap$KeysContainer(const ::org::apache::lucene::internal::hppc::LongIntHashMap &);

            ::java::util::Iterator iterator() const;
            jint size() const;
            JArray< jlong > toArray() const;
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
      namespace internal {
        namespace hppc {
          extern PyType_Def PY_TYPE_DEF(LongIntHashMap$KeysContainer);
          extern PyTypeObject *PY_TYPE(LongIntHashMap$KeysContainer);

          class t_LongIntHashMap$KeysContainer {
          public:
            PyObject_HEAD
            LongIntHashMap$KeysContainer object;
            static PyObject *wrap_Object(const LongIntHashMap$KeysContainer&);
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
