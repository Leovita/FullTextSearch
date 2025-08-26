#ifndef org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H
#define org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/PrefixCompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class IndexSearcher;
        namespace suggest {
          class BitsProducer;
        }
        class Weight;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace index {
        class Term;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class FuzzyCompletionQuery : public ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery {
             public:
              enum {
                mid_init$_b64ffd8a29c180ba,
                mid_init$_71dea2287eaa102e,
                mid_init$_24a361179c94f13e,
                mid_createWeight_dc54d493278607e4,
                mid_getDeterminizeWorkLimit_bd89ce15dad49192,
                mid_getMaxEdits_bd89ce15dad49192,
                mid_getMinFuzzyLength_bd89ce15dad49192,
                mid_getNonFuzzyPrefix_bd89ce15dad49192,
                mid_isTranspositions_9aa4f33e82ea333f,
                mid_isUnicodeAware_9aa4f33e82ea333f,
                mid_toString_fef9c036acf290a9,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FuzzyCompletionQuery(jobject obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FuzzyCompletionQuery(const FuzzyCompletionQuery& obj) : ::org::apache::lucene::search::suggest::document::PrefixCompletionQuery(obj) {}

              static jint DEFAULT_MAX_EDITS;
              static jint DEFAULT_MIN_FUZZY_LENGTH;
              static jint DEFAULT_NON_FUZZY_PREFIX;
              static jboolean DEFAULT_TRANSPOSITIONS;
              static jboolean DEFAULT_UNICODE_AWARE;

              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &);
              FuzzyCompletionQuery(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::suggest::BitsProducer &, jint, jboolean, jint, jint, jboolean, jint);

              ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
              jint getDeterminizeWorkLimit() const;
              jint getMaxEdits() const;
              jint getMinFuzzyLength() const;
              jint getNonFuzzyPrefix() const;
              jboolean isTranspositions() const;
              jboolean isUnicodeAware() const;
              ::java::lang::String toString(const ::java::lang::String &) const;
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
          namespace document {
            extern PyType_Def PY_TYPE_DEF(FuzzyCompletionQuery);
            extern PyTypeObject *PY_TYPE(FuzzyCompletionQuery);

            class t_FuzzyCompletionQuery {
            public:
              PyObject_HEAD
              FuzzyCompletionQuery object;
              static PyObject *wrap_Object(const FuzzyCompletionQuery&);
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
