#ifndef org_apache_lucene_index_memory_MemoryIndex_H
#define org_apache_lucene_index_memory_MemoryIndex_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Iterable;
  }
  namespace util {
    class Collection;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Query;
        class IndexSearcher;
      }
      namespace index {
        class IndexableField;
        namespace memory {
          class MemoryIndex;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {

          class MemoryIndex : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_init$_625f7a21e54cb1c3,
              mid_addField_695328e8af0f010c,
              mid_addField_9add7da5a6d073de,
              mid_addField_497f620d1c2af58a,
              mid_addField_e8c46cf1ae504637,
              mid_addField_3330adae8a2603bd,
              mid_createSearcher_b5872e6ced4699df,
              mid_freeze_e7bdbe105ce1bafb,
              mid_fromDocument_6c0043d47509958d,
              mid_fromDocument_792c5f19f6df0ee6,
              mid_fromDocument_2111a74b48ee7620,
              mid_keywordTokenStream_d4664abf3ecd2ecd,
              mid_reset_e7bdbe105ce1bafb,
              mid_search_513101d4b8185212,
              mid_setSimilarity_0ad3b8cdfb835d9f,
              mid_toStringDebug_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MemoryIndex(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MemoryIndex(const MemoryIndex& obj) : ::java::lang::Object(obj) {}

            MemoryIndex();
            MemoryIndex(jboolean);
            MemoryIndex(jboolean, jboolean);

            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
            void addField(const ::org::apache::lucene::index::IndexableField &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint) const;
            void addField(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &) const;
            void addField(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, jint, jint) const;
            ::org::apache::lucene::search::IndexSearcher createSearcher() const;
            void freeze() const;
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean);
            static MemoryIndex fromDocument(const ::java::lang::Iterable &, const ::org::apache::lucene::analysis::Analyzer &, jboolean, jboolean, jlong);
            ::org::apache::lucene::analysis::TokenStream keywordTokenStream(const ::java::util::Collection &) const;
            void reset() const;
            jfloat search(const ::org::apache::lucene::search::Query &) const;
            void setSimilarity(const ::org::apache::lucene::search::similarities::Similarity &) const;
            ::java::lang::String toStringDebug() const;
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
      namespace index {
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(MemoryIndex);
          extern PyTypeObject *PY_TYPE(MemoryIndex);

          class t_MemoryIndex {
          public:
            PyObject_HEAD
            MemoryIndex object;
            static PyObject *wrap_Object(const MemoryIndex&);
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
