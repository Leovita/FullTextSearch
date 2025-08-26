#ifndef org_apache_lucene_util_hnsw_RandomVectorScorer_H
#define org_apache_lucene_util_hnsw_RandomVectorScorer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
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
      namespace util {
        namespace hnsw {

          class RandomVectorScorer : public ::java::lang::Object {
           public:
            enum {
              mid_getAcceptOrds_952ad757d5b0c3b2,
              mid_maxOrd_bd89ce15dad49192,
              mid_ordToDoc_a3904e10f5bb9437,
              mid_score_5873a23b935a9d49,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RandomVectorScorer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RandomVectorScorer(const RandomVectorScorer& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
            jint maxOrd() const;
            jint ordToDoc(jint) const;
            jfloat score(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(RandomVectorScorer);
          extern PyTypeObject *PY_TYPE(RandomVectorScorer);

          class t_RandomVectorScorer {
          public:
            PyObject_HEAD
            RandomVectorScorer object;
            static PyObject *wrap_Object(const RandomVectorScorer&);
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
