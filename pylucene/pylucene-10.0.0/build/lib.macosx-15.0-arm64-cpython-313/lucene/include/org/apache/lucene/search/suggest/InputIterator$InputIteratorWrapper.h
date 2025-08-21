#ifndef org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H
#define org_apache_lucene_search_suggest_InputIterator$InputIteratorWrapper_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefIterator;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
        }
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
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class InputIterator$InputIteratorWrapper : public ::java::lang::Object {
           public:
            enum {
              mid_init$_23ee0d4ff5a62e64,
              mid_contexts_4df174295554d7bd,
              mid_hasContexts_947277eca0748c4e,
              mid_hasPayloads_947277eca0748c4e,
              mid_next_9740fddd1c7df148,
              mid_payload_9740fddd1c7df148,
              mid_weight_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator$InputIteratorWrapper(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputIterator$InputIteratorWrapper(const InputIterator$InputIteratorWrapper& obj) : ::java::lang::Object(obj) {}

            InputIterator$InputIteratorWrapper(const ::org::apache::lucene::util::BytesRefIterator &);

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::util::BytesRef payload() const;
            jlong weight() const;
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
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(InputIterator$InputIteratorWrapper);
          extern PyTypeObject *PY_TYPE(InputIterator$InputIteratorWrapper);

          class t_InputIterator$InputIteratorWrapper {
          public:
            PyObject_HEAD
            InputIterator$InputIteratorWrapper object;
            static PyObject *wrap_Object(const InputIterator$InputIteratorWrapper&);
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
