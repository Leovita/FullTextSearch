#ifndef org_apache_lucene_analysis_synonym_word2vec_Word2VecModel_H
#define org_apache_lucene_analysis_synonym_word2vec_Word2VecModel_H

#include "org/apache/lucene/index/FloatVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class TermAndVector;
      }
      namespace analysis {
        namespace synonym {
          namespace word2vec {
            class Word2VecModel;
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

            class Word2VecModel : public ::org::apache::lucene::index::FloatVectorValues {
             public:
              enum {
                mid_init$_e13cff512ebda969,
                mid_addTermAndVector_d1d721862b22db11,
                mid_copy_49612d1a82445b67,
                mid_dimension_20fbf7565993c3d7,
                mid_size_20fbf7565993c3d7,
                mid_termValue_29bb531a30fe8369,
                mid_vectorValue_44a5a01e0d30e1db,
                mid_vectorValue_837967dda86e7ad8,
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
