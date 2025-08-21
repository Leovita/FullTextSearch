#ifndef org_apache_lucene_util_hnsw_RandomVectorScorer$AbstractRandomVectorScorer_H
#define org_apache_lucene_util_hnsw_RandomVectorScorer$AbstractRandomVectorScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {
          class RandomVectorScorer;
        }
        class Bits;
      }
      namespace index {
        class KnnVectorValues;
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
        namespace hnsw {

          class RandomVectorScorer$AbstractRandomVectorScorer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2404756915b7747,
              mid_getAcceptOrds_372c76d90ab3ad4a,
              mid_maxOrd_20fbf7565993c3d7,
              mid_ordToDoc_3c9bba330f083871,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RandomVectorScorer$AbstractRandomVectorScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RandomVectorScorer$AbstractRandomVectorScorer(const RandomVectorScorer$AbstractRandomVectorScorer& obj) : ::java::lang::Object(obj) {}

            RandomVectorScorer$AbstractRandomVectorScorer(const ::org::apache::lucene::index::KnnVectorValues &);

            ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
            jint maxOrd() const;
            jint ordToDoc(jint) const;
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
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(RandomVectorScorer$AbstractRandomVectorScorer);
          extern PyTypeObject *PY_TYPE(RandomVectorScorer$AbstractRandomVectorScorer);

          class t_RandomVectorScorer$AbstractRandomVectorScorer {
          public:
            PyObject_HEAD
            RandomVectorScorer$AbstractRandomVectorScorer object;
            static PyObject *wrap_Object(const RandomVectorScorer$AbstractRandomVectorScorer&);
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
