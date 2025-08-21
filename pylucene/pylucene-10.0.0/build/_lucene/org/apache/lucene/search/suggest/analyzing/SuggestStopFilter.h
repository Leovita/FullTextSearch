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
                mid_init$_92e7098bbfc6f3de,
                mid_end_3720c61b0679eb3e,
                mid_incrementToken_947277eca0748c4e,
                mid_reset_3720c61b0679eb3e,
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
