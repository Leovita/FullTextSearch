#ifndef org_apache_lucene_internal_vectorization_VectorizationProvider_H
#define org_apache_lucene_internal_vectorization_VectorizationProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {
          class VectorizationProvider;
          class PostingDecodingUtil;
          class VectorUtilSupport;
        }
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
      }
      namespace store {
        class IndexInput;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {

          class VectorizationProvider : public ::java::lang::Object {
           public:
            enum {
              mid_getInstance_b200d10436ab9b82,
              mid_getLucene99FlatVectorsScorer_0a520ed2ec7fc582,
              mid_getVectorUtilSupport_57551dfdf3ac1825,
              mid_newPostingDecodingUtil_d0d79baa99553ca3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VectorizationProvider(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VectorizationProvider(const VectorizationProvider& obj) : ::java::lang::Object(obj) {}

            static VectorizationProvider getInstance();
            ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer getLucene99FlatVectorsScorer() const;
            ::org::apache::lucene::internal::vectorization::VectorUtilSupport getVectorUtilSupport() const;
            ::org::apache::lucene::internal::vectorization::PostingDecodingUtil newPostingDecodingUtil(const ::org::apache::lucene::store::IndexInput &) const;
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
      namespace internal {
        namespace vectorization {
          extern PyType_Def PY_TYPE_DEF(VectorizationProvider);
          extern PyTypeObject *PY_TYPE(VectorizationProvider);

          class t_VectorizationProvider {
          public:
            PyObject_HEAD
            VectorizationProvider object;
            static PyObject *wrap_Object(const VectorizationProvider&);
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
