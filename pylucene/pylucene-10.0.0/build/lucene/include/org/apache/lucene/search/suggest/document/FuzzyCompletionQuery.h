#ifndef org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H
#define org_apache_lucene_search_suggest_document_FuzzyCompletionQuery_H

#include "org/apache/lucene/search/suggest/document/PrefixCompletionQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class Weight;
        class ScoreMode;
        namespace suggest {
          class BitsProducer;
        }
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
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
                mid_init$_ac117cbb7133c263,
                mid_init$_c6aaa8bd6204b91d,
                mid_init$_f61b49ff068ad612,
                mid_createWeight_77fe52950093e704,
                mid_getDeterminizeWorkLimit_20fbf7565993c3d7,
                mid_getMaxEdits_20fbf7565993c3d7,
                mid_getMinFuzzyLength_20fbf7565993c3d7,
                mid_getNonFuzzyPrefix_20fbf7565993c3d7,
                mid_isTranspositions_947277eca0748c4e,
                mid_isUnicodeAware_947277eca0748c4e,
                mid_toString_cb0eb1432185fc94,
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
