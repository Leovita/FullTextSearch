#ifndef org_apache_lucene_internal_vectorization_VectorizationProvider_H
#define org_apache_lucene_internal_vectorization_VectorizationProvider_H

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
      namespace internal {
        namespace vectorization {
          class PostingDecodingUtil;
          class VectorizationProvider;
          class VectorUtilSupport;
        }
      }
      namespace store {
        class IndexInput;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
      }
    }
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
              mid_getInstance_cc4d14999659b96e,
              mid_getLucene99FlatVectorsScorer_7e681abd40bf9d07,
              mid_getVectorUtilSupport_94b8af9d1480c6a6,
              mid_newPostingDecodingUtil_0d80484d55b25f4a,
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
