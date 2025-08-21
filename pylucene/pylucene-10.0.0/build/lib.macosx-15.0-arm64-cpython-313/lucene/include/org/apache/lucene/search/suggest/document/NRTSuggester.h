#ifndef org_apache_lucene_search_suggest_document_NRTSuggester_H
#define org_apache_lucene_search_suggest_document_NRTSuggester_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
      }
      namespace search {
        namespace suggest {
          namespace document {
            class TopSuggestDocsCollector;
            class CompletionPostingsFormat$FSTLoadMode;
            class NRTSuggester;
            class CompletionScorer;
          }
        }
      }
      namespace store {
        class IndexInput;
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

            class NRTSuggester : public ::java::lang::Object {
             public:
              enum {
                mid_getChildResources_aa58b3beec16cbbd,
                mid_load_26885a6ef2151b6e,
                mid_lookup_6b28c0196990c974,
                mid_ramBytesUsed_16939d9d0a9a9721,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit NRTSuggester(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              NRTSuggester(const NRTSuggester& obj) : ::java::lang::Object(obj) {}

              ::java::util::Collection getChildResources() const;
              static NRTSuggester load(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::search::suggest::document::CompletionPostingsFormat$FSTLoadMode &);
              void lookup(const ::org::apache::lucene::search::suggest::document::CompletionScorer &, const ::org::apache::lucene::util::Bits &, const ::org::apache::lucene::search::suggest::document::TopSuggestDocsCollector &) const;
              jlong ramBytesUsed() const;
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
            extern PyType_Def PY_TYPE_DEF(NRTSuggester);
            extern PyTypeObject *PY_TYPE(NRTSuggester);

            class t_NRTSuggester {
            public:
              PyObject_HEAD
              NRTSuggester object;
              static PyObject *wrap_Object(const NRTSuggester&);
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
