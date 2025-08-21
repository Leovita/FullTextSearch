#ifndef org_apache_lucene_index_memory_MemoryIndex_H
#define org_apache_lucene_index_memory_MemoryIndex_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace similarities {
          class Similarity;
        }
        class IndexSearcher;
      }
      namespace index {
        class IndexableField;
        namespace memory {
          class MemoryIndex;
        }
      }
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_init$_c485d474c3ac8ca0,
              mid_addField_5300007aee41849a,
              mid_addField_8d7e516a07e3462a,
              mid_addField_1e0e23976df36509,
              mid_addField_da890baf8104419b,
              mid_addField_070d56197b28bb4d,
              mid_createSearcher_8c9a1e527c2e5a94,
              mid_freeze_3720c61b0679eb3e,
              mid_fromDocument_74de683bdc1c2846,
              mid_fromDocument_82a52930d010889d,
              mid_fromDocument_3ccdda35375abed3,
              mid_keywordTokenStream_470a4c25304f0747,
              mid_reset_3720c61b0679eb3e,
              mid_search_49adda0d5a704396,
              mid_setSimilarity_8ae0f58eeda358f3,
              mid_toStringDebug_09a7afff1868fc5e,
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
