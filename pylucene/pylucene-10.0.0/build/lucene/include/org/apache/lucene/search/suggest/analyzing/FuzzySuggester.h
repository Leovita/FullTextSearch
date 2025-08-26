#ifndef org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H
#define org_apache_lucene_search_suggest_analyzing_FuzzySuggester_H

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingSuggester.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace analysis {
        class Analyzer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
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
                mid_init$_b51fcdbf9291521a,
                mid_init$_fa408feff6098e5e,
                mid_init$_67c8c22740927fe1,
                mid_convertAutomaton_3c5abe7c21896c57,
                mid_getFullPrefixPaths_d4a895b279eda4ce,
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
