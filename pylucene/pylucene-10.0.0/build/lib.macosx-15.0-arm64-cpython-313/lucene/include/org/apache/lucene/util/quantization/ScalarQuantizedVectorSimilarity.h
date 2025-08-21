#ifndef org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity_H
#define org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizedVectorSimilarity;
        }
      }
      namespace index {
        class VectorSimilarityFunction;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {

          class ScalarQuantizedVectorSimilarity : public ::java::lang::Object {
           public:
            enum {
              mid_fromVectorSimilarity_75ac978e7d414df0,
              mid_score_ce358dca2a169081,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorSimilarity(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorSimilarity(const ScalarQuantizedVectorSimilarity& obj) : ::java::lang::Object(obj) {}

            static ScalarQuantizedVectorSimilarity fromVectorSimilarity(const ::org::apache::lucene::index::VectorSimilarityFunction &, jfloat, jbyte);
            jfloat score(const JArray< jbyte > &, jfloat, const JArray< jbyte > &, jfloat) const;
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
      namespace util {
        namespace quantization {
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorSimilarity);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorSimilarity);

          class t_ScalarQuantizedVectorSimilarity {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorSimilarity object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorSimilarity&);
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
