#ifndef org_apache_lucene_search_suggest_BufferedInputIterator_H
#define org_apache_lucene_search_suggest_BufferedInputIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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

          class BufferedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ccfc0be4d7c5ce8c,
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

            explicit BufferedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BufferedInputIterator(const BufferedInputIterator& obj) : ::java::lang::Object(obj) {}

            BufferedInputIterator(const ::org::apache::lucene::search::suggest::InputIterator &);

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
          extern PyType_Def PY_TYPE_DEF(BufferedInputIterator);
          extern PyTypeObject *PY_TYPE(BufferedInputIterator);

          class t_BufferedInputIterator {
          public:
            PyObject_HEAD
            BufferedInputIterator object;
            static PyObject *wrap_Object(const BufferedInputIterator&);
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
