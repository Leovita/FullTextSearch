#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymProvider_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecSynonymProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            class Word2VecModel;
            class TermAndBoost;
          }
        }
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {

            class Word2VecSynonymProvider : public ::java::lang::Object {
             public:
              enum {
                mid_init$_22abf4d85a329396,
                mid_getSynonyms_621a21d721d6661f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Word2VecSynonymProvider(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Word2VecSynonymProvider(const Word2VecSynonymProvider& obj) : ::java::lang::Object(obj) {}

              Word2VecSynonymProvider(const ::org::apache::lucene::analysis::synonym::word2vec::Word2VecModel &);

              ::java::util::List getSynonyms(const ::org::apache::lucene::util::BytesRef &, jint, jfloat) const;
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
            extern PyType_Def PY_TYPE_DEF(Word2VecSynonymProvider);
            extern PyTypeObject *PY_TYPE(Word2VecSynonymProvider);

            class t_Word2VecSynonymProvider {
            public:
              PyObject_HEAD
              Word2VecSynonymProvider object;
              static PyObject *wrap_Object(const Word2VecSynonymProvider&);
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
