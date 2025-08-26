#ifndef org_apache_lucene_search_suggest_InputIterator_H
#define org_apache_lucene_search_suggest_InputIterator_H

#include "org/apache/lucene/util/BytesRefIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class InputIterator;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class InputIterator : public ::org::apache::lucene::util::BytesRefIterator {
           public:
            enum {
              mid_contexts_79131c6bbcf08916,
              mid_hasContexts_9aa4f33e82ea333f,
              mid_hasPayloads_9aa4f33e82ea333f,
              mid_payload_adbedbc1fa61c358,
              mid_weight_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InputIterator(jobject obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InputIterator(const InputIterator& obj) : ::org::apache::lucene::util::BytesRefIterator(obj) {}

            static InputIterator *EMPTY;

            ::java::util::Set contexts() const;
            jboolean hasContexts() const;
            jboolean hasPayloads() const;
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
          extern PyType_Def PY_TYPE_DEF(InputIterator);
          extern PyTypeObject *PY_TYPE(InputIterator);

          class t_InputIterator {
          public:
            PyObject_HEAD
            InputIterator object;
            static PyObject *wrap_Object(const InputIterator&);
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
