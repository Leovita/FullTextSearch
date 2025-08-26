#ifndef org_apache_lucene_search_suggest_SortedInputIterator_H
#define org_apache_lucene_search_suggest_SortedInputIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Comparator;
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class SortedInputIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7793bb2956618377,
              mid_init$_ace9f84460b86fcb,
              mid_contexts_79131c6bbcf08916,
              mid_hasContexts_9aa4f33e82ea333f,
              mid_hasPayloads_9aa4f33e82ea333f,
              mid_next_adbedbc1fa61c358,
              mid_payload_adbedbc1fa61c358,
              mid_weight_0f176418e3e16541,
              mid_decodePayload_f532fe68d9b318a5,
              mid_decodeContexts_7ded067b86db171a,
              mid_decode_143b74fa9d0612d3,
              mid_encode_bbc2132f5b41ff3f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedInputIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedInputIterator(const SortedInputIterator& obj) : ::java::lang::Object(obj) {}

            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &);
            SortedInputIterator(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::search::suggest::InputIterator &, const ::java::util::Comparator &);

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
          extern PyType_Def PY_TYPE_DEF(SortedInputIterator);
          extern PyTypeObject *PY_TYPE(SortedInputIterator);

          class t_SortedInputIterator {
          public:
            PyObject_HEAD
            SortedInputIterator object;
            static PyObject *wrap_Object(const SortedInputIterator&);
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
