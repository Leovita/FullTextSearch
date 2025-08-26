#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymFilter_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace synonym {
          namespace word2vec {
            class Word2VecSynonymProvider;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {

            class Word2VecSynonymFilter : public ::org::apache::lucene::analysis::TokenFilter {
             public:
              enum {
                mid_init$_9f4bdd9d28222bae,
                mid_incrementToken_9aa4f33e82ea333f,
                mid_reset_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Word2VecSynonymFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Word2VecSynonymFilter(const Word2VecSynonymFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

              Word2VecSynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::synonym::word2vec::Word2VecSynonymProvider &, jint, jfloat);

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
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            extern PyType_Def PY_TYPE_DEF(Word2VecSynonymFilter);
            extern PyTypeObject *PY_TYPE(Word2VecSynonymFilter);

            class t_Word2VecSynonymFilter {
            public:
              PyObject_HEAD
              Word2VecSynonymFilter object;
              static PyObject *wrap_Object(const Word2VecSynonymFilter&);
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
