#ifndef org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H
#define org_apache_lucene_search_suggest_document_TopSuggestDocsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
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
                mid_init$_2936d2706a18a684,
                mid_collect_540b2b23d51b1efd,
                mid_collect_71bd587f44f798d5,
                mid_finish_3720c61b0679eb3e,
                mid_get_68fc6b0bba450b34,
                mid_getCountToCollect_20fbf7565993c3d7,
                mid_scoreMode_45dfdcf7e901559d,
                mid_doSetNextReader_b7b06dce0a4097ed,
                mid_doSkipDuplicates_947277eca0748c4e,
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
