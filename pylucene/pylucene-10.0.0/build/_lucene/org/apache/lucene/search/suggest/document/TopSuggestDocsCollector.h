#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        namespace suggest {
          namespace document {
            class TopSuggestDocs;
          }
        }
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
    class CharSequence;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {

            class TopSuggestDocsCollector : public ::org::apache::lucene::search::SimpleCollector {
             public:
              enum {
                mid_init$_a0fed0a2cd38e7b1,
                mid_collect_8226bd0b0fc13dba,
                mid_collect_4670c85a1c2acfe7,
                mid_finish_e7bdbe105ce1bafb,
                mid_get_e8c353f1ef5d7ca4,
                mid_getCountToCollect_bd89ce15dad49192,
                mid_scoreMode_23e7061dcdc84768,
                mid_doSkipDuplicates_9aa4f33e82ea333f,
                mid_doSetNextReader_32243afefe6b151f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TopSuggestDocsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TopSuggestDocsCollector(const TopSuggestDocsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

              TopSuggestDocsCollector(jint, jboolean);

              void collect(jint) const;
              void collect(jint, const ::java::lang::CharSequence &, const ::java::lang::CharSequence &, jfloat) const;
              void finish() const;
              ::org::apache::lucene::search::suggest::document::TopSuggestDocs get() const;
              jint getCountToCollect() const;
              ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
            extern PyType_Def PY_TYPE_DEF(TopSuggestDocsCollector);
            extern PyTypeObject *PY_TYPE(TopSuggestDocsCollector);

            class t_TopSuggestDocsCollector {
            public:
              PyObject_HEAD
              TopSuggestDocsCollector object;
              static PyObject *wrap_Object(const TopSuggestDocsCollector&);
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
