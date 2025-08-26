#ifndef org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$ByteVectorComparator_H
#define org_apache_lucene_util_quantization_ScalarQuantizedVectorSimilarity$ByteVectorComparator_H

#include "java/lang/Object.h"

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

          class ScalarQuantizedVectorSimilarity$ByteVectorComparator : public ::java::lang::Object {
           public:
            enum {
              mid_compare_75b7f528788b10ee,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScalarQuantizedVectorSimilarity$ByteVectorComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScalarQuantizedVectorSimilarity$ByteVectorComparator(const ScalarQuantizedVectorSimilarity$ByteVectorComparator& obj) : ::java::lang::Object(obj) {}

            jint compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
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
          extern PyType_Def PY_TYPE_DEF(ScalarQuantizedVectorSimilarity$ByteVectorComparator);
          extern PyTypeObject *PY_TYPE(ScalarQuantizedVectorSimilarity$ByteVectorComparator);

          class t_ScalarQuantizedVectorSimilarity$ByteVectorComparator {
          public:
            PyObject_HEAD
            ScalarQuantizedVectorSimilarity$ByteVectorComparator object;
            static PyObject *wrap_Object(const ScalarQuantizedVectorSimilarity$ByteVectorComparator&);
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
