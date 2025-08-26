#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecModel_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecModel_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            class Word2VecModel;
          }
        }
      }
      namespace util {
        class TermAndVector;
        class BytesRef;
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

            class Word2VecModel : public ::org::apache::lucene::index::FloatVectorValues {
             public:
              enum {
                mid_init$_645c25455f5b9b1c,
                mid_addTermAndVector_b464c263d076fb4f,
                mid_copy_fa879f6e4066ded6,
                mid_dimension_bd89ce15dad49192,
                mid_size_bd89ce15dad49192,
                mid_termValue_1e79f110a34c4312,
                mid_vectorValue_3d03ef295b78a3d0,
                mid_vectorValue_4392f4b0f19a3288,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Word2VecModel(jobject obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Word2VecModel(const Word2VecModel& obj) : ::org::apache::lucene::index::FloatVectorValues(obj) {}

              Word2VecModel(jint, jint);

              void addTermAndVector(const ::org::apache::lucene::util::TermAndVector &) const;
              Word2VecModel copy() const;
              jint dimension() const;
              jint size() const;
              ::org::apache::lucene::util::BytesRef termValue(jint) const;
              JArray< jfloat > vectorValue(const ::org::apache::lucene::util::BytesRef &) const;
              JArray< jfloat > vectorValue(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(Word2VecModel);
            extern PyTypeObject *PY_TYPE(Word2VecModel);

            class t_Word2VecModel {
            public:
              PyObject_HEAD
              Word2VecModel object;
              static PyObject *wrap_Object(const Word2VecModel&);
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
