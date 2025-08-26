#ifndef org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter_H
#define org_apache_lucene_analysis_ngram_EdgeNGramTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
      namespace analysis {
        namespace ngram {

          class EdgeNGramTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_40ae3e19a9468a36,
              mid_init$_a5a9f45da9cd84ef,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EdgeNGramTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EdgeNGramTokenFilter(const EdgeNGramTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jboolean DEFAULT_PRESERVE_ORIGINAL;

            EdgeNGramTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            EdgeNGramTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint, jboolean);

            void end() const;
            jboolean incrementToken() const;
            void reset() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {
          extern PyType_Def PY_TYPE_DEF(EdgeNGramTokenFilter);
          extern PyTypeObject *PY_TYPE(EdgeNGramTokenFilter);

          class t_EdgeNGramTokenFilter {
          public:
            PyObject_HEAD
            EdgeNGramTokenFilter object;
            static PyObject *wrap_Object(const EdgeNGramTokenFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
