#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilter_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class SuggestStopFilter : public ::org::apache::lucene::analysis::TokenFilter {
             public:
              enum {
                mid_init$_c584271ff3a78226,
                mid_end_e7bdbe105ce1bafb,
                mid_incrementToken_9aa4f33e82ea333f,
                mid_reset_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestStopFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestStopFilter(const SuggestStopFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

              SuggestStopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);

              void end() const;
              jboolean incrementToken() const;
              void reset() const;
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
            extern PyType_Def PY_TYPE_DEF(SuggestStopFilter);
            extern PyTypeObject *PY_TYPE(SuggestStopFilter);

            class t_SuggestStopFilter {
            public:
              PyObject_HEAD
              SuggestStopFilter object;
              static PyObject *wrap_Object(const SuggestStopFilter&);
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
