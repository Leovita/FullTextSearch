#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymProviderFactory_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymProviderFactory_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            class Word2VecSynonymProvider;
          }
        }
      }
      namespace util {
        class ResourceLoader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {

            class Word2VecSynonymProviderFactory : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Word2VecSynonymProviderFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Word2VecSynonymProviderFactory(const Word2VecSynonymProviderFactory& obj) : ::java::lang::Object(obj) {}

              Word2VecSynonymProviderFactory();
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
            extern PyType_Def PY_TYPE_DEF(Word2VecSynonymProviderFactory);
            extern PyTypeObject *PY_TYPE(Word2VecSynonymProviderFactory);

            class t_Word2VecSynonymProviderFactory {
            public:
              PyObject_HEAD
              Word2VecSynonymProviderFactory object;
              static PyObject *wrap_Object(const Word2VecSynonymProviderFactory&);
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
