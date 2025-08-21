#ifndef org_apache_lucene_sandbox_codecs_quantization_KMeans_H
#define org_apache_lucene_sandbox_codecs_quantization_KMeans_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            class KMeans$Results;
            class KMeans$KmeansInitializationMethod;
          }
        }
      }
      namespace index {
        class VectorSimilarityFunction;
        class FloatVectorValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {

            class KMeans : public ::java::lang::Object {
             public:
              enum {
                mid_cluster_75b71a397eca1011,
                mid_cluster_335ac930e40eff43,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KMeans(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KMeans(const KMeans& obj) : ::java::lang::Object(obj) {}

              static jint DEFAULT_ITRS;
              static jint DEFAULT_RESTARTS;
              static jint DEFAULT_SAMPLE_SIZE;
              static jint MAX_NUM_CENTROIDS;

              static ::org::apache::lucene::sandbox::codecs::quantization::KMeans$Results cluster(const ::org::apache::lucene::index::FloatVectorValues &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jint);
              static ::org::apache::lucene::sandbox::codecs::quantization::KMeans$Results cluster(const ::org::apache::lucene::index::FloatVectorValues &, jint, jboolean, jlong, const ::org::apache::lucene::sandbox::codecs::quantization::KMeans$KmeansInitializationMethod &, jboolean, jint, jint, jint);
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
      namespace sandbox {
        namespace codecs {
          namespace quantization {
            extern PyType_Def PY_TYPE_DEF(KMeans);
            extern PyTypeObject *PY_TYPE(KMeans);

            class t_KMeans {
            public:
              PyObject_HEAD
              KMeans object;
              static PyObject *wrap_Object(const KMeans&);
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
