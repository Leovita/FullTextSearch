#ifndef org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$DotProduct_H
#define org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$DotProduct_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {
          class ScalarQuantizedVectorSimilarity;
          class ScalarQuantizedVectorSimilarity$ByteVectorComparator;
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

          class ScalarQuantizedVectorSimilarity$DotProduct : public ::java::lang::Object {
           public:
            enum {
              mid_init$_078c7d36b61392b2,
              mid_score_c247ce6006875fda,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorSimilarity$DotProduct(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorSimilarity$DotProduct(const ScalarQuantizedVectorSimilarity$DotProduct& obj) : ::java::lang::Object(obj) {}

            ScalarQuantizedVectorSimilarity$DotProduct(jfloat, const ::org::apache::lucene::util::quantization::ScalarQuantizedVectorSimilarity$ByteVectorComparator &);

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
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorSimilarity$DotProduct);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorSimilarity$DotProduct);

          class t_ScalarQuantizedVectorSimilarity$DotProduct {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorSimilarity$DotProduct object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorSimilarity$DotProduct&);
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
