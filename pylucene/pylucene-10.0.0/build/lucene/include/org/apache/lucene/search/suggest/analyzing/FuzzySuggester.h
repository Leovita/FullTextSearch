#ifndef org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H
#define org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingSuggester.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class Directory;
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
          namespace analyzing {

            class FuzzySuggester : public ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester {
             public:
              enum {
                mid_init$_a21c6acd6482f326,
                mid_init$_75b18e54baa1205d,
                mid_init$_a21fc344747acae1,
                mid_convertAutomaton_c6f90dfe8bea6705,
                mid_getFullPrefixPaths_29a2a8ce6ded5b72,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FuzzySuggester(jobject obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FuzzySuggester(const FuzzySuggester& obj) : ::org::apache::lucene::search::suggest::analyzing::AnalyzingSuggester(obj) {}

              static jint DEFAULT_MAX_EDITS;
              static jint DEFAULT_MIN_FUZZY_LENGTH;
              static jint DEFAULT_NON_FUZZY_PREFIX;
              static jboolean DEFAULT_TRANSPOSITIONS;
              static jboolean DEFAULT_UNICODE_AWARE;

              FuzzySuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
              FuzzySuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &);
              FuzzySuggester(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jint, jint, jboolean, jint, jboolean, jint, jint, jboolean);
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
            extern PyType_Def PY_TYPE_DEF(FuzzySuggester);
            extern PyTypeObject *PY_TYPE(FuzzySuggester);

            class t_FuzzySuggester {
            public:
              PyObject_HEAD
              FuzzySuggester object;
              static PyObject *wrap_Object(const FuzzySuggester&);
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
