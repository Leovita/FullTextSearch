#ifndef org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$Euclidean_H
#define org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$Euclidean_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizedVectorSimilarity;
        }
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

          class ScalarQuantizedVectorSimilarity$Euclidean : public ::java::lang::Object {
           public:
            enum {
              mid_init$_c771a95b0227fb6a,
              mid_score_ce358dca2a169081,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorSimilarity$Euclidean(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorSimilarity$Euclidean(const ScalarQuantizedVectorSimilarity$Euclidean& obj) : ::java::lang::Object(obj) {}

            ScalarQuantizedVectorSimilarity$Euclidean(jfloat);

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
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorSimilarity$Euclidean);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorSimilarity$Euclidean);

          class t_ScalarQuantizedVectorSimilarity$Euclidean {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorSimilarity$Euclidean object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorSimilarity$Euclidean&);
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
