#ifndef org_apache_lucene_search_suggest_BufferedInputIterator_H
#define org_apache_lucene_search_suggest_BufferedInputIterator_H

#include "java/lang/Object.h"

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

          class BufferedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3b81cca33403847f,
              mid_contexts_79131c6bbcf08916,
              mid_hasContexts_9aa4f33e82ea333f,
              mid_hasPayloads_9aa4f33e82ea333f,
              mid_next_adbedbc1fa61c358,
              mid_payload_adbedbc1fa61c358,
              mid_weight_0f176418e3e16541,
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
