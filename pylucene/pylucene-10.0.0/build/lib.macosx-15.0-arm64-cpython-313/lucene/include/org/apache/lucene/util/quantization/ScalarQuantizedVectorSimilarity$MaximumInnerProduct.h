#ifndef org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$MaximumInnerProduct_H
#define org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$MaximumInnerProduct_H

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

          class ScalarQuantizedVectorSimilarity$MaximumInnerProduct : public ::java::lang::Object {
           public:
            enum {
              mid_init$_fc755f783bf06a79,
              mid_score_ce358dca2a169081,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorSimilarity$MaximumInnerProduct(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorSimilarity$MaximumInnerProduct(const ScalarQuantizedVectorSimilarity$MaximumInnerProduct& obj) : ::java::lang::Object(obj) {}

            ScalarQuantizedVectorSimilarity$MaximumInnerProduct(jfloat, const ::org::apache::lucene::util::quantization::ScalarQuantizedVectorSimilarity$ByteVectorComparator &);

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
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorSimilarity$MaximumInnerProduct);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorSimilarity$MaximumInnerProduct);

          class t_ScalarQuantizedVectorSimilarity$MaximumInnerProduct {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorSimilarity$MaximumInnerProduct object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorSimilarity$MaximumInnerProduct&);
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
