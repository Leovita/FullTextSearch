#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymFilterFactory_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
      namespace analysis {
        class TokenStream;
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
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {

            class Word2VecSynonymFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_6a7e23584beb7c0f,
                mid_create_f3e050e998938273,
                mid_inform_4ba602df53b96765,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Word2VecSynonymFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Word2VecSynonymFilterFactory(const Word2VecSynonymFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

              static jint DEFAULT_MAX_SYNONYMS_PER_TERM;
              static jfloat DEFAULT_MIN_ACCEPTED_SIMILARITY;
              static ::java::lang::String *NAME;

              Word2VecSynonymFilterFactory();
              Word2VecSynonymFilterFactory(const ::java::util::Map &);

              ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
              void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
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
            extern PyType_Def PY_TYPE_DEF(Word2VecSynonymFilterFactory);
            extern PyTypeObject *PY_TYPE(Word2VecSynonymFilterFactory);

            class t_Word2VecSynonymFilterFactory {
            public:
              PyObject_HEAD
              Word2VecSynonymFilterFactory object;
              static PyObject *wrap_Object(const Word2VecSynonymFilterFactory&);
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
