#ifndef org_apache_lucene_search_suggest_SortedInputIterator_H
#define org_apache_lucene_search_suggest_SortedInputIterator_H

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
    class String;
  }
  namespace util {
    class Set;
    class Comparator;
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
              mid_init$_5a80e19b6da9a632,
              mid_init$_2da4a5554b8d7591,
              mid_contexts_4df174295554d7bd,
              mid_hasContexts_947277eca0748c4e,
              mid_hasPayloads_947277eca0748c4e,
              mid_next_9740fddd1c7df148,
              mid_payload_9740fddd1c7df148,
              mid_weight_16939d9d0a9a9721,
              mid_decodePayload_4f0750ef14e50d15,
              mid_decodeContexts_516d4ca7e9b550ef,
              mid_decode_dabe770f590f2fae,
              mid_encode_8b3c6540b47104cd,
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
