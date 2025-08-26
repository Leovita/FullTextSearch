#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocs_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocs_H

#include "org/apache/lucene/search/TopDocs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocs$SuggestScoreDoc;
            class TopSuggestDocs;
          }
        }
        class TotalHits;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class TopSuggestDocs : public ::org::apache::lucene::search::TopDocs {
             public:
              enum {
                mid_init$_2753d2aeabb4ecb9,
                mid_merge_249633fab7d4e2e4,
                mid_scoreLookupDocs_fafe531f6071d2af,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopSuggestDocs(jobject obj) : ::org::apache::lucene::search::TopDocs(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopSuggestDocs(const TopSuggestDocs& obj) : ::org::apache::lucene::search::TopDocs(obj) {}

              static TopSuggestDocs *EMPTY;

              TopSuggestDocs(const ::org::apache::lucene::search::TotalHits &, const JArray< ::org::apache::lucene::search::suggest::document::TopSuggestDocs$SuggestScoreDoc > &);

              static TopSuggestDocs merge(jint, const JArray< TopSuggestDocs > &);
              JArray< ::org::apache::lucene::search::suggest::document::TopSuggestDocs$SuggestScoreDoc > scoreLookupDocs() const;
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
            extern PyType_Def PY_TYPE_DEF(TopSuggestDocs);
            extern PyTypeObject *PY_TYPE(TopSuggestDocs);

            class t_TopSuggestDocs {
            public:
              PyObject_HEAD
              TopSuggestDocs object;
              static PyObject *wrap_Object(const TopSuggestDocs&);
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
