#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
        class DataOutput;
        class Directory;
      }
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class List;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class AnalyzingSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_a21c6acd6482f326,
                mid_init$_75b18e54baa1205d,
                mid_init$_167d5d2d21ec5b42,
                mid_build_ccfc0be4d7c5ce8c,
                mid_get_84780732a28a9438,
                mid_getChildResources_aa58b3beec16cbbd,
                mid_getCount_16939d9d0a9a9721,
                mid_load_cc655a2984ac0be1,
                mid_lookup_51465de8e2d90cbd,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_store_0269cfd2080fde14,
                mid_convertAutomaton_c6f90dfe8bea6705,
                mid_getFullPrefixPaths_29a2a8ce6ded5b72,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingSuggester(const AnalyzingSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jint EXACT_FIRST;
              static jint PRESERVE_SEP;

              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingSuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jint, jint, jboolean);

              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              ::java::lang::Object get(const ::java::lang::CharSequence &) const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              jlong ramBytesUsed() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
            };
          }
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
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(AnalyzingSuggester);
            extern PyTypeObject *PY_TYPE(AnalyzingSuggester);

            class t_AnalyzingSuggester {
            public:
              PyObject_HEAD
              AnalyzingSuggester object;
              static PyObject *wrap_Object(const AnalyzingSuggester&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
